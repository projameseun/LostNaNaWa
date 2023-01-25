#include <iostream>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#include <string.h>

//코인게임

//버퍼 좌표값을 옮겨주는 함수
void gotoxy(int _x, int _y)
{
	COORD pos = { _x,_y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


enum class Key
{
	UP = 72,
	DOWN = 80,
	LEFT = 75,
	RIGHT = 77,
	ENTER = 13,
	ESC = 27,
};

enum class Drink
{
	Coffee = 1,
	Sprite,
	Water,
	Monster,
	Color,
};

//std::cout << "1.커피";
//iyPos++;
//gotoxy(ixPos, iyPos);
//std::cout << "2.사이다";
//iyPos++;
//gotoxy(ixPos, iyPos);
//std::cout << "3.물";
//iyPos++;
//gotoxy(ixPos, iyPos);
//std::cout << "4.몬스터";
//iyPos++;
//gotoxy(ixPos, iyPos);
//std::cout << "5.콜라";

int ixPos = 50;
int iyPos = 2;

//홀짝게임
void RenderOddEvenGame()
{
	int icom = 0;
	std::string StrPlayer;
	std::string StrCom;
	int iCount = 0;
	int iExitNum = 0;


	while (iExitNum < 5)
	{

		system("cls");
		iyPos = 2;
		ixPos = 50;
		gotoxy(ixPos, iyPos);
		icom = rand() % 2;
		if (icom == 0)
		{
			StrCom = "홀";
		}
		else if (icom == 1)
		{
			StrCom = "짝";
		}

		std::cout << "홀,짝을 입력해주세요:";

		std::cin >> StrPlayer;

		iyPos++;
		gotoxy(ixPos, iyPos);

		if (StrPlayer != "홀" && StrPlayer != "짝")
		{
			std::cin.ignore();
			std::cout << "홀짝을 제대로 입력해주세요";

			getchar();
			continue;
		}

		if (StrPlayer == StrCom)
		{

			std::cout << "Win";
			Sleep(1000);
			iCount++;
		}
		else if (StrPlayer != StrCom)
		{
			std::cout << "Lose";
			Sleep(1000);
		}

		std::cin.ignore();
		iExitNum++;
	}//while (iExitNum < 5)

	iyPos++;
	gotoxy(ixPos, iyPos);
	std::cout << "이긴횟수:" << iCount;
	getchar();
}

void ResetPos()
{
	ixPos = 50;
	iyPos = 2;
	gotoxy(ixPos, iyPos);
}

void BuyExitCode()
{
	ResetPos();
	std::cout << "1.구매";
	iyPos++;
	gotoxy(ixPos, iyPos);
	std::cout << "2.나가기";
	iyPos++;
	gotoxy(ixPos, iyPos);
}

void BuyPrint()
{
	for (int i = 0; i < 5; ++i)
	{
		gotoxy(ixPos, iyPos);
		if (i == 0)
		{
			std::cout << "구매중입니다.";
		}
		else if (i == 1)
		{
			std::cout << "구매중입니다..";
		}
		else if (i == 2)
		{
			std::cout << "구매중입니다...";
		}
		else if (i == 3)
		{
			std::cout << "구매중입니다....";
		}
		else if (i == 4)
		{
			std::cout << "구매중입니다.....";
		}

		Sleep(1000);
	}//for (int i = 0; i < 5; ++i)
}

void ColorInitial()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
}

//음료수게임
void RenderDrink()
{
	//RenderOddEvenGame();
	int iTotal = 0;
	int iMoney = 1000;
	int iCoffee = 500;
	int iSprite = 1000;
	int iWater = 550;
	int iMonster = 2200;
	int iCola = 1000;
	int iSelect = 0;
	while (true)
	{
		system("cls");
		iyPos = 2;
		ixPos = 50;
		gotoxy(ixPos, iyPos);

		ixPos = 90;
		gotoxy(ixPos, iyPos);
		std::cout << "당신의 금액:" << iMoney;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
		std::cout << "\\";
		ColorInitial();
		ResetPos();


		std::cout << "구매하실 음료수를 선택해주세요";
		iyPos++;
		gotoxy(ixPos, iyPos);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
		std::cout << "■";
		ColorInitial();
		std::cout << "1.커피==>500\\";
		iyPos++;
		gotoxy(ixPos, iyPos);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
		std::cout << "■";
		ColorInitial();
		std::cout << "2.사이다==>1000\\";
		iyPos++;
		gotoxy(ixPos, iyPos);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		std::cout << "■";
		ColorInitial();
		std::cout << "3.물==>550\\";
		iyPos++;
		gotoxy(ixPos, iyPos);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
		std::cout << "■";
		ColorInitial();
		std::cout << "4.몬스터==>2200\\";
		iyPos++;
		gotoxy(ixPos, iyPos);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
		std::cout << "■";
		ColorInitial();
		;					std::cout << "5.콜라==>1000\\";
		iyPos++;
		gotoxy(ixPos, iyPos);
		std::cout << "6.나가기";
		iyPos++;
		gotoxy(ixPos, iyPos);

		std::cin >> iSelect;


		if (iMoney <= 0)
		{
			system("cls");
			gotoxy(30, 2);
			std::cout << "더이상 구매를 할수가 없습니다 다음에 또 오세요";
			std::cin.ignore();
			getchar();
			break;
		}

		if (iSelect == (int)Drink::Coffee)
		{
			while (true)
			{
				//구매를 하실건가요? 라는 문구를 넣어주는게 좋다 
				system("cls");

				BuyExitCode();
				int iBuy = 0;
				std::cin >> iBuy;
				if (iBuy == 1)	//커피
				{
					if (iMoney < iCoffee)
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						std::cout << "금액이 부족합니다";
						Sleep(1000);
						break;
					}
					else
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						iMoney -= iCoffee;
						//계산중 나타내기
						system("cls");
						BuyPrint();
						break;
					}
				}
				else if (iBuy == 2)
				{
					break;
				}
				else
				{
					continue;
				}

			}
		}
		else if (iSelect == (int)Drink::Sprite)
		{
			while (true)
			{
				//구매를 하실건가요? 라는 문구를 넣어주는게 좋다 
				system("cls");

				BuyExitCode();
				int iBuy = 0;
				std::cin >> iBuy;
				if (iBuy == 1)	//사이다
				{
					if (iMoney < iSprite)
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						std::cout << "금액이 부족합니다";
						Sleep(1000);
						break;
					}
					else
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						iMoney -= iSprite;
						//계산중 나타내기
						system("cls");
						BuyPrint();
						break;
					}
				}
				else if (iBuy == 2)
				{
					break;
				}
				else
				{
					continue;
				}

			}
		}
		else if (iSelect == (int)Drink::Water)
		{
			while (true)
			{
				//구매를 하실건가요? 라는 문구를 넣어주는게 좋다 
				system("cls");

				BuyExitCode();
				int iBuy = 0;
				std::cin >> iBuy;
				if (iBuy == 1)	//물
				{
					if (iMoney < iWater)
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						std::cout << "금액이 부족합니다";
						Sleep(1000);
						break;
					}
					else
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						iMoney -= iWater;
						//계산중 나타내기
						system("cls");
						BuyPrint();
						break;
					}
				}
				else if (iBuy == 2)
				{
					break;
				}
				else
				{
					continue;
				}

			}

		}
		else if (iSelect == (int)Drink::Monster)
		{
			while (true)
			{
				//구매를 하실건가요? 라는 문구를 넣어주는게 좋다 
				system("cls");

				BuyExitCode();
				int iBuy = 0;
				std::cin >> iBuy;
				if (iBuy == 1)	//커피
				{
					if (iMoney < iMonster)
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						std::cout << "금액이 부족합니다";
						Sleep(1000);
						break;
					}
					else
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						iMoney -= iMonster;
						//계산중 나타내기
						system("cls");
						BuyPrint();
						break;
					}
				}
				else if (iBuy == 2)
				{
					break;
				}
				else
				{
					continue;
				}

			}

		}
		else if (iSelect == (int)Drink::Color)
		{
			while (true)
			{
				//구매를 하실건가요? 라는 문구를 넣어주는게 좋다 
				system("cls");

				BuyExitCode();
				int iBuy = 0;
				std::cin >> iBuy;
				if (iBuy == 1)	//콜라
				{
					if (iMoney < iCola)
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						std::cout << "금액이 부족합니다";
						Sleep(1000);
						break;
					}
					else
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						iMoney -= iCola;
						//계산중 나타내기
						system("cls");
						BuyPrint();
						break;
					}
				}
				else if (iBuy == 2)
				{
					break;
				}
				else
				{
					continue;
				}

			}
		}
		else if (iSelect == 6)
		{
			break;
		}
		else
		{
			continue;
		}



	}
}


int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	int iStart = 1;



	gotoxy(ixPos, iyPos);

	while (iStart == 1)
	{
		system("cls");
		iyPos = 2;
		ixPos = 50;
		gotoxy(ixPos, iyPos);
		std::cout << "========++++++++========";
		iyPos++;
		gotoxy(ixPos, iyPos);
		std::cout << "<=======자판기게임=======>";//std::cout << "<=======코인게임=======>";
		iyPos++;
		gotoxy(ixPos, iyPos);
		std::cout << "========++++++++========";
		iyPos++;
		gotoxy(ixPos, iyPos);
		std::cout << "ENTER => 시작";
		iyPos++;
		gotoxy(ixPos, iyPos);
		std::cout << "ESC => 끝내기";



		if (_kbhit())	//#include <conio.h>
		{

			char c = _getch();	//키보드로 하나의 키를 입력받는 함수이다. 아스키코드값을 반환한다.

			switch (c)
			{

			case(int)Key::ENTER:
			{								//게임시작 변수를 넣었을때는 중괄호를 넣어줘야된다 안그러면 컴파일러 에러가난다

				RenderDrink();
				//RenderOddEvenGame();

				break;
			}
			case(int)Key::ESC:					//게임끝내기
				iStart = 0;
				break;
			default:

				break;
			}



		}

		Sleep(1000);



	}

	system("cls");
	gotoxy(50, 2);
	std::cout << "이용해주셔서 감사합니다" << std::endl;

	getchar();
	return 0;
}