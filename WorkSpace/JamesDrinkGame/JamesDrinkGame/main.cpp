#include <iostream>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#include <string.h>

//���ΰ���

//���� ��ǥ���� �Ű��ִ� �Լ�
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

//std::cout << "1.Ŀ��";
//iyPos++;
//gotoxy(ixPos, iyPos);
//std::cout << "2.���̴�";
//iyPos++;
//gotoxy(ixPos, iyPos);
//std::cout << "3.��";
//iyPos++;
//gotoxy(ixPos, iyPos);
//std::cout << "4.����";
//iyPos++;
//gotoxy(ixPos, iyPos);
//std::cout << "5.�ݶ�";

int ixPos = 50;
int iyPos = 2;

//Ȧ¦����
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
			StrCom = "Ȧ";
		}
		else if (icom == 1)
		{
			StrCom = "¦";
		}

		std::cout << "Ȧ,¦�� �Է����ּ���:";

		std::cin >> StrPlayer;

		iyPos++;
		gotoxy(ixPos, iyPos);

		if (StrPlayer != "Ȧ" && StrPlayer != "¦")
		{
			std::cin.ignore();
			std::cout << "Ȧ¦�� ����� �Է����ּ���";

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
	std::cout << "�̱�Ƚ��:" << iCount;
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
	std::cout << "1.����";
	iyPos++;
	gotoxy(ixPos, iyPos);
	std::cout << "2.������";
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
			std::cout << "�������Դϴ�.";
		}
		else if (i == 1)
		{
			std::cout << "�������Դϴ�..";
		}
		else if (i == 2)
		{
			std::cout << "�������Դϴ�...";
		}
		else if (i == 3)
		{
			std::cout << "�������Դϴ�....";
		}
		else if (i == 4)
		{
			std::cout << "�������Դϴ�.....";
		}

		Sleep(1000);
	}//for (int i = 0; i < 5; ++i)
}

void ColorInitial()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
}

//���������
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
		std::cout << "����� �ݾ�:" << iMoney;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
		std::cout << "\\";
		ColorInitial();
		ResetPos();


		std::cout << "�����Ͻ� ������� �������ּ���";
		iyPos++;
		gotoxy(ixPos, iyPos);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
		std::cout << "��";
		ColorInitial();
		std::cout << "1.Ŀ��==>500\\";
		iyPos++;
		gotoxy(ixPos, iyPos);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
		std::cout << "��";
		ColorInitial();
		std::cout << "2.���̴�==>1000\\";
		iyPos++;
		gotoxy(ixPos, iyPos);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		std::cout << "��";
		ColorInitial();
		std::cout << "3.��==>550\\";
		iyPos++;
		gotoxy(ixPos, iyPos);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
		std::cout << "��";
		ColorInitial();
		std::cout << "4.����==>2200\\";
		iyPos++;
		gotoxy(ixPos, iyPos);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
		std::cout << "��";
		ColorInitial();
		;					std::cout << "5.�ݶ�==>1000\\";
		iyPos++;
		gotoxy(ixPos, iyPos);
		std::cout << "6.������";
		iyPos++;
		gotoxy(ixPos, iyPos);

		std::cin >> iSelect;


		if (iMoney <= 0)
		{
			system("cls");
			gotoxy(30, 2);
			std::cout << "���̻� ���Ÿ� �Ҽ��� �����ϴ� ������ �� ������";
			std::cin.ignore();
			getchar();
			break;
		}

		if (iSelect == (int)Drink::Coffee)
		{
			while (true)
			{
				//���Ÿ� �Ͻǰǰ���? ��� ������ �־��ִ°� ���� 
				system("cls");

				BuyExitCode();
				int iBuy = 0;
				std::cin >> iBuy;
				if (iBuy == 1)	//Ŀ��
				{
					if (iMoney < iCoffee)
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						std::cout << "�ݾ��� �����մϴ�";
						Sleep(1000);
						break;
					}
					else
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						iMoney -= iCoffee;
						//����� ��Ÿ����
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
				//���Ÿ� �Ͻǰǰ���? ��� ������ �־��ִ°� ���� 
				system("cls");

				BuyExitCode();
				int iBuy = 0;
				std::cin >> iBuy;
				if (iBuy == 1)	//���̴�
				{
					if (iMoney < iSprite)
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						std::cout << "�ݾ��� �����մϴ�";
						Sleep(1000);
						break;
					}
					else
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						iMoney -= iSprite;
						//����� ��Ÿ����
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
				//���Ÿ� �Ͻǰǰ���? ��� ������ �־��ִ°� ���� 
				system("cls");

				BuyExitCode();
				int iBuy = 0;
				std::cin >> iBuy;
				if (iBuy == 1)	//��
				{
					if (iMoney < iWater)
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						std::cout << "�ݾ��� �����մϴ�";
						Sleep(1000);
						break;
					}
					else
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						iMoney -= iWater;
						//����� ��Ÿ����
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
				//���Ÿ� �Ͻǰǰ���? ��� ������ �־��ִ°� ���� 
				system("cls");

				BuyExitCode();
				int iBuy = 0;
				std::cin >> iBuy;
				if (iBuy == 1)	//Ŀ��
				{
					if (iMoney < iMonster)
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						std::cout << "�ݾ��� �����մϴ�";
						Sleep(1000);
						break;
					}
					else
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						iMoney -= iMonster;
						//����� ��Ÿ����
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
				//���Ÿ� �Ͻǰǰ���? ��� ������ �־��ִ°� ���� 
				system("cls");

				BuyExitCode();
				int iBuy = 0;
				std::cin >> iBuy;
				if (iBuy == 1)	//�ݶ�
				{
					if (iMoney < iCola)
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						std::cout << "�ݾ��� �����մϴ�";
						Sleep(1000);
						break;
					}
					else
					{
						iyPos++;
						gotoxy(ixPos, iyPos);
						iMoney -= iCola;
						//����� ��Ÿ����
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
		std::cout << "<=======���Ǳ����=======>";//std::cout << "<=======���ΰ���=======>";
		iyPos++;
		gotoxy(ixPos, iyPos);
		std::cout << "========++++++++========";
		iyPos++;
		gotoxy(ixPos, iyPos);
		std::cout << "ENTER => ����";
		iyPos++;
		gotoxy(ixPos, iyPos);
		std::cout << "ESC => ������";



		if (_kbhit())	//#include <conio.h>
		{

			char c = _getch();	//Ű����� �ϳ��� Ű�� �Է¹޴� �Լ��̴�. �ƽ�Ű�ڵ尪�� ��ȯ�Ѵ�.

			switch (c)
			{

			case(int)Key::ENTER:
			{								//���ӽ��� ������ �־������� �߰�ȣ�� �־���ߵȴ� �ȱ׷��� �����Ϸ� ����������

				RenderDrink();
				//RenderOddEvenGame();

				break;
			}
			case(int)Key::ESC:					//���ӳ�����
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
	std::cout << "�̿����ּż� �����մϴ�" << std::endl;

	getchar();
	return 0;
}