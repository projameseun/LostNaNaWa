#include <iostream>
#include <conio.h>
#include  <Windows.h>
#include <time.h>
#include <string.h>

int ixpos = 0;
int iypos = 0;

int istart = 1;

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

enum class key
{
	ENTER = 13,
	ESC = 27,
};



int main()
{
	srand(static_cast<unsigned int>(time(NULL)));


	while (istart == 1)
	{
		system("cls");
		Resetpos();

		gotoxy(ixpos, iypos);
		std::cout << "■■■■■■■■■■";
		iypos++;

		gotoxy(ixpos, iypos);
		std::cout << "■■■홀짝게임■■■";
		iypos++;

		gotoxy(ixpos, iypos);
		std::cout << "■■■■■■■■■■";
		iypos++;

		gotoxy(ixpos, iypos);
		std::cout << "시작:ENTER";
		iypos++;

		gotoxy(ixpos, iypos);
		std::cout << "종료:ESC";
		iypos++;

		gotoxy(ixpos, iypos);


		if (_kbhit())
		{
			char c = _getch();

			switch (c)
			{
			case(int)key::ENTER:
				{
				//게임 시작

				int icom = 0;
				std::string strPlayer;
				std::string strCom;
				int iCount = 0;
				int iExitcount = 0;
				istart = 2;



				while (istart == 2)
				{
					system("cls");
					Resetpos();
					gotoxy(ixpos, iypos);
					icom = rand() % 2;
					if (icom == 0)
					{
						strCom = "홀";
					}
					else if (icom  == 1)
					{
						strCom = "짝";
					}


					std::cout << "이긴 횟수 :" << iCount;
					iypos++;
					gotoxy(ixpos, iypos);
					std::cout << "홀, 짝을 입력해주세요";

					if (iExitcount == 4)
					{
						istart = 1;
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

					if (strPlayer  == strCom)
					{
						std::cout << "WIN";
						Sleep(1000);
					}

					else if (strPlayer != strCom)
					{
						std::cout << "LOSE";
						Sleep(1000);
					}

					++iExitcount;
				}

					break;
				}
			case(int)key::ESC:
				{	
					istart = 0;
					std::cout << "ENTER을 누르면 종료가 됩니다.";
					getchar();

					break;
				}

			default:
				break;
			}
				


		}//_kbhit

		Sleep(1000);


	}//while // ctrl  + ]  해당 반복문에서 나갈 수 있다. 

	return 0;
}