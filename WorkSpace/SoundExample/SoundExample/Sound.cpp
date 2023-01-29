#include <iostream>
#include <Windows.h>
#include <time.h>
#include <mmsystem.h>
#include <conio.h>
#include <Digitalv.h>
#include <string.h>

//---------------������ ����� ����߰�
#pragma comment(lib,"winmm.lib")

MCI_OPEN_PARMS      mciOpen; //������ �ε�

MCI_PLAY_PARMS       mciPlay; //������ ���

MCI_STATUS_PARMS   mciStatus; //������ ����

UINT wDeviceID = 0;  //����� ��ġ�� 0�̸� ó�����ε�����
DWORD Result; //�����

std::string MusicName;

LPCTSTR MusicRoute;


WORD InitWAV(LPCTSTR lpszWave)
{

	mciOpen.lpstrDeviceType = L"MPEGVideo";

	//WaveAudio ��� MPEGVideo�� ����ϸ� mp3 ������ ����մϴ�.


	mciOpen.lpstrElementName = lpszWave;

	Result = mciSendCommand(wDeviceID, MCI_OPEN, MCI_OPEN_TYPE | MCI_OPEN_ELEMENT, (DWORD)(LPVOID)&mciOpen);

	//������ �ϳ���ä���������� +1�����Ѵ�
	wDeviceID = mciOpen.wDeviceID;

	//mciPlay.dwCallback = Result;

	if (Result)
		return Result;


	return 0;
}

void UpdateWav(int Play_Num)
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


int main()
{
	//�ش������� �ʱ�ȭ ��θ� �Ѱ��ش�
	InitWAV(L".\\Music\\seventeen.mp3");
	InitWAV(L".\\Music\\jangbumzun.mp3");

	UpdateWav(1);	//��ȣ���� �´� ������ ����� ù��°���� 1
	getchar();


	DestroyWav();	//�޸𸮸� ������
	return 0;
}