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

void MusicPlayMenuPrint()
{
	std::cout << "Music 재생 프로그램 입니다" << std::endl;
	std::cout << "원하는 노래를 선택 해주시면 됩니다" << std::endl;
	std::cout << "1.SevenTeen - Troye Sivan" << std::endl;
	std::cout << "2.Memories - Maroon5" << std::endl;
	std::cout << "3.지상에영원으로 - 유다은" << std::endl;
	std::cout << "4.2002 - Anne Marie" << std::endl;
	std::cout << "5.잠이오질 않네요 - 장범준" << std::endl;
	std::cout << "6.고백연습 - 경서에게" << std::endl;
	std::cout << "7.TiemBomb - AllTimeLow" << std::endl;
	std::cout << "8.Onepiece - Onepiece" << std::endl;
	std::cout << "9.Psycho - PostMalone" << std::endl;
	std::cout << "10.너의모든순간 - 성시경" << std::endl;
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

void ResetWav(int Player_Num)
{
	mciSendCommand(Player_Num, MCI_SEEK, MCI_SEEK_TO_START, (DWORD)(LPVOID)NULL);

}

void UpdateWav(int Play_Num)
{
	int playNum = Play_Num;
	mciSendCommand(Play_Num, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);
	//맨앞숫자는 재생번호 
	//a_Word = mciSendCommand(1, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&mciPlay);

	//mciSendCommand(Play_Num,MCI_RESUME,0,NULL);
	while (true)
	{
		system("cls");
		MusicPlayMenuPrint();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		std::cout << MusicName[Play_Num - 1] << "  실행중입니다" << std::endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
		std::cout << "다른 노래를 재생하실려면 번호를 입력해주세요" << std::endl;
		std::cout << "프로그램을 종료하실려면 -99를 입력해주세요 " << std::endl;

		int iSelect = 0;
		std::cin >> iSelect;
		
		if (iSelect == 99)
		{
			break;
		}

		if (iSelect < 1 || iSelect > 10)
		{
			std::cout << "번호를 제대로 선택해주세요 " << std::endl;
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
	
	//1.노래 모두 초기화 10개 만일단 
	//2.해당되는 번호를 눌러주면 그노래 재생 
	//3.랜덤재생 가능 
	//4.랜덤이 될때 중복이 되면 안된다.
	//5.랜덤을 끄게되면 다시 원상복귀 시킨다 
	
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
			std::cout << "번호를 제대로 선택해주세요 " << std::endl;
			Sleep(500);

			continue;
		}


		UpdateWav(iSelect);
	

		
	
		break;
	}


	DestroyWav();
	return 0;
}