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
	COORD pos = { _x, _y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}



void Resetpos()
{
	ixpos = 50;
	iypos = 2;
}

void ColorInitial()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
}


enum class Key
{
	ENTER = 13,
	ESC = 27,
};


enum class Drink
{
	iCoffee = 1,
	iCoke,
	iWater,
	iEnergydrink,
	iMilk,
	iESC,
};

enum class BUY
{
	iBuy = 1,
	iESC,
};


void DrinkSelect()
{
	Resetpos();
	gotoxy(ixpos, iypos);
	std::cout << "1. 구매";

	iypos++;
	gotoxy(ixpos, iypos);
	std::cout << "2. 나가기";

	iypos++;
	gotoxy(ixpos, iypos);

}

void DONOTBUY()
{
	system("cls");
	Resetpos();
	gotoxy(ixpos, iypos);
	std::cout << "돈이 부족합니다";
	std::cin.ignore();
	getchar();

}

void DrinkBuy()
{


	Resetpos();
	gotoxy(ixpos, iypos);
	int i;

	for (i = 0; i < 5; ++i)
	{

		//srand(static_cast<unsigned int>(time(NULL)));
		if (i == 0)
		{
			system("cls");
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다.";
		}
		else if (i == 1)
		{
			system("cls");
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다..";
		}
		else if (i == 2)
		{
			system("cls");
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다...";
		}
		else if (i == 3)
		{
			system("cls");
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다....";
		}
		else if (i == 4)
		{
			system("cls");
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다.....";
		}
		Sleep(1000);
	} //if



}



//0.나가기메뉴
//1.음료수선택한다
//2. 1,구매 , 2 나가기	예외처리(금액이 부족하면 구매할수 없습니다)
//3. 구매중입니다 문구 띄우기 
//4. 중복구매(욕심나면)	커피,물등 여러개를 선택해서 한번에 구매할수잇는 기능



void Drinkgame()
{
	int iTotal = 0;
	int iCoffee = 0;
	int iCoke = 0;
	int	iWater = 0;
	int iMilk = 0;
	int iEnergydrink = 0;
	int iSelect = 0;
	int iMoney = 2000;
	int iESC = 0;

	while (true)
	{
		system("cls");
		Resetpos();
		gotoxy(ixpos, iypos);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
		ixpos = 100;
		gotoxy(ixpos, iypos);
		std::cout << "Money :" << iMoney;
		std::cout << " \\";
		ColorInitial();

		Resetpos();


		iypos++;
		iypos++;

		gotoxy(ixpos, iypos);
		std::cout << "1. 커피 = 1200\\";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "2. 콜라 = 1000\\";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "3. 물 = 800\\";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "4. 에너지드링크 = 1500\\";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "5. 우유 = 900\\";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "6. 나가기";

		iypos++;
		iypos++;

		gotoxy(ixpos, iypos);
		std::cout << "구매하실 음료수를 선택해주세요 : ";

		iypos++;
		gotoxy(50, iypos);
		std::cin >> iSelect;


		if (iSelect == (int)Drink::iCoffee)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iSelect;
				int iCoffee = 1200;


				if (iSelect == (int)BUY::iBuy)
				{
					if (iMoney < iCoffee)
					{
						DONOTBUY();

						break;
					}

					iMoney -= iCoffee;
					system("cls");
					DrinkBuy(); //구매중입니다.....
					break;
				}

				else if (iSelect == (int)BUY::iESC)
				{
					break;
				}




			}

		}

		else if (iSelect == (int)Drink::iCoke)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iSelect;
				int iCoke = 1000;


				if (iSelect == (int)BUY::iBuy)
				{
					if (iMoney < iCoke)
					{
						DONOTBUY();

						break;
					}

					iMoney -= iCoke;
					system("cls");
					DrinkBuy(); //구매중입니다.....
					break;
				}

				else if (iSelect == (int)BUY::iESC)
				{
					break;
				}




			}

		}


		else if (iSelect == (int)Drink::iWater)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iSelect;
				int iWater = 800;


				if (iSelect == (int)BUY::iBuy)
				{
					if (iMoney < iWater)
					{
						DONOTBUY();

						break;
					}

					iMoney -= iWater;
					system("cls");
					DrinkBuy(); //구매중입니다.....
					break;
				}

				else if (iSelect == (int)BUY::iESC)
				{
					break;
				}




			}

		}


		else if (iSelect == (int)Drink::iEnergydrink)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iSelect;
				int iEnergydrink = 1500;


				if (iSelect == (int)BUY::iBuy)
				{
					if (iMoney < iEnergydrink)
					{
						DONOTBUY();

						break;
					}

					iMoney -= iEnergydrink;
					system("cls");
					DrinkBuy(); //구매중입니다.....
					break;
				}

				else if (iSelect == (int)BUY::iESC)
				{
					break;
				}




			}

		}


		else if (iSelect == (int)Drink::iMilk)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iSelect;
				int iMilk = 900;


				if (iSelect == (int)BUY::iBuy)
				{
					if (iMoney < iMilk)
					{
						DONOTBUY();

						break;
					}

					iMoney -= iMilk;
					system("cls");
					DrinkBuy(); //구매중입니다.....
					break;

				}

				else if (iSelect == (int)BUY::iESC)
				{
					break;
				}




			}

		}

		else if (iSelect == (int)Drink::iESC)
		{
			break;
		}
	}//while-Drinkgame

}





int main()
{

	//srand(static_cast<unsigned int>(time(NULL)));


	while (iStart == 1)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);

		system("cls");
		Resetpos();
		gotoxy(ixpos, iypos);
		std::cout << "■■■■■■■■■";


		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "■              ■";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "■  음료수게임  ■";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "■              ■";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "■■■■■■■■■";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "■■■■■■■■■";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "■□□□□■■□■";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "■□□□□■■□■";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "■■■■■■■■■";

		iypos++;
		gotoxy(ixpos, iypos);

		ColorInitial();

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
			case(int)Key::ENTER:
			{
				Drinkgame();
				break;
			}
			case(int)Key::ESC:
			{
				iStart = 0;
				std::cout << "ENTER를 누르면 게임을 종료합니다";
				getchar();
				break;
			}
			default:
				break;
			}
		} //if (_kbhit())

		Sleep(1000);

	}//while




	return 0;
}