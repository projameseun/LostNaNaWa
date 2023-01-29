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

LPCTSTR MusicRoute[10];

bool bTrue = true;

int iMusicStart = 0;

void MusicPlayMenuPrint()
{
	std::cout << "Music ��� ���α׷� �Դϴ�" << std::endl;
	std::cout << "���ϴ� �뷡�� ���� ���ֽø� �˴ϴ�" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << i + 1 << "." << MusicName[i] << std::endl;
	}
	
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

void UpdateWav(int Play_Num)
{
	int playNum = Play_Num;
	mciSendCommand(Play_Num, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);
	//�Ǿռ��ڴ� �����ȣ 
	//a_Word = mciSendCommand(1, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);

	//mciSendCommand(Play_Num,MCI_RESUME,0,NULL);
	while (iMusicStart == 0)
	{
		system("cls");
		MusicPlayMenuPrint();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		std::cout << MusicName[Play_Num - 1] << "  �������Դϴ�" << std::endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
		std::cout << "�ٸ� �뷡�� ����ϽǷ��� ��ȣ�� �Է����ּ���" << std::endl;
		std::cout << "���α׷��� �����ϽǷ��� -99�� �Է����ּ��� " << std::endl; 
		std::cout << "�Ͻ������ϰ� �ٽ� ų���� 11�� �Է����ּ��� " << std::endl;

		int iSelect = 0;
		std::cin >> iSelect;
		
		if (iSelect == 99)
		{
			DestroyWav();
			iMusicStart = 1;
		}

		if (iSelect == 11)
		{
			bTrue = !bTrue;
			if (bTrue == false)
			{

				Pause(playNum);
			}
			else
			{
				PlayWav(playNum);
			}

			continue;
		}


		if (iSelect < 1 || iSelect > 11)
		{
			std::cout << "��ȣ�� ����� �������ּ��� " << std::endl;
			Sleep(500);
			continue;
		}

		

		//continue;
		ResetWav(playNum);
		UpdateWav(iSelect);
		

		
		
	}
}





void Initial()
{
	for (int i = 0; i < 10; ++i)
	{
		if (MusicName[i] == "TroyeSIvan")
		{
			MusicRoute[i] = L".\\Music\\seventeen.mp3";
		}
		else if (MusicName[i] == "Maroon5")
		{
			MusicRoute[i] = L".\\Music\\Memories.mp3";
		}
		else if (MusicName[i] == "YouDaEn")
		{
			MusicRoute[i] = L".\\Music\\jisang.mp3";
		}
		else if (MusicName[i] == "JangBeomJun")
		{
			MusicRoute[i] = L".\\Music\\jangbumzun.mp3";
		}
		else if (MusicName[i] == "GyungSeo")
		{
			MusicRoute[i] = L".\\Music\\gyungseo.mp3";
		}
		else if (MusicName[i] == "AllTimeLow")
		{
			MusicRoute[i] = L".\\Music\\timebomb.mp3";
		}
		else if (MusicName[i] == "OnePiece")
		{
			MusicRoute[i] = L".\\Music\\onepiece.mp3";
		}
		else if (MusicName[i] == "PostMalone")
		{
			MusicRoute[i] = L".\\Music\\postmalone.mp3";

		}
		else if (MusicName[i] == "SungSiKyung")
		{
			MusicRoute[i] = L".\\Music\\sungsikyung.mp3";
		}
		else if (MusicName[i] == "AnneMarie")
		{
			MusicRoute[i] = L".\\Music\\2002.mp3";
		}
	}



	

	for (int i = 0; i < 10; ++i)
	{
		InitWAV(MusicRoute[i]);
	}
}

void ShffuleMusic()
{

	int idx1, idx2 = 0;
	std::string sTemp = "";

	

	for (int i = 0; i < 100; ++i)
	{
		idx1 = rand() % 10;
		idx2 = rand() % 10;

		sTemp = MusicName[idx1];
		MusicName[idx1] = MusicName[idx2];
		MusicName[idx2] = sTemp;
	}
}



int main()
{
	
	//1.�뷡 ��� �ʱ�ȭ 10�� ���ϴ� 
	//2.�ش�Ǵ� ��ȣ�� �����ָ� �׳뷡 ��� 
	//3.������� ���� 
	//4.������ �ɶ� �ߺ��� �Ǹ� �ȵȴ�.
	//5.2���� ��带 �����Ѵ� 1.�Ϲ���� 2.�������
	
	
	//InitWAV(L".\\Music\\GameStart.wav");
	srand(static_cast<unsigned int>(time(NULL)));


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



	while (true)
	{
		system("cls");
		

		std::cout << "1.�Ϲ����" << std::endl;
		std::cout << "2.�������" << std::endl;
		std::cout << "3.������" << std::endl;

		int iSelect = 0;
		std::cin >> iSelect;

		if (iSelect == 1)
		{
			
			Initial();

			iMusicStart = 0;

			while (true)
			{
				system("cls");
				MusicPlayMenuPrint();

				iSelect = 0;
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
		}
		else if (iSelect == 2)
		{
		
			ShffuleMusic();
			Initial();
		


			iMusicStart = 0;
			while (true)
			{
				system("cls");
				MusicPlayMenuPrint();

				iSelect = 0;
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
		}
		else if (iSelect == 3)
		{
			break;
		}

	}
	


	DestroyWav();
	return 0;
}