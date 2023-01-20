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
	//���� ȭ�����
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
			strCom = "Ȧ";
		}
		else if (icom == 1)
		{
			strCom = "¦";
		}

		std::cout << "�̱� Ƚ�� : " << iCount;
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "Ȧ , ¦�� �Է����ּ��� :";

		if (iExitCount == 5)
		{
			iypos++;
			gotoxy(ixpos, iypos);
			std::cin.ignore();
			std::cout << "������ �������ϴ� Enter�� �����ּ���";
			getchar();
			break;
		}

		std::cin >> strPlayer;

		iypos++;
		gotoxy(ixpos, iypos);


		//����ó��
		if (strPlayer != "Ȧ" && strPlayer != "¦")
		{
			std::cin.ignore();
			std::cout << "Ȧ ¦�� ����� �Է����ּ���";
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
	int iMoney = 10000;		//����ڰ� �����ִ� ��
	//���������
	int iCoffee = 0;
	int iCoke = 0;
	int iWater = 0;
	int iMonster = 0;
	int iMilk = 0;
	//����� ���ú���
	int iSelect = 0;

	//0.������޴�
	//1.����������Ѵ�
	//2. 1,���� , 2 ������	����ó��(�ݾ��� �����ϸ� �����Ҽ� �����ϴ�)
	//3. �������Դϴ� ���� ���� 
	//4. �ߺ�����(��ɳ���)	Ŀ��,���� �������� �����ؼ� �ѹ��� �����Ҽ��մ� ���

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
		
		std::cout << "���� �Ͻ� ������� �������ּ��� : ";
		//������޴�

		//���������

		std::cin >> iSelect;

		//if() //����ó��

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
		else   //����ó��
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
		std::cout << "=====����� Ű����ũ======";//std::cout << "=====Ȧ¦ ����=======";
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "<=======================>";
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "���� : ENTER";
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "���� : ESC";
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
				std::cout << "Enter�� ������ ���ᰡ �˴ϴ�";
				getchar();
				break;
			}
			default:
					break;
				
			}
		}//if (_kbhit())
		
		Sleep(1000);
		
	//ctrl + ] �ٷ� �ش� �ݺ���,���ǹ� �� �Ʒ��� ���� �ִ�
	}//while

	return 0;
}