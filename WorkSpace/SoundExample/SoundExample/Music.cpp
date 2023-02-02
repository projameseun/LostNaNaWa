
#include "Music.h"



WORD InitMP3(LPCTSTR lpszWave)	//"안녕하세요"
{

	mciOpen.lpstrDeviceType = L"MPEGVideo";	//Mp3를 재생하기위해서 먼저 연다

	//WaveAudio 대신 MPEGVideo를 사용하면 mp3 형식을 재생합니다.
	//WaveAudio 이거는 wav 파일


	mciOpen.lpstrElementName = lpszWave;

	/*_In_ MCIDEVICEID mciId,
		_In_ UINT uMsg,
		_In_opt_ DWORD_PTR dwParam1,
		_In_opt_ DWORD_PTR dwParam2*/

	Result = mciSendCommand(wDeviceID, MCI_OPEN, MCI_OPEN_TYPE | MCI_OPEN_ELEMENT, (DWORD)(LPVOID)&mciOpen);

	//음악이 하나씩채워질때마다 +1증가한다
	wDeviceID = mciOpen.wDeviceID;

	//mciPlay.dwCallback = Result;

	if (Result)
		return Result;


	return 0;
}

void UpdateMP3(int Play_Num)
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

