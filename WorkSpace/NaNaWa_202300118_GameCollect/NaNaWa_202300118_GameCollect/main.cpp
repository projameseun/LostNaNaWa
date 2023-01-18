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
	//���� ȭ�����
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

		if (iExitCount == 4)
		{
			iStart = 1;
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
		std::cout << "=====Ȧ¦ ����=======";
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "<==================>";
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
				OddEvenGame();
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