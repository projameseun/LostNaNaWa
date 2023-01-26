#include <iostream>
#include <Windows.h>
#include <time.h>
#include <mmsystem.h>
#include <conio.h>
#include <Digitalv.h>
//---------------������ ����� ����߰�
#pragma comment(lib,"winmm.lib")

MCI_OPEN_PARMS      mciOpen; //������ �ε�

MCI_PLAY_PARMS       mciPlay; //������ ���

MCI_STATUS_PARMS   mciStatus; //������ ����

UINT wDeviceID = 0;  //����� ��ġ�� 0�̸� ó�����ε�����
DWORD Result; //�����




WORD InitWAV(LPCTSTR lpszWave)
{

	mciOpen.lpstrDeviceType = L"WaveAudio";

	//WaveAudio ��� MPEGVideo�� ����ϸ� mp3 ������ ����մϴ�.


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
	//�Ǿռ��ڴ� �����ȣ 
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
		std::cout << "Test���Դϴ� ���ǽ��뷡 Enterġ�� �����ϴ�" << std::endl;
		UpdateWav(1);
		getchar();
		break;
	}


	DestroyWav();
	return 0;
}