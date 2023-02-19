#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>


int ixPos = 0;
int iyPos = 0;


void gotoxy(int _x, int _y)
{
	COORD pos = { _x, _y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}


void ResetPos()
{
	ixPos = 50;
	iyPos = 2;

}




int main()
{

	int istart = 1;
	srand(static_cast<unsigned int>(time(NULL)));
	
	int icom = 0;
	int iuser = 0;
	int icount = 0;
	icom = rand() % 100 + 1;

	while (istart == 1)
	{
		system("cls");
		ResetPos();
		
		gotoxy(ixPos, iyPos);
		std::cout << "UP & DOWN GAME";

		iyPos++;
		gotoxy(ixPos, iyPos);
		std::cout << "1을 입력하면 게임을 시작합니다 ";
		
		iyPos++;
		gotoxy(ixPos, iyPos);

		int iSelect = 0;
		std::cin >> iSelect;

		if (iSelect != 1 && iSelect !=2)
		{
			std::cin.ignore();
			std::cout << "번호를 제대로 입력해주세요" << std::endl;
			getchar();
			continue;

		}
		
		if (iSelect == 1)
		{
			system("cls");
			
			while (true)
			{	
				
				ResetPos();

				gotoxy(ixPos, iyPos);
				std::cout << "UP&DOWN 게임을 시작합니다";

				iyPos++;
				gotoxy(ixPos, iyPos);
				std::cout << "1~100사이의 숫자를 입력해주세요";

				iyPos++;
				gotoxy(ixPos, iyPos);
				std::cin >> iuser;

			
				if (iuser < 100 && iuser > 1)
				{	
					if (iuser > icom)
					{
					iyPos++;
					gotoxy(ixPos, iyPos);
					std::cout << "DOWN!!!";
					icount++;
					}

					else if (iuser < icom)
					{
					iyPos++;
					gotoxy(ixPos, iyPos);
					std::cout << "UP!!!";
					icount++;
					}
				
					else if (iuser == icom)
					{

					iyPos++;
					gotoxy(ixPos, iyPos);
					std::cout << "정답입니다!!";
					std::cout << icount << "번째에 맞췄습니다!";
					
					}

				}//if

			
			
			} //while


		
		
		
		}//if


		
	}//while

	return 0;
}