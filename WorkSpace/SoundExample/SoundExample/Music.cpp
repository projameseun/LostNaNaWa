
#include "Music.h"



WORD InitMP3(LPCTSTR lpszWave)	//"�ȳ��ϼ���"
{

	mciOpen.lpstrDeviceType = L"MPEGVideo";	//Mp3�� ����ϱ����ؼ� ���� ����

	//WaveAudio ��� MPEGVideo�� ����ϸ� mp3 ������ ����մϴ�.
	//WaveAudio �̰Ŵ� wav ����


	mciOpen.lpstrElementName = lpszWave;

	/*_In_ MCIDEVICEID mciId,
		_In_ UINT uMsg,
		_In_opt_ DWORD_PTR dwParam1,
		_In_opt_ DWORD_PTR dwParam2*/

	Result = mciSendCommand(wDeviceID, MCI_OPEN, MCI_OPEN_TYPE | MCI_OPEN_ELEMENT, (DWORD)(LPVOID)&mciOpen);

	//������ �ϳ���ä���������� +1�����Ѵ�
	wDeviceID = mciOpen.wDeviceID;

	//mciPlay.dwCallback = Result;

	if (Result)
		return Result;


	return 0;
}

void UpdateMP3(int Play_Num)
{
	//MCI_NOTIFY �뷡�� �ϳ������� �뷡��
	// MCI_SEEK_TO_START ��������� ó����ġ
	int playNum = Play_Num;
	mciSendCommand(Play_Num, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);


	//�Ǿռ��ڴ� �����ȣ 
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

