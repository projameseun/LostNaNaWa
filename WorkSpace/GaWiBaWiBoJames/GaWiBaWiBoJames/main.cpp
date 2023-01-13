#include <iostream>
#include <Windows.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>


/*
c,c++에서 키보드를 사용하는법
0:이전에 누른적이 없고 현재에도 누르지 않은상태
0x1:이전에 누른적이 있고 현재는 눌려있지 않은상태
0x8000 : 이전에 누른적이 없고 현재는 눌러있는 상태
0x8001 : 이전에 누른적이 있고 현재도 눌려있는 상태
*/


//전역
int iGameMode = 0;

int iForExit = 0;	//for문 보여주는 변수

int iPlayerScore = 0;
int iAIScore = 0;

#define ENTER 13

#define ESC 27


void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int resetgotox()
{

	return 40;
}

int resetgotoy()
{

	return 5;
}

int vsgotox()
{
	return 5;
}
int vsgotoy()
{
	return 5;
}
void resetColor()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
}

enum class SRP
{
	S = 1,
	R,
	P,
	Exit,
	MenuMode,
	MainMode,

};

enum class ComSRP
{
	ComS,
	ComR,
	ComP
};


//가위바위보 역동적 render표현 
void RenderStartOne(int _gotox, int _gotoy)
{
	int iStartX = _gotox;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_INTENSITY | FOREGROUND_RED);
	gotoxy(iStartX, _gotoy);

	std::cout << "□□□□□□□□□□□□□□□";			gotoxy(85, _gotoy);		std::cout << "□□□□□□□□□□□□□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□■■□■■□□□□";			gotoxy(85, _gotoy);		std::cout << "□□□□□□■■□■■□□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□■■□■■□□□□";			gotoxy(85, _gotoy);		std::cout << "□□□□□□■■□■■□□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□■■□■■□□□□";			gotoxy(85, _gotoy);		std::cout << "□□□□□□■■□■■□□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□■■■■■■■■□□□□";			gotoxy(85, _gotoy);		std::cout << "□□□■■■■■■■■□□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□■■■■■■■□□□□";			gotoxy(85, _gotoy);		std::cout << "□□□□■■■■■■■□□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□■■■■■□□□□□";			gotoxy(85, _gotoy);		std::cout << "□□□□□■■■■■□□□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□□□□□□□□□□";			gotoxy(85, _gotoy);		std::cout << "□□□□□□□□□□□□□□□";

	gotoxy(55, _gotoy);
	std::cout << "가위!";
}

void RenderStartTWO(int _gotox, int _gotoy)
{
	int iStartX = _gotox;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□□□□□□□□□□";		gotoxy(85, _gotoy);		std::cout << "□□□□□□□□□□□□□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□■■■□■■■■□□□";		gotoxy(85, _gotoy);		std::cout << "□□□□■■■□■■■■□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□■■□□□■□□□■□□□";		gotoxy(85, _gotoy);		std::cout << "□□■■□□□■□□□■□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□■□■■■■■■■■■□□□";		gotoxy(85, _gotoy);		std::cout << "□■□■■■■■■■■■□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□■■■■■■■■■■■□□□";		gotoxy(85, _gotoy);		std::cout << "□■■■■■■■■■■■□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□■■■■■■■■■■□□□";		gotoxy(85, _gotoy);		std::cout << "□□■■■■■■■■■■□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□■■■■■■■■■■□□□";		gotoxy(85, _gotoy);		std::cout << "□□■■■■■■■■■■□□□";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□□□□□□□□□□";		gotoxy(85, _gotoy);		std::cout << "□□□□□□□□□□□□□□□";

	gotoxy(55, _gotoy);
	std::cout << "바위!";
}

void RenderStartThree(int _gotox, int _gotoy)
{
	int iStartX = _gotox;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□□□□□□□□□□";		gotoxy(85, _gotoy);		std::cout << "□□□□□□□□□□□□□□□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "□□□■■□■■□■■□□■□";		gotoxy(85, _gotoy);		std::cout << "□□□■■□■■□■■□□■□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "■■□■■□■■□■■□■□□";		gotoxy(85, _gotoy);		std::cout << "■■□■■□■■□■■□■□□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "■■■■■■■■■■■■□□□";		gotoxy(85, _gotoy);		std::cout << "■■■■■■■■■■■■□□□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "□■□□□□□□□□■□□□□";		gotoxy(85, _gotoy);		std::cout << "□■□□□□□□□□■□□□□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "□□■□□□□□□□■□□□□";		gotoxy(85, _gotoy);		std::cout << "□□■□□□□□□□■□□□□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "□□□■■■■■■■□□□□□";		gotoxy(85, _gotoy);		std::cout << "□□□■■■■■■■□□□□□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "□□□□□□□□□□□□□□□";		gotoxy(85, _gotoy);		std::cout << "□□□□□□□□□□□□□□□";

	gotoxy(55, _gotoy);
	std::cout << "보!";



}

//playerSRP render 
int RenderPlayrAttackS(int _gotox, int _gotoy)
{
	int iStartX = _gotox;
	gotoxy(iStartX, _gotoy);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);

	std::cout << "□□□□□□□□□□□□□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□■■□■■□□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□■■□■■□□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□■■□■■□□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□■■■■■■■■□□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□■■■■■■■□□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□■■■■■□□□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□□□□□□□□□□";
	_gotoy++;
	_gotoy++;
	return _gotoy;

}

int RenderPlayrAttackR(int _gotox, int _gotoy)
{
	int iStartX = _gotox;

	gotoxy(iStartX, _gotoy);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□□□□□□□□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□■■■□■■■■□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□■■□□□■□□□■□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□■□■■■■■■■■■□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□■■■■■■■■■■■□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□■■■■■■■■■■□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□■■■■■■■■■■□□□";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□□□□□□□□□□";

	_gotoy++;
	_gotoy++;
	return _gotoy;
}

int RenderPlayrAttackP(int _gotox, int _gotoy)
{
	int iStartX = _gotox;

	gotoxy(iStartX, _gotoy);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	gotoxy(iStartX, _gotoy);
	std::cout << "□□□□□□□□□□□□□□□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "□□□■■□■■□■■□□■□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "■■□■■□■■□■■□■□□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "■■■■■■■■■■■■□□□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "□■□□□□□□□□■□□□□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "□□■□□□□□□□■□□□□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "□□□■■■■■■■□□□□□";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "□□□□□□□□□□□□□□□";

	_gotoy++;
	_gotoy++;
	return _gotoy;
}


//AISRP render
int RenderAIAttackS(int _gotox, int _gotoy)
{
	gotoxy(85, _gotoy);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	gotoxy(85, _gotoy);		std::cout << "□□□□□□□□□□□□□□□";
	_gotoy++;


	gotoxy(85, _gotoy);		std::cout << "□□□□□□■■□■■□□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□□□□□□■■□■■□□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□□□□□□■■□■■□□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□□□■■■■■■■■□□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□□□□■■■■■■■□□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□□□□□■■■■■□□□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□□□□□□□□□□□□□□□";
	_gotoy++;

	_gotoy++;
	_gotoy++;
	return _gotoy;
}

int RenderAIAttackR(int _gotox, int _gotoy)
{

	gotoxy(85, _gotoy);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	gotoxy(85, _gotoy);		std::cout << "□□□□□□□□□□□□□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□□□□■■■□■■■■□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□□■■□□□■□□□■□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□■□■■■■■■■■■□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□■■■■■■■■■■■□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□□■■■■■■■■■■□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□□■■■■■■■■■■□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□□□□□□□□□□□□□□□";
	_gotoy++;
	_gotoy++;
	return _gotoy;
}

int RenderAIAttackP(int _gotox, int _gotoy)
{

	gotoxy(85, _gotoy);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

	gotoxy(85, _gotoy);		std::cout << "□□□□□□□□□□□□□□□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "□□□■■□■■□■■□□■□";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "■■□■■□■■□■■□■□□";
	_gotoy++;
	gotoxy(85, _gotoy);		std::cout << "■■■■■■■■■■■■□□□";
	_gotoy++;
	gotoxy(85, _gotoy);		std::cout << "□■□□□□□□□□■□□□□";
	_gotoy++;
	gotoxy(85, _gotoy);		std::cout << "□□■□□□□□□□■□□□□";
	_gotoy++;
	gotoxy(85, _gotoy);		std::cout << "□□□■■■■■■■□□□□□";
	_gotoy++;
	gotoxy(85, _gotoy);		std::cout << "□□□□□□□□□□□□□□□";

	_gotoy++;
	_gotoy++;
	return _gotoy;
}


//Player가 이겻을때 render
void RenderPlayerWin(int _gotox, int _gotoy, int _player)
{
	int iStartX = _gotox;
	int iStartY = 0;
	//가위로 이겼을때 
	if (_player == (int)SRP::S)
	{

		//SRP
		iStartY = RenderPlayrAttackS(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<플레이어>";
		gotoxy(85, _gotoy);
		iStartY = RenderAIAttackP(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";



	}
	else if (_player == (int)SRP::R)		//바위로 이겻ㅇㄹ대
	{
		iStartY = RenderPlayrAttackR(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<플레이어>";
		gotoxy(85, _gotoy);

		iStartY = RenderAIAttackS(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";
	}
	else	//보로이겼을때
	{
		iStartY = RenderPlayrAttackP(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<플레이어>";
		gotoxy(85, _gotoy);

		iStartY = RenderAIAttackR(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";
	}


}
//Player가 졌을때 render
void RenderPlayerRose(int _gotox, int _gotoy, int _player)
{
	int iStartX = _gotox;
	int iStartY = 0;
	//가위로 이겼을때 
	if (_player == (int)SRP::S)
	{


		iStartY = RenderPlayrAttackS(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<플레이어>";
		gotoxy(85, _gotoy);
		iStartY = RenderAIAttackR(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";



		//std::cout << "가위!";


	}
	else if (_player == (int)SRP::R)		//바위로 이겻ㅇㄹ대
	{
		iStartY = RenderPlayrAttackR(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<플레이어>";
		gotoxy(85, _gotoy);

		iStartY = RenderAIAttackP(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";
	}
	else	//보로이겼을때
	{
		iStartY = RenderPlayrAttackP(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<플레이어>";
		gotoxy(85, _gotoy);

		iStartY = RenderAIAttackS(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";
	}
}
//Player가 비겼을때 render
void RenderPlayerDraw(int _gotox, int _gotoy, int _player)
{
	int iStartX = _gotox;
	int iStartY = 0;
	//가위로 이겼을때 
	if (_player == (int)SRP::S)
	{


		iStartY = RenderPlayrAttackS(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<플레이어>";
		gotoxy(85, _gotoy);
		iStartY = RenderAIAttackS(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";



		//std::cout << "가위!";


	}
	else if (_player == (int)SRP::R)
	{
		iStartY = RenderPlayrAttackR(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<플레이어>";
		gotoxy(85, _gotoy);

		iStartY = RenderAIAttackR(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";
	}
	else
	{
		iStartY = RenderPlayrAttackP(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<플레이어>";
		gotoxy(85, _gotoy);

		iStartY = RenderAIAttackP(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";
	}
}

//Main Render
#pragma region RenderSRP
void RenderMainSRP()
{
	int igotox = 0;
	int igotoy = 0;
	for (int i = 0; i < 3; ++i)
	{
		system("cls");	//system cls를 사용하게되면 커서의위치가 0,0으로 다시 초기화됨
		igotox = resetgotox();
		igotoy = resetgotoy();

		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		//	FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);

		if (i == 0)
		{

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_INTENSITY | FOREGROUND_RED);
			gotoxy(igotox, igotoy);
			std::cout << "□□□□□□□□□□□□□□□";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□□□□□■■□■■□□□□";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□□□□□■■□■■□□□□";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□□□□□■■□■■□□□□";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□□■■■■■■■■□□□□";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□□□■■■■■■■□□□□";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□□□□■■■■■□□□□□";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□□□□□□□□□□□□□□";
		}
		else if (i == 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_INTENSITY | FOREGROUND_BLUE);
			gotoxy(igotox, igotoy);
			std::cout << "□□□□□□□□□□□□□□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□□□■■■□■■■■□□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□■■□□□■□□□■□□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□■□■■■■■■■■■□□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□■■■■■■■■■■■□□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□■■■■■■■■■■□□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□■■■■■■■■■■□□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□□□□□□□□□□□□□□" << std::endl;
		}
		else
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			gotoxy(igotox, igotoy);
			std::cout << "□□□□□□□□□□□□□□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□□■■□■■□■■□□■□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "■■□■■□■■□■■□■□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "■■■■■■■■■■■■□□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□■□□□□□□□□■□□□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□■□□□□□□□■□□□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□□■■■■■■■□□□□□" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "□□□□□□□□□□□□□□□" << std::endl;


		}
		igotoy++;
		igotoy++;
		igotox -= 3;
		gotoxy(igotox, igotoy);
		resetColor();
		std::cout << "<======== 가위 바위 보  게임 =======>" << std::endl;
		igotoy++;
		igotoy++;
		igotox += 10;
		gotoxy(igotox, igotoy);
		std::cout << "시작:ENTER 나가기:ESC" << std::endl;
		Sleep(500);





	}
}

#pragma endregion RenderSRP


//AI와 싸울때 들어가는 Render Player에 가위,바위,보의 인자를 넘기게 된다.
int RenderSRPVS(int _player)	//컴퓨터와 싸울때
{
	int igotox = 0;
	int igotoy = 0;

	rand();
	//com 0 = 가위 
	//com 1 = 바위
	//com 2 = 바위 
	int iCom = rand() % 3 + 1;

	int iResult = _player - iCom;

	char c[25] = "";

	if (iForExit == 0)
	{
		for (int i = 0; i < 3; ++i)
		{
			system("cls");	//system cls를 사용하게되면 커서의위치가 0,0으로 다시 초기화됨
			igotox = vsgotox();
			igotoy = vsgotoy();

			//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//	FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);

			if (i == 0)
			{
				RenderStartOne(igotox, igotoy);

			}
			else if (i == 1)
			{
				RenderStartTWO(igotox, igotoy);
			}
			else
			{
				RenderStartThree(igotox, igotoy);

			}


			Sleep(500);

			if (i == 2) iForExit = 1;
		}
	}
	else  //플레이어와 컴퓨터가 싸울때
	{
		while (true)
		{
			int igotox = 0;
			int igotoy = 0;
			igotox = vsgotox();
			igotoy = vsgotoy();

			system("cls");

			//RenderPlayerWin(igotox, igotoy, 2);

			if (iResult == 1 || iResult == -2)		//이겼을때
			{
				RenderPlayerWin(igotox, igotoy, _player);
				gotoxy(55, 5);
				std::cout << "플레이어 승리 !";
				iPlayerScore++;



			}
			else if (iResult == 0)
			{
				RenderPlayerDraw(igotox, igotoy, _player);
				gotoxy(55, 5);
				std::cout << "비김 !";


			}
			else
			{
				RenderPlayerRose(igotox, igotoy, _player);
				gotoxy(55, 5);
				std::cout << "AI 승리 ";

				iAIScore++;

			}

			Sleep(500);

			//초기화색으로
			resetColor();
			std::cin.ignore();
			std::cin.getline(c, 25);
			iForExit = 0;
			return (int)SRP::Exit;
			break;
		}


	}




}


//Main에 있는 render
void Render(int _GameMode)
{


	if (_GameMode == (int)SRP::MenuMode)
	{

		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//FOREGROUND_INTENSITY | FOREGROUND_RED);

		RenderMainSRP();

	}
	else if (_GameMode == (int)SRP::MainMode)		//MainMode
	{


		int igotox = 50;
		int igotoy = 10;
		system("cls");
		gotoxy(igotox, igotoy);
		std::cout << "플레이어 이긴수: " << iPlayerScore;
		igotoy++;
		gotoxy(igotox, igotoy);
		std::cout << "AI 이긴수: " << iAIScore;
		igotoy++;
		gotoxy(igotox, igotoy);
		std::cout << "1.가위";
		igotoy++;
		gotoxy(igotox, igotoy);
		std::cout << "2.바위";
		igotoy++;
		gotoxy(igotox, igotoy);
		std::cout << "3.보";
		igotoy++;
		gotoxy(igotox, igotoy);
		std::cout << "4.나가기";
		igotoy++;
		gotoxy(igotox, igotoy);

		int iBuffer = 0; //키값
		std::cin >> iBuffer;
		if (iBuffer <= 0 || iBuffer > 4)
		{
			igotoy++;
			gotoxy(igotox, igotoy);

		}
		else if (iBuffer == 4)
		{
			iGameMode = 0;
		}
		else
		{
			while (true)
			{
				int igotox = 0;
				int igotoy = 0;

				if (iBuffer == (int)SRP::Exit)
				{
					//iGameMode = 0; //MenuMode 로 넘어감
					break;
				}

				int iWhileExit = RenderSRPVS(iBuffer);

				if ((int)SRP::Exit == iWhileExit)
					break;

				//iGameMode = (int)SRP::MainMode;
				//break;


			}//while
		}



	}
}


int main()
{



	srand(static_cast<unsigned int>(time(NULL)));

	/*
□□□□□□□□□□□□□□□
□□□□□□■■□■■□□□□
□□□□□□■■□■■□□□□
□□□□□□■■□■■□□□□
□□□■■■■■■■■□□□□
□□□□■■■■■■■□□□□
□□□□□■■■■■□□□□□
□□□□□□□□□□□□□□□


□□□□□□□□□□□□□□□
□□□□■■■□■■■■□□□
□□■■□□□■□□□■□□□
□■□■■■■■■■■■□□□
□■■■■■■■■■■■□□□
□□■■■■■■■■■■□□□
□□■■■■■■■■■■□□□
□□□□□□□□□□□□□□□


□□□□□□□□□□□□□□□
□□□■■□■■□■■□□■□
■■□■■□■■□■■□■□□
■■■■■■■■■■■■□□□
□■□□□□□□□□■□□□□
□□■□□□□□□□■□□□□
□□□■■■■■■■□□□□□
□□□□□□□□□□□□□□□

gotoxy좌표를 옮겨주는 함수
 주로 c/c++에서 자주사용된다
 GUI가 불가능할때 사용하면 매우 유용하다



	*/

	while (true)
	{
		system("cls");


		char c;

		//키보드가 입력되었는지를 확인하는함수, 버퍼의 내용을 확인하여 키의 입력이 잇다면 true 없다면 false
		//장점은 waiting함수가 아니라는 점이다. 
		if (_kbhit())	
		{
			c = _getch();	//마지막에 누른키 하나만을 받을수있고 두개이상을 못받는다 대각선불가능

			switch (c)
			{
			case ENTER:
				std::cout << "ENTER 눌럿음" << std::endl;
				iGameMode = 1;
				break;
			case ESC:
				iGameMode = 2;
				break;
			}
		}

		//if (GetAsyncKeyState(VK_RETURN) & 0x8000)
		//{

		//	std::cout << "ENTER 눌럿음" << std::endl;
		//	iGameMode = 1;

		//}

		if (iGameMode == 0)
		{
			Render((int)SRP::MenuMode);
		}
		else if (iGameMode == 1)
		{
			Render((int)SRP::MainMode);
		}






		//int iGameMode = 0;
		////std::cin >> iGameMode;

		////예외처리
		//if (iGameMode < 1 || iGameMode>4)
		//{
		//	std::cout << "번호를 제대로 선택해주세요" << std::endl;
		//	continue;
		//}
		//else if (iGameMode == 4)
		//{
		//	std::cout << "수고하셨습니다!" <<std::endl;
		//}


		if (iGameMode == 2)break;

	}



	gotoxy(resetgotox(), resetgotoy());
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	std::cout << "이용 해주셔서 감사합니다. ENTER 눌러주세요!" << std::endl;
	char c[25] = "";
	std::cin.ignore();
	std::cin.getline(c, 25);
	return 0;
}