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

std::string MusicName[10];

LPCTSTR MusicRoute[10];

bool bTrue = true;

int iMusicStart = 0;

void MusicPlayMenuPrint()
{
	std::cout << "Music 재생 프로그램 입니다" << std::endl;
	std::cout << "원하는 노래를 선택 해주시면 됩니다" << std::endl;
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

	//WaveAudio 대신 MPEGVideo를 사용하면 mp3 형식을 재생합니다.


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
	//맨앞숫자는 재생번호 
	//a_Word = mciSendCommand(1, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);

	//mciSendCommand(Play_Num,MCI_RESUME,0,NULL);
	while (iMusicStart == 0)
	{
		system("cls");
		MusicPlayMenuPrint();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		std::cout << MusicName[Play_Num - 1] << "  실행중입니다" << std::endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
		std::cout << "다른 노래를 재생하실려면 번호를 입력해주세요" << std::endl;
		std::cout << "프로그램을 종료하실려면 -99를 입력해주세요 " << std::endl; 
		std::cout << "일시정지하고 다시 킬려면 11을 입력해주세요 " << std::endl;

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
			std::cout << "번호를 제대로 선택해주세요 " << std::endl;
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
	
	//1.노래 모두 초기화 10개 만일단 
	//2.해당되는 번호를 눌러주면 그노래 재생 
	//3.랜덤재생 가능 
	//4.랜덤이 될때 중복이 되면 안된다.
	//5.2가지 모드를 지원한다 1.일반재생 2.랜덤재생
	
	
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
		

		std::cout << "1.일반재생" << std::endl;
		std::cout << "2.랜덤재생" << std::endl;
		std::cout << "3.나가기" << std::endl;

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
					std::cout << "번호를 제대로 선택해주세요 " << std::endl;
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
					std::cout << "번호를 제대로 선택해주세요 " << std::endl;
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