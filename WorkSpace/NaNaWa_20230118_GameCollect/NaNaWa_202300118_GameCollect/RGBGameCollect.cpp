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
		std::cout << "RGBĮ�� ����� ����" << std::endl;
		std::cout << "1.����" << std::endl;
		std::cout << "2.���� ������" << std::endl;

		int iSelect = 0;

		std::cin >> iSelect;

		if (iSelect != 1 && iSelect != 2)
		{
			std::cin.ignore();
			std::cout << "��ȣ�� ����� �Է����ּ��� " << std::endl;
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
				std::cout << "32bitĮ�� ����� �����Դϴ�";
				iyPos++;
				gotoxy(ixPos, iyPos);

				std::cout << "������ 0~255�� �����մϴ�";
				iyPos++;
				gotoxy(ixPos, iyPos);
				
				std::cout << "���� ���� ������ �������ּ���";
				iyPos++;
				gotoxy(ixPos, iyPos);

				std::cout << "1.���� 2.���� 3.�׸� 4.��� 5.������";
				iyPos++;
				gotoxy(ixPos, iyPos);

				//
				if (iAlpha != 0 && iRed != 0 && iGreen != 0 && iBlue != 0)
				{
					//Color�ϼ�
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
					std::cout << "Alpha �� = " << iAlpha;
				}
				else if (iColor != 0)
				{
					std::cout << "Alpha �� = " << (iColor >> 24 & 0x000000ff);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

				}

				iyPos++;
				gotoxy(ixPos, iyPos);

				//Red
				if (iRed == 0)
				{
					std::cout << "Red �� = " << iRed;

				}

				else if (iColor != 0)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED  | FOREGROUND_INTENSITY);
					std::cout << "Red �� = " << (iColor >> 16 & 0x000000ff);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}

				iyPos++;
				gotoxy(ixPos, iyPos);

				//Green
				if (iGreen == 0)
				{
					std::cout << "Green �� = " << iGreen;

				}

				else if (iColor != 0)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					std::cout << "Green �� = " << (iColor >> 8 & 0x000000ff);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}

				iyPos++;
				gotoxy(ixPos, iyPos);

				//Blue
				if (iBlue == 0)
				{
					std::cout << "Blue �� = " << iBlue;

				}

				else if (iColor != 0)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
					std::cout << "Blue �� = " << (iColor  & 0x0000000ff);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

					iyPos++;
					gotoxy(ixPos, iyPos);
					std::cout << "������ ��� ����Ͽ����ϴ� Enter�� ������ ��� �ʱ�ȭ�� �˴ϴ�" << std::endl;
					
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
					std::cout << "���Ŀ� ���� ���ڸ� �Է����ּ��� 0 ~ 255" << std::endl;
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
						std::cout << "���ڸ� ����� �Է����ּ���" << std::endl;
					}
				}
				else if (iSelect == (int)ColorSelect::Red)
				{
					std::cout << "���忡 ���� ���ڸ� �Է����ּ��� 0-255" << std::endl;
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
						std::cout << "���ڸ� ����� �Է����ּ���" << std::endl;
					}
					
				}
				else if (iSelect == (int)ColorSelect::Green)
				{
					std::cout << "�׸��� ���� ���ڸ� �Է����ּ��� 0-255" << std::endl;
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
						std::cout << "���ڸ� ����� �Է����ּ���" << std::endl;
					}
				}
				else if (iSelect == (int)ColorSelect::Blue)
				{
					std::cout << "��翡 ���� ���ڸ� �Է����ּ��� 0 - 255" << std::endl;
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
						std::cout << "���ڸ� ����� �Է����ּ���" << std::endl;
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