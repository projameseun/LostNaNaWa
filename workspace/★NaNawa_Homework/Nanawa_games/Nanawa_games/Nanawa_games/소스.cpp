#include <iostream>
#include <conio.h> //kbhit, getch 함수 헤더파일
#include <Windows.h>
#include <time.h>
#include <string.h>

int ixpos = 0;
int iypos = 0;


enum class getch
{
	ESC = 27,
	ENTER = 13,
};

void Resetpos()
{
	ixpos = 50;
	iypos = 2;
}


void gotoxy(int _x, int _y)
{

	COORD pos = { _x,_y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

enum class gamenumber
{
	Drinkgame = 1,
	Updowngame,
	HnJgame,
	BRgame,
	Taxigame,
	GameEnd,
};

//----드링크게임----//

enum class DRINK
{
	iCoffee = 1,
	iCoke,
	iTrevi,
	iWater,
	iOrange,
	iEsc,
};

enum class BUY
{
	iBuy = 1,
	iEsc,
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

void NotBuy()
{
	system("cls");
	Resetpos();
	gotoxy(ixpos, iypos);
	std::cout << "돈이 부족합니다";
	std::cin.ignore();
	Sleep(1000);
}

void DrinkBuy()
{
	Resetpos();
	gotoxy(ixpos, iypos);
	int i;

	for (i = 0;  i < 5; ++i)
	{
		if (i == 0)
		{
			system("cls");
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다.";
		}
		else if (i == 1)
		{
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다..";
		}
		else if (i == 2)
		{
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다...";
		}
		else if (i == 3)
		{
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다....";
		}
		else if (i == 4)
		{
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다.....";
		}
		Sleep(1000);
	}//for
}

void Drinkgame()
{
	int iTotal = 0;
	int iCoffee = 0;
	int iCoke = 0;
	int iTrevi = 0;
	int iWater = 0;
	int iOrange = 0;
	int iEsc = 0;
	int iMoney = 2000;
	int iChoice = 0;

	while (true)
	{
		system("cls");
		Resetpos();
		ixpos = 100;
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "Money :" << iMoney;
		std::cout << "\\";

		Resetpos();

		iypos++;
		iypos++;


		gotoxy(ixpos, iypos);
		std::cout << "1. 커피 = 1000원";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "2. 콜라 = 1200원";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "3. 트래비 = 1300원";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "4. 물 = 800원";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "5. 오렌지주스 = 1400원";

		
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "6. 게임 목록으로 나가기";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cin >> iChoice;

		if (iChoice == (int)DRINK::iCoffee)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iChoice;
				int iCoffee = 1000;

				if (iChoice == (int)BUY::iBuy)
				{
					if (iMoney < iCoffee)
					{
						NotBuy();
						break;

					}

					iMoney -= iCoffee;
					system("cls");
					DrinkBuy();
					break;

				}

				else if (iChoice == (int)BUY::iEsc)
				{
					break;
				}

			}
		}//if

		else if (iChoice == (int)DRINK::iCoke)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iChoice;
				int iCoke = 1200;

				if (iChoice == (int)BUY::iBuy)
				{
					if (iMoney < iCoke)
					{
						NotBuy();
						break;

					}

					iMoney -= iCoke;
					system("cls");
					DrinkBuy();
					break;

				}

				else if (iChoice == (int)BUY::iEsc)
				{
					break;
				}

			}
		}//Coke

		else if (iChoice == (int)DRINK::iTrevi)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iChoice;
				int iTrevi = 1300;

				if (iChoice == (int)BUY::iBuy)
				{
					if (iMoney < iTrevi)
					{
						NotBuy();
						break;

					}

					iMoney -= iTrevi;
					system("cls");
					DrinkBuy();
					break;

				}

				else if (iChoice == (int)BUY::iEsc)
				{
					break;
				}

			}
		}//Trevi

		else if (iChoice == (int)DRINK::iTrevi)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iChoice;
				int iTrevi = 1300;

				if (iChoice == (int)BUY::iBuy)
				{
					if (iMoney < iTrevi)
					{
						NotBuy();
						break;

					}

					iMoney -= iTrevi;
					system("cls");
					DrinkBuy();
					break;

				}

				else if (iChoice == (int)BUY::iEsc)
				{
					break;
				}

			}
		}//Trevi

		else if (iChoice == (int)DRINK::iWater)
		{
		while (true)
		{
			system("cls");
			DrinkSelect();
			std::cin >> iChoice;
			int iWater = 800;

			if (iChoice == (int)BUY::iBuy)
			{
				if (iMoney < iWater)
				{
					NotBuy();
					break;

				}

				iMoney -= iWater;
				system("cls");
				DrinkBuy();
				break;

			}

			else if (iChoice == (int)BUY::iEsc)
			{
				break;
			}

		}
		}//iWater

		else if (iChoice == (int)DRINK::iOrange)
		{
		while (true)
		{
			system("cls");
			DrinkSelect();
			std::cin >> iChoice;
			int iOrange = 1400;

			if (iChoice == (int)BUY::iBuy)
			{
				if (iMoney < iOrange)
				{
					NotBuy();
					break;

				}

				iMoney -= iOrange;
				system("cls");
				DrinkBuy();
				break;

			}

			else if (iChoice == (int)BUY::iEsc)
			{
				break;
			}

		}
		}//iOrange

		else if (iChoice == (int)DRINK::iEsc)
		{
			break;
		}//6번 나가기
	
	}

	Sleep(1000);
}











//----업다운게임----//

void Updowngame() 
{
	int iPlayer = 0;
	int iCom = 0;
	int iCount = 0;
	
	srand((unsigned int)time(NULL));
	iCom = rand() % 101;

	while (true)
	{
		system("cls");
		Resetpos();
		gotoxy(ixpos, iypos);
		std::cout << "UP & DOWN GAME" ;

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "숫자를 하나 입력해주세요";
		std::cin >> iPlayer;

		while (true)
		{
			if (iPlayer > iCom)
			{
				std::cout << " DOWN ";
				iCount++;
			}

			else if (iPlayer < iCom)
			{
				std::cout << "UP";
				iCount++;
			}
			
			else if (iPlayer == iCom)
			{
				std::cout << " 정답! ";
				std::cout << iCount << "번 만에 맞추었습니다";
			
			}

		}//while



	}//while

}

void UpdownNumber()
{


}









//----홀짝게임----//


void HnJgame() 
{	system("cls");
	Resetpos();
	gotoxy(ixpos, iypos);
	std::cout << "홀짝게임을 시작합니다";
}



//----베스킨라빈스31----//

void BRgame() 
{	system("cls");
	Resetpos();
	gotoxy(ixpos, iypos);
	std::cout << "베스킨라빈스31게임을 시작합니다";
}



//----택시게임----//

void Taxigame() 
{
	system("cls");
	Resetpos();
	gotoxy(ixpos, iypos);
	std::cout << "택시게임을 시작합니다";
}


//----게임목록----//

void gamestart()
{
	system("cls");
	int iSelect = 0;

	Resetpos();
	gotoxy(ixpos, iypos);

	iypos++;
	std::cout << "1. 드링크게임";

	gotoxy(ixpos, iypos);
	iypos++;
	std::cout << "2. 업다운게임";

	gotoxy(ixpos, iypos);
	iypos++;
	std::cout << "3. 홀짝게임";

	gotoxy(ixpos, iypos);
	iypos++;
	std::cout << "4. 베스킨라빈스31";

	gotoxy(ixpos, iypos);
	iypos++;
	std::cout << "5. 택시게임";

	gotoxy(ixpos, iypos);
	iypos++;
	std::cout << "6. 게임종료";

	gotoxy(ixpos, iypos);
	iypos++;
	std::cin >> iSelect;

	if (true)
	{
		iSelect;

		switch (iSelect)
		{

		case(int)gamenumber::Drinkgame:
		{
			Drinkgame();
			break;
		}

		case(int)gamenumber::Updowngame:
		{
			Updowngame();
			break;
		}

		case(int)gamenumber::HnJgame:
		{
			HnJgame();
			break;
		}

		case(int)gamenumber::BRgame:
		{
			BRgame();
			break;
		}

		case(int)gamenumber::Taxigame:
		{
			Taxigame();
			break;
		}

		

		default:
			break;
		}//switch
	}//if
}//gamestart



//------------MAIN ------------//

int main()
{
	while (true)

	{

		system("cls");
		Resetpos();
		gotoxy(ixpos, iypos);
		std::cout << "■■■■■■■■■■■";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "■게■임■모■음■집■";


		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "■■■■■■■■■■■";


		iypos++;
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
				case(int)getch::ENTER:
				{
					gamestart();
					break;
				}
				case(int)getch::ESC:
				{
					std::cout << "ENTER을 누르면 게임을 종료합니다";
					getchar();
					break;

				}
				default:
				break;
			}//switch
			break;
		}//if(_kbhit)

		Sleep(1000);
	}






return 0;
}