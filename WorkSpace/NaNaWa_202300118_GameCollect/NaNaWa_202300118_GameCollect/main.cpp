#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>


int ixpos = 0;
int iypos = 0;

int iStart = 1;

void gotoxy(int _x, int _y)
{
	COORD pos = { _x,_y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ResetPos()
{
	ixpos = 50;
	iypos = 2;
}

enum class Key
{
	ENTER = 13,
	ESC = 27,
};

void OddEvenGame()
{
	//게임 화면들어가기
	int icom = 0;
	std::string strPlayer;
	std::string strCom;
	int iCount = 0;
	int iExitCount = 0;
	iStart = 2;

	while (iStart == 2)
	{
		system("cls");
		ResetPos();
		gotoxy(ixpos, iypos);
		icom = rand() % 2;
		if (icom == 0)
		{
			strCom = "홀";
		}
		else if (icom == 1)
		{
			strCom = "짝";
		}

		std::cout << "이긴 횟수 : " << iCount;
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "홀 , 짝을 입력해주세요 :";

		if (iExitCount == 4)
		{
			iStart = 1;
		}

		std::cin >> strPlayer;

		iypos++;
		gotoxy(ixpos, iypos);


		//예외처리
		if (strPlayer != "홀" && strPlayer != "짝")
		{
			std::cin.ignore();
			std::cout << "홀 짝을 제대로 입력해주세요";
			getchar();

		}

		if (strPlayer == strCom)
		{
			std::cout << "Win";
			iCount++;
			Sleep(1000);

		}
		else if (strPlayer != strCom)
		{
			std::cout << "Lose";
			Sleep(1000);
		}


		++iExitCount;

	}//while
}



int main()
{

	srand(static_cast<unsigned int>(time(NULL)));

	while (iStart == 1)
	{
		system("cls");
		ResetPos();
		gotoxy(ixpos, iypos);
		std::cout << "<==================>";
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "=====홀짝 게임=======";
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "<==================>";
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "시작 : ENTER";
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "종료 : ESC";
		iypos++;
		gotoxy(ixpos, iypos);

		if (_kbhit())
		{
			char c = _getch();

			switch (c)
			{
			case (int)Key::ENTER:
			{
				OddEvenGame();
				break;
			}
			case(int)Key::ESC:
			{	
				iStart = 0;
				std::cout << "Enter를 누르면 종료가 됩니다";
				getchar();
				break;
			}
			default:
					break;
				
			}
		}//if (_kbhit())
		
		Sleep(1000);
		
	//ctrl + ] 바로 해당 반복문,조건문 맨 아래로 갈수 있다
	}//while

	return 0;
}