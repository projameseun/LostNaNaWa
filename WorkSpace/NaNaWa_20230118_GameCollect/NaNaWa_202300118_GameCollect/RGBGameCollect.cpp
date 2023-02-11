#include <iostream>
#include <Windows.h>

int ixPos = 0;
int iyPos = 0;

void gotoxy(int _x, int _y)
{
	COORD pos = { _x , _y };
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ResetPos()
{
	ixPos = 50;
	iyPos = 2;
}

enum class ColorSelect
{
	Alpha =1,
	Red,
	Green,
	Blue,
	Exit,
};

int main()
{
	int iStart = 1;

	while (iStart == 1)
	{
		system("cls");
		std::cout << "<=================>" << std::endl;
		std::cout << "RGB칼라 만들기 게임" << std::endl;
		std::cout << "1.시작" << std::endl;
		std::cout << "2.게임 끝내기" << std::endl;

		int iSelect = 0;

		std::cin >> iSelect;

		if (iSelect != 1 && iSelect != 2)
		{
			std::cin.ignore();
			std::cout << "번호를 제대로 입력해주세요 " << std::endl;
			getchar();
			continue;
			
		}

		if (iSelect == 1)
		{
			int iColor = 0;
			int iAlpha = 0;
			int iRed = 0;
			int iGreen = 0;
			int iBlue = 0;
			while (true)
			{
				system("cls");
				ResetPos();

				gotoxy(ixPos, iyPos);
				std::cout << "32bit칼라를 만드는 게임입니다";
				iyPos++;
				gotoxy(ixPos, iyPos);

				std::cout << "색상은 0~255만 가능합니다";
				iyPos++;
				gotoxy(ixPos, iyPos);
				
				std::cout << "먼저 넣을 색상을 선택해주세요";
				iyPos++;
				gotoxy(ixPos, iyPos);

				std::cout << "1.알파 2.레드 3.그린 4.블루 5.나가기";
				iyPos++;
				gotoxy(ixPos, iyPos);

				//
				if (iAlpha != 0 && iRed != 0 && iGreen != 0 && iBlue != 0)
				{
					//Color완성
					iColor |= iAlpha;
					iColor <<= 8;
					iColor |= iRed;
					iColor <<= 8;
					iColor |= iGreen;
					iColor <<= 8;
					iColor |= iBlue;
				}


				//Alpha
				if (iAlpha == 0)
				{
					std::cout << "Alpha □ = " << iAlpha;
				}
				else if (iColor != 0)
				{
					std::cout << "Alpha ■ = " << (iColor >> 24 & 0x000000ff);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

				}

				iyPos++;
				gotoxy(ixPos, iyPos);

				//Red
				if (iRed == 0)
				{
					std::cout << "Red □ = " << iRed;

				}

				else if (iColor != 0)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED  | FOREGROUND_INTENSITY);
					std::cout << "Red ■ = " << (iColor >> 16 & 0x000000ff);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}

				iyPos++;
				gotoxy(ixPos, iyPos);

				//Green
				if (iGreen == 0)
				{
					std::cout << "Green □ = " << iGreen;

				}

				else if (iColor != 0)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					std::cout << "Green ■ = " << (iColor >> 8 & 0x000000ff);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}

				iyPos++;
				gotoxy(ixPos, iyPos);

				//Blue
				if (iBlue == 0)
				{
					std::cout << "Blue □ = " << iBlue;

				}

				else if (iColor != 0)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
					std::cout << "Blue ■ = " << (iColor  & 0x0000000ff);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

					iyPos++;
					gotoxy(ixPos, iyPos);
					std::cout << "색상을 모두 출력하였습니다 Enter를 누르면 모두 초기화가 됩니다" << std::endl;
					
					std::cin.ignore();
					getchar();

					iColor = 0;
					iAlpha = 0;
					iRed = 0;
					iGreen = 0;
					iBlue = 0;

					continue;
					
				}

				iyPos++;
				gotoxy(ixPos, iyPos);


				int iSelect = 0;

				std::cin >> iSelect;

				system("cls");

				if (iSelect == (int)ColorSelect::Alpha)
				{
					std::cout << "알파에 넣을 숫자를 입력해주세요 0 ~ 255" << std::endl;
					iyPos++;
					gotoxy(ixPos, iyPos);

					int iPut = 0;
					std::cin >> iPut;

					if (iPut >= 0 && iPut < 256)
					{
						iAlpha = iPut;
					}
					else
					{
						std::cout << "숫자를 제대로 입력해주세요" << std::endl;
					}
				}
				else if (iSelect == (int)ColorSelect::Red)
				{
					std::cout << "레드에 넣을 숫자를 입력해주세요 0-255" << std::endl;
					iyPos++;
					gotoxy(ixPos, iyPos);

					int iPut = 0;
					std::cin >> iPut;

					if (iPut >= 0 && iPut < 256)
					{
						iRed = iPut;
					}
					else
					{
						std::cout << "숫자를 제대로 입력해주세요" << std::endl;
					}
					
				}
				else if (iSelect == (int)ColorSelect::Green)
				{
					std::cout << "그린에 넣을 숫자를 입력해주세요 0-255" << std::endl;
					iyPos++;
					gotoxy(ixPos, iyPos);

					int iPut = 0;
					std::cin >> iPut;

					if (iPut >= 0 && iPut < 256)
					{
						iGreen = iPut;
					}
					else
					{
						std::cout << "숫자를 제대로 입력해주세요" << std::endl;
					}
				}
				else if (iSelect == (int)ColorSelect::Blue)
				{
					std::cout << "블루에 넣을 숫자를 입력해주세요 0 - 255" << std::endl;
					iyPos++;
					gotoxy(ixPos, iyPos);

					int iPut = 0;
					std::cin >> iPut;

					if (iPut >= 0 && iPut < 256)
					{
						iBlue = iPut;
					}
					else
					{
						std::cout << "숫자를 제대로 입력해주세요" << std::endl;
					}

					
				}
				else if (iSelect == (int)ColorSelect::Exit)
				{
					break;
				}

				
			}//while (true)


		}
		else if (iSelect == 2)
		{
			break;
		}
	}

	return 0;

}