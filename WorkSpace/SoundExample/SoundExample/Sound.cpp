#include <iostream>
#include <Windows.h>
#include <time.h>
#include <mmsystem.h>
#include <conio.h>
#include <Digitalv.h>
#include <string.h>

//---------------음악을 사용할 헤더추가
#pragma comment(lib,"winmm.lib")

MCI_OPEN_PARMS      mciOpen; //파일을 로드

MCI_PLAY_PARMS       mciPlay; //파일을 재생

MCI_STATUS_PARMS   mciStatus; //파일의 상태

UINT wDeviceID = 0;  //재생위 위치값 0이면 처음으로돌려줌
DWORD Result; //결과값

std::string MusicName;

LPCTSTR MusicRoute;


WORD InitWAV(LPCTSTR lpszWave)
{

	mciOpen.lpstrDeviceType = L"MPEGVideo";

	//WaveAudio 대신 MPEGVideo를 사용하면 mp3 형식을 재생합니다.


	mciOpen.lpstrElementName = lpszWave;

	Result = mciSendCommand(wDeviceID, MCI_OPEN, MCI_OPEN_TYPE | MCI_OPEN_ELEMENT, (DWORD)(LPVOID)&mciOpen);

	//음악이 하나씩채워질때마다 +1증가한다
	wDeviceID = mciOpen.wDeviceID;

	//mciPlay.dwCallback = Result;

	if (Result)
		return Result;


	return 0;
}

void UpdateWav(int Play_Num)
{
	//MCI_NOTIFY 노래가 하나끝나면 노래끝
	// MCI_SEEK_TO_START 음원재생을 처음위치
	int playNum = Play_Num;
	mciSendCommand(Play_Num, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);
	
	
	//맨앞숫자는 재생번호 
	//a_Word = mciSendCommand(1, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);
	//mciSendCommand(Play_Num,MCI_RESUME,0,NULL);



}

void Pause(int Player_Num)
{
	mciSendCommand(Player_Num, MCI_PAUSE, MCI_SEEK_TO_START, (DWORD)(LPVOID)NULL);
}

void ResetWav(int Player_Num)
{
	mciSendCommand(Player_Num, MCI_SEEK, MCI_SEEK_TO_START, (DWORD)(LPVOID)NULL);

}

void PlayWav(int Play_Num)
{
	int playNum = Play_Num;
	mciSendCommand(Play_Num, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);
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
	//해당음악을 초기화 경로를 넘겨준다
	InitWAV(L".\\Music\\seventeen.mp3");
	InitWAV(L".\\Music\\jangbumzun.mp3");

	UpdateWav(1);	//번호순에 맞는 음악이 재생됨 첫번째들어간게 1
	getchar();


	DestroyWav();	//메모리를 꼭해제
	return 0;
}