#include <iostream>
#include <Windows.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>


/*
c,c++���� Ű���带 ����ϴ¹�
0:������ �������� ���� ���翡�� ������ ��������
0x1:������ �������� �ְ� ����� �������� ��������
0x8000 : ������ �������� ���� ����� �����ִ� ����
0x8001 : ������ �������� �ְ� ���絵 �����ִ� ����
*/


//����
int iGameMode = 0;

int iForExit = 0;	//for�� �����ִ� ����

int iPlayerScore = 0;
int iAIScore = 0;

#define ENTER 13

#define ESC 27


void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int resetgotox()
{

	return 40;
}

int resetgotoy()
{

	return 5;
}

int vsgotox()
{
	return 5;
}
int vsgotoy()
{
	return 5;
}
void resetColor()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
}

enum class SRP
{
	S = 1,
	R,
	P,
	Exit,
	MenuMode,
	MainMode,

};

enum class ComSRP
{
	ComS,
	ComR,
	ComP
};


//���������� ������ renderǥ�� 
void RenderStartOne(int _gotox, int _gotoy)
{
	int iStartX = _gotox;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_INTENSITY | FOREGROUND_RED);
	gotoxy(iStartX, _gotoy);

	std::cout << "����������������";			gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";			gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";			gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";			gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";			gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";			gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";			gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";			gotoxy(85, _gotoy);		std::cout << "����������������";

	gotoxy(55, _gotoy);
	std::cout << "����!";
}

void RenderStartTWO(int _gotox, int _gotoy)
{
	int iStartX = _gotox;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";

	gotoxy(55, _gotoy);
	std::cout << "����!";
}

void RenderStartThree(int _gotox, int _gotoy)
{
	int iStartX = _gotox;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";		gotoxy(85, _gotoy);		std::cout << "����������������";

	gotoxy(55, _gotoy);
	std::cout << "��!";



}

//playerSRP render 
int RenderPlayrAttackS(int _gotox, int _gotoy)
{
	int iStartX = _gotox;
	gotoxy(iStartX, _gotoy);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);

	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";
	_gotoy++;
	_gotoy++;
	return _gotoy;

}

int RenderPlayrAttackR(int _gotox, int _gotoy)
{
	int iStartX = _gotox;

	gotoxy(iStartX, _gotoy);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";

	_gotoy++;
	_gotoy++;
	return _gotoy;
}

int RenderPlayrAttackP(int _gotox, int _gotoy)
{
	int iStartX = _gotox;

	gotoxy(iStartX, _gotoy);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	gotoxy(iStartX, _gotoy);
	std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";
	_gotoy++; ;
	gotoxy(iStartX, _gotoy); ;
	std::cout << "����������������";

	_gotoy++;
	_gotoy++;
	return _gotoy;
}


//AISRP render
int RenderAIAttackS(int _gotox, int _gotoy)
{
	gotoxy(85, _gotoy);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;


	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	_gotoy++;
	_gotoy++;
	return _gotoy;
}

int RenderAIAttackR(int _gotox, int _gotoy)
{

	gotoxy(85, _gotoy);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	_gotoy++;
	return _gotoy;
}

int RenderAIAttackP(int _gotox, int _gotoy)
{

	gotoxy(85, _gotoy);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;

	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(85, _gotoy);		std::cout << "����������������";
	_gotoy++;
	gotoxy(85, _gotoy);		std::cout << "����������������";

	_gotoy++;
	_gotoy++;
	return _gotoy;
}


//Player�� �̰����� render
void RenderPlayerWin(int _gotox, int _gotoy, int _player)
{
	int iStartX = _gotox;
	int iStartY = 0;
	//������ �̰����� 
	if (_player == (int)SRP::S)
	{

		//SRP
		iStartY = RenderPlayrAttackS(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<�÷��̾�>";
		gotoxy(85, _gotoy);
		iStartY = RenderAIAttackP(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";



	}
	else if (_player == (int)SRP::R)		//������ �̰䤷����
	{
		iStartY = RenderPlayrAttackR(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<�÷��̾�>";
		gotoxy(85, _gotoy);

		iStartY = RenderAIAttackS(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";
	}
	else	//�����̰�����
	{
		iStartY = RenderPlayrAttackP(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<�÷��̾�>";
		gotoxy(85, _gotoy);

		iStartY = RenderAIAttackR(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";
	}


}
//Player�� ������ render
void RenderPlayerRose(int _gotox, int _gotoy, int _player)
{
	int iStartX = _gotox;
	int iStartY = 0;
	//������ �̰����� 
	if (_player == (int)SRP::S)
	{


		iStartY = RenderPlayrAttackS(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<�÷��̾�>";
		gotoxy(85, _gotoy);
		iStartY = RenderAIAttackR(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";



		//std::cout << "����!";


	}
	else if (_player == (int)SRP::R)		//������ �̰䤷����
	{
		iStartY = RenderPlayrAttackR(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<�÷��̾�>";
		gotoxy(85, _gotoy);

		iStartY = RenderAIAttackP(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";
	}
	else	//�����̰�����
	{
		iStartY = RenderPlayrAttackP(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<�÷��̾�>";
		gotoxy(85, _gotoy);

		iStartY = RenderAIAttackS(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";
	}
}
//Player�� ������� render
void RenderPlayerDraw(int _gotox, int _gotoy, int _player)
{
	int iStartX = _gotox;
	int iStartY = 0;
	//������ �̰����� 
	if (_player == (int)SRP::S)
	{


		iStartY = RenderPlayrAttackS(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<�÷��̾�>";
		gotoxy(85, _gotoy);
		iStartY = RenderAIAttackS(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";



		//std::cout << "����!";


	}
	else if (_player == (int)SRP::R)
	{
		iStartY = RenderPlayrAttackR(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<�÷��̾�>";
		gotoxy(85, _gotoy);

		iStartY = RenderAIAttackR(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";
	}
	else
	{
		iStartY = RenderPlayrAttackP(iStartX, _gotoy);

		gotoxy(iStartX, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<�÷��̾�>";
		gotoxy(85, _gotoy);

		iStartY = RenderAIAttackP(iStartX, _gotoy);
		gotoxy(85, iStartY);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		std::cout << "<AI>";
	}
}

//Main Render
#pragma region RenderSRP
void RenderMainSRP()
{
	int igotox = 0;
	int igotoy = 0;
	for (int i = 0; i < 3; ++i)
	{
		system("cls");	//system cls�� ����ϰԵǸ� Ŀ������ġ�� 0,0���� �ٽ� �ʱ�ȭ��
		igotox = resetgotox();
		igotoy = resetgotoy();

		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		//	FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);

		if (i == 0)
		{

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_INTENSITY | FOREGROUND_RED);
			gotoxy(igotox, igotoy);
			std::cout << "����������������";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������";
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������";
		}
		else if (i == 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_INTENSITY | FOREGROUND_BLUE);
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
		}
		else
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;
			igotoy++;
			gotoxy(igotox, igotoy);
			std::cout << "����������������" << std::endl;


		}
		igotoy++;
		igotoy++;
		igotox -= 3;
		gotoxy(igotox, igotoy);
		resetColor();
		std::cout << "<======== ���� ���� ��  ���� =======>" << std::endl;
		igotoy++;
		igotoy++;
		igotox += 10;
		gotoxy(igotox, igotoy);
		std::cout << "����:ENTER ������:ESC" << std::endl;
		Sleep(500);





	}
}

#pragma endregion RenderSRP


//AI�� �οﶧ ���� Render Player�� ����,����,���� ���ڸ� �ѱ�� �ȴ�.
int RenderSRPVS(int _player)	//��ǻ�Ϳ� �οﶧ
{
	int igotox = 0;
	int igotoy = 0;

	rand();
	//com 0 = ���� 
	//com 1 = ����
	//com 2 = ���� 
	int iCom = rand() % 3 + 1;

	int iResult = _player - iCom;

	char c[25] = "";

	if (iForExit == 0)
	{
		for (int i = 0; i < 3; ++i)
		{
			system("cls");	//system cls�� ����ϰԵǸ� Ŀ������ġ�� 0,0���� �ٽ� �ʱ�ȭ��
			igotox = vsgotox();
			igotoy = vsgotoy();

			//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//	FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);

			if (i == 0)
			{
				RenderStartOne(igotox, igotoy);

			}
			else if (i == 1)
			{
				RenderStartTWO(igotox, igotoy);
			}
			else
			{
				RenderStartThree(igotox, igotoy);

			}


			Sleep(500);

			if (i == 2) iForExit = 1;
		}
	}
	else  //�÷��̾�� ��ǻ�Ͱ� �οﶧ
	{
		while (true)
		{
			int igotox = 0;
			int igotoy = 0;
			igotox = vsgotox();
			igotoy = vsgotoy();

			system("cls");

			//RenderPlayerWin(igotox, igotoy, 2);

			if (iResult == 1 || iResult == -2)		//�̰�����
			{
				RenderPlayerWin(igotox, igotoy, _player);
				gotoxy(55, 5);
				std::cout << "�÷��̾� �¸� !";
				iPlayerScore++;



			}
			else if (iResult == 0)
			{
				RenderPlayerDraw(igotox, igotoy, _player);
				gotoxy(55, 5);
				std::cout << "��� !";


			}
			else
			{
				RenderPlayerRose(igotox, igotoy, _player);
				gotoxy(55, 5);
				std::cout << "AI �¸� ";

				iAIScore++;

			}

			Sleep(500);

			//�ʱ�ȭ������
			resetColor();
			std::cin.ignore();
			std::cin.getline(c, 25);
			iForExit = 0;
			return (int)SRP::Exit;
			break;
		}


	}




}


//Main�� �ִ� render
void Render(int _GameMode)
{


	if (_GameMode == (int)SRP::MenuMode)
	{

		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//FOREGROUND_INTENSITY | FOREGROUND_RED);

		RenderMainSRP();

	}
	else if (_GameMode == (int)SRP::MainMode)		//MainMode
	{


		int igotox = 50;
		int igotoy = 10;
		system("cls");
		gotoxy(igotox, igotoy);
		std::cout << "�÷��̾� �̱��: " << iPlayerScore;
		igotoy++;
		gotoxy(igotox, igotoy);
		std::cout << "AI �̱��: " << iAIScore;
		igotoy++;
		gotoxy(igotox, igotoy);
		std::cout << "1.����";
		igotoy++;
		gotoxy(igotox, igotoy);
		std::cout << "2.����";
		igotoy++;
		gotoxy(igotox, igotoy);
		std::cout << "3.��";
		igotoy++;
		gotoxy(igotox, igotoy);
		std::cout << "4.������";
		igotoy++;
		gotoxy(igotox, igotoy);

		int iBuffer = 0; //Ű��
		std::cin >> iBuffer;
		if (iBuffer <= 0 || iBuffer > 4)
		{
			igotoy++;
			gotoxy(igotox, igotoy);

		}
		else if (iBuffer == 4)
		{
			iGameMode = 0;
		}
		else
		{
			while (true)
			{
				int igotox = 0;
				int igotoy = 0;

				if (iBuffer == (int)SRP::Exit)
				{
					//iGameMode = 0; //MenuMode �� �Ѿ
					break;
				}

				int iWhileExit = RenderSRPVS(iBuffer);

				if ((int)SRP::Exit == iWhileExit)
					break;

				//iGameMode = (int)SRP::MainMode;
				//break;


			}//while
		}



	}
}


int main()
{



	srand(static_cast<unsigned int>(time(NULL)));

	/*
����������������
����������������
����������������
����������������
����������������
����������������
����������������
����������������


����������������
����������������
����������������
����������������
����������������
����������������
����������������
����������������


����������������
����������������
����������������
����������������
����������������
����������������
����������������
����������������

gotoxy��ǥ�� �Ű��ִ� �Լ�
 �ַ� c/c++���� ���ֻ��ȴ�
 GUI�� �Ұ����Ҷ� ����ϸ� �ſ� �����ϴ�



	*/

	while (true)
	{
		system("cls");


		char c;

		//Ű���尡 �ԷµǾ������� Ȯ���ϴ��Լ�, ������ ������ Ȯ���Ͽ� Ű�� �Է��� �մٸ� true ���ٸ� false
		//������ waiting�Լ��� �ƴ϶�� ���̴�. 
		if (_kbhit())	
		{
			c = _getch();	//�������� ����Ű �ϳ����� �������ְ� �ΰ��̻��� ���޴´� �밢���Ұ���

			switch (c)
			{
			case ENTER:
				std::cout << "ENTER ������" << std::endl;
				iGameMode = 1;
				break;
			case ESC:
				iGameMode = 2;
				break;
			}
		}

		//if (GetAsyncKeyState(VK_RETURN) & 0x8000)
		//{

		//	std::cout << "ENTER ������" << std::endl;
		//	iGameMode = 1;

		//}

		if (iGameMode == 0)
		{
			Render((int)SRP::MenuMode);
		}
		else if (iGameMode == 1)
		{
			Render((int)SRP::MainMode);
		}






		//int iGameMode = 0;
		////std::cin >> iGameMode;

		////����ó��
		//if (iGameMode < 1 || iGameMode>4)
		//{
		//	std::cout << "��ȣ�� ����� �������ּ���" << std::endl;
		//	continue;
		//}
		//else if (iGameMode == 4)
		//{
		//	std::cout << "�����ϼ̽��ϴ�!" <<std::endl;
		//}


		if (iGameMode == 2)break;

	}



	gotoxy(resetgotox(), resetgotoy());
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	std::cout << "�̿� ���ּż� �����մϴ�. ENTER �����ּ���!" << std::endl;
	char c[25] = "";
	std::cin.ignore();
	std::cin.getline(c, 25);
	return 0;
}