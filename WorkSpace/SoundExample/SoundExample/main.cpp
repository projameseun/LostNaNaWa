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

std::string MusicName[10];

void MusicPlayMenuPrint()
{
	std::cout << "Music ��� ���α׷� �Դϴ�" << std::endl;
	std::cout << "���ϴ� �뷡�� ���� ���ֽø� �˴ϴ�" << std::endl;
	std::cout << "1.SevenTeen - Troye Sivan" << std::endl;
	std::cout << "2.Memories - Maroon5" << std::endl;
	std::cout << "3.���󿡿������� - ������" << std::endl;
	std::cout << "4.2002 - Anne Marie" << std::endl;
	std::cout << "5.���̿��� �ʳ׿� - �����" << std::endl;
	std::cout << "6.��鿬�� - �漭����" << std::endl;
	std::cout << "7.TiemBomb - AllTimeLow" << std::endl;
	std::cout << "8.Onepiece - Onepiece" << std::endl;
	std::cout << "9.Psycho - PostMalone" << std::endl;
	std::cout << "10.���Ǹ����� - ���ð�" << std::endl;
}



enum class MusicNumber
{
		TroyeSIvan = 1,
		Maroon5 ,
		YouDaEn,
		AnneMarie,
		JangBeomJun,
		GyungSeo,
		AllTimeLow,
		OnePiece,
		PostMalone,
		SungSiKyung,
		
};




WORD InitWAV(LPCTSTR lpszWave)
{

	mciOpen.lpstrDeviceType = L"MPEGVideo";

	//WaveAudio ��� MPEGVideo�� ����ϸ� mp3 ������ ����մϴ�.


	mciOpen.lpstrElementName = lpszWave;

	Result = mciSendCommand(wDeviceID, MCI_OPEN, MCI_OPEN_TYPE | MCI_OPEN_ELEMENT, (DWORD)(LPVOID)&mciOpen);

	
	wDeviceID = mciOpen.wDeviceID;

	//mciPlay.dwCallback = Result;

	if (Result)
		return Result;


	return 0;
}

void ResetWav(int Player_Num)
{
	mciSendCommand(Player_Num, MCI_SEEK, MCI_SEEK_TO_START, (DWORD)(LPVOID)NULL);

}

void UpdateWav(int Play_Num)
{
	int playNum = Play_Num;
	mciSendCommand(Play_Num, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);
	//�Ǿռ��ڴ� �����ȣ 
	//a_Word = mciSendCommand(1, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);

	//mciSendCommand(Play_Num,MCI_RESUME,0,NULL);
	while (true)
	{
		system("cls");
		MusicPlayMenuPrint();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		std::cout << MusicName[Play_Num - 1] << "  �������Դϴ�" << std::endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
		std::cout << "�ٸ� �뷡�� ����ϽǷ��� ��ȣ�� �Է����ּ���" << std::endl;
		std::cout << "���α׷��� �����ϽǷ��� -99�� �Է����ּ��� " << std::endl;

		int iSelect = 0;
		std::cin >> iSelect;
		
		if (iSelect == 99)
		{
			break;
		}

		if (iSelect < 1 || iSelect > 10)
		{
			std::cout << "��ȣ�� ����� �������ּ��� " << std::endl;
			Sleep(500);
			continue;
		}


		ResetWav(playNum);
		UpdateWav(iSelect);
		

		
		
	}
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

void Initial()
{
	InitWAV(L".\\Music\\seventeen.mp3");
	InitWAV(L".\\Music\\Memories.mp3");
	InitWAV(L".\\Music\\jisang.mp3");
	InitWAV(L".\\Music\\2002.mp3");
	InitWAV(L".\\Music\\jangbumzun.mp3");
	InitWAV(L".\\Music\\gyungseo.mp3");
	InitWAV(L".\\Music\\timebomb.mp3");
	InitWAV(L".\\Music\\onepiece.mp3");
	InitWAV(L".\\Music\\postmalone.mp3");
	InitWAV(L".\\Music\\sungsikyung.mp3");
}




int main()
{
	
	//1.�뷡 ��� �ʱ�ȭ 10�� ���ϴ� 
	//2.�ش�Ǵ� ��ȣ�� �����ָ� �׳뷡 ��� 
	//3.������� ���� 
	//4.������ �ɶ� �ߺ��� �Ǹ� �ȵȴ�.
	//5.������ ���ԵǸ� �ٽ� ���󺹱� ��Ų�� 
	
	//InitWAV(L".\\Music\\GameStart.wav");



	

	for (int i = 0; i < 10; ++i)
	{
		if (i == 0) MusicName[i] = "TroyeSIvan";
		else if(i == 1) MusicName[i] = "Maroon5";
		else if (i == 2) MusicName[i] = "YouDaEn";
		else if (i == 3) MusicName[i] = "AnneMarie";
		else if (i == 4) MusicName[i] = "JangBeomJun";
		else if (i == 5) MusicName[i] = "GyungSeo";
		else if (i == 6) MusicName[i] = "AllTimeLow";
		else if (i == 7) MusicName[i] = "OnePiece";
		else if (i == 8) MusicName[i] = "PostMalone";
		else if (i == 9) MusicName[i] = "SungSiKyung";
	}

	Initial();
	
	while (true)
	{
		system("cls");
		MusicPlayMenuPrint();
		
		int iSelect = 0;
		std::cin >> iSelect;

		if (iSelect < 1 || iSelect > 10)
		{
			std::cout << "��ȣ�� ����� �������ּ��� " << std::endl;
			Sleep(500);

			continue;
		}


		UpdateWav(iSelect);
	

		
	
		break;
	}


	DestroyWav();
	return 0;
}