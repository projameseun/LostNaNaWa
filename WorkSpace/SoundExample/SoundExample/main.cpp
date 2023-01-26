#include <iostream>
#include <Windows.h>
#include <time.h>
#include <mmsystem.h>
#include <conio.h>
#include <Digitalv.h>
//---------------음악을 사용할 헤더추가
#pragma comment(lib,"winmm.lib")

MCI_OPEN_PARMS      mciOpen; //파일을 로드

MCI_PLAY_PARMS       mciPlay; //파일을 재생

MCI_STATUS_PARMS   mciStatus; //파일의 상태

UINT wDeviceID = 0;  //재생위 위치값 0이면 처음으로돌려줌
DWORD Result; //결과값




WORD InitWAV(LPCTSTR lpszWave)
{

	mciOpen.lpstrDeviceType = L"WaveAudio";

	//WaveAudio 대신 MPEGVideo를 사용하면 mp3 형식을 재생합니다.


	mciOpen.lpstrElementName = lpszWave;

	Result = mciSendCommand(wDeviceID, MCI_OPEN, MCI_OPEN_TYPE | MCI_OPEN_ELEMENT, (DWORD)(LPVOID)&mciOpen);

	
	wDeviceID = mciOpen.wDeviceID;

	//mciPlay.dwCallback = Result;

	if (Result)
		return Result;


	return 0;
}

void UpdateWav(int Play_Num)
{
	mciSendCommand(Play_Num, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);
	//맨앞숫자는 재생번호 
	//a_Word = mciSendCommand(1, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);

	//mciSendCommand(Play_Num,MCI_RESUME,0,NULL);
}

void ResetWav(int Player_Num)
{
	mciSendCommand(Player_Num, MCI_SEEK, MCI_SEEK_TO_START, (DWORD)(LPVOID)NULL);

}

void DestroyWav()
{
	if (wDeviceID > 0)
	{
		for (int i = 0; i < 20; i++)
		{
			mciSendCommand(i, MCI_CLOSE, 0, (DWORD)(LPVOID)NULL);
		}


	}
}



int main()
{
	
	
	
	//InitWAV(L".\\Music\\GameStart.wav");
	InitWAV(L".\\Music\\Onepiece.wav");
	//nitWAV(L".\\Music\\viva-la-vida.wav");
	
	while (true)
	{
		system("cls");
		std::cout << "Test중입니다 원피스노래 Enter치면 끝납니다" << std::endl;
		UpdateWav(1);
		getchar();
		break;
	}


	DestroyWav();
	return 0;
}