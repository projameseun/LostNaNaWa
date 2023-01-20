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

enum class Drink
{
	iCoffee =1,
	iCoke ,
	iWater,
	iMonster,
	iMilk ,
};

void ColorInitial()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
}

void OddEvenGame()
{
	//게임 화면들어가기
	int icom = 0;
	std::string strPlayer;
	std::string strCom;
	int iCount = 0;
	int iExitCount = 0;


	while (true)
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

		if (iExitCount == 5)
		{
			iypos++;
			gotoxy(ixpos, iypos);
			std::cin.ignore();
			std::cout << "게임이 끝났습니다 Enter를 눌러주세요";
			getchar();
			break;
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
			continue;

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


void DrinkGame()
{
	int iTotal = 0;
	int iMoney = 10000;		//사용자가 갖고있는 돈
	//음료수종류
	int iCoffee = 0;
	int iCoke = 0;
	int iWater = 0;
	int iMonster = 0;
	int iMilk = 0;
	//음료수 선택변수
	int iSelect = 0;

	//0.나가기메뉴
	//1.음료수선택한다
	//2. 1,구매 , 2 나가기	예외처리(금액이 부족하면 구매할수 없습니다)
	//3. 구매중입니다 문구 띄우기 
	//4. 중복구매(욕심나면)	커피,물등 여러개를 선택해서 한번에 구매할수잇는 기능

	while (true)
	{
		system("cls");
		ResetPos();
		gotoxy(ixpos, iypos);

		ixpos = 100;
		gotoxy(ixpos, iypos);
		std::cout << "Money :" << iMoney;
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
		std::cout << "\\";
		ColorInitial();

		ResetPos();
		gotoxy(ixpos, iypos);
		
		std::cout << "구매 하실 음료수를 선택해주세요 : ";
		//나가기메뉴

		//음료수종류

		std::cin >> iSelect;

		//if() //예외처리

		if (iSelect == (int)Drink::iCoffee)
		{

		}
		else if (iSelect == (int)Drink::iCoke)
		{

		}
		else if (iSelect == (int)Drink::iWater)
		{

		}
		else if (iSelect == (int)Drink::iMonster)
		{

		}
		else if (iSelect == (int)Drink::iMilk)
		{

		}
		else   //예외처리
		{
		}
		
		
		

	}//while (true)
	

	
}


int main()
{

	srand(static_cast<unsigned int>(time(NULL)));

	while (iStart == 1)
	{
		system("cls");
		ResetPos();
		gotoxy(ixpos, iypos);
		std::cout << "<========================>";
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "=====음료수 키오스크======";//std::cout << "=====홀짝 게임=======";
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "<=======================>";
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
				//OddEvenGame();
				DrinkGame();
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