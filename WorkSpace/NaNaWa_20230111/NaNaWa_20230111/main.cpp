#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>

typedef int MyInt;
typedef long Mylong;

/*
	typedef��?
	c�𿡼� �ڷ����� ���Ӱ� �̸��� ���϶� ���� Ű�����̴�.
	����ü��°� �ִµ� ����ü�� ���ϰ� ����ϱ� ���ؼ��̴�. 
*/

typedef struct Student
{
	int iAge;
	char cName[25];
	int iScore;

}st;

//get ��������
// set ������
//�����ʿ��� ����� �־���� ����(�Լ�)
void gotoxy(int _x, int _y)
{
	COORD _pos = { _x,  _y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),_pos);
}

enum class Key
{
	UP = 72,
	DOWN= 80,
	LEFT= 75,
	RIGHT= 77,
	ENTER = 13,
	ESC =27,
};

enum class KeyWASD
{
	W = 0x57,
	S = 0x53,
	A = 0x41,
	D = 0x44,

};


int main()
{

	//int a = 0;
	MyInt iNumber = 0;
	Mylong iLong = 0;

	//struct Student st = { 15,"���ӽ�",100 };

	st MyStudy = { 15,"���ӽ�",100 };

	/*
		sleep�Լ��� ������ 2������ �ִ�.
		
		1._sleep(1000) �ʴ����� �ƴ϶� 1000���� 1�ʴ�����. �׷��Ƿ� 1�ʰ� �ȴ�. //stidlib.h ������ʿ��ϴ�
		
		2.Sleep(1000)  Windows.h ����� �ʿ��ϴ� 
		_sleep�Լ��� ������ �����ϴ�.
	*/


	//for (int i = 0; i < 10; ++i)
	//{
	//	std::cout << i << std::endl;
	//	//_sleep(1000);
	//	Sleep(500);
	//}
	


	/*
		Sleep�Լ��� ����ؼ� �������� ǥ���� �Ҽ� �ִ�(���ӿ���)
		
	*/

	//Sleep�Լ� �� gotoxy�� �̿��Ͽ� �α����� ǥ��
	//for(int i = 0; i < 5; ++i)
	//{
	//	system("cls");
	//	gotoxy(50, 5);
	//	std::cout << "�α��� ���Դϴ� ....";
	//	gotoxy(50, 7);
	//	if (i == 0)
	//	{
	//		std::cout << "������";
	//	}
	//	else if (i == 1)
	//	{
	//		std::cout << "������";
	//	}
	//	else if (i == 2)
	//	{
	//		std::cout << "������";
	//	}
	//	else if (i == 3)
	//	{
	//		std::cout << "������";

	//	}
	//	else
	//	{
	//		std::cout << "������";

	//	}
	//	Sleep(1000);
	//}

	system("cls");

	//�ֿܼ��� ����ǥ���ϴ� ���
	//ù��°�� ���ڴ� �ڵ��� �����ߵǼ� GetstdHandle(STD_OUTPUT_HANDLE)�� �� �־���ߵ�.
	//�ι�° ���ڴ� ������ �־��ش�.(�̻��� ������̶� ����������)
	//FOREGROUND_INTENSITY �������� �ǹ��Ѵ�.

	//���� 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
	std::cout << "���� Ȯ���� �����?" << std::endl;

	//���� 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	std::cout << "���� Ȯ���� �����?" << std::endl;

	//��� 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	std::cout << "���� Ȯ���� �����?" << std::endl;

	//�׸�
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	std::cout << "���� Ȯ���� �����?" << std::endl;

	//���ο�
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
	std::cout << "���� Ȯ���� �����?" << std::endl;

	//���
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	std::cout << "���� Ȯ���� �����?" << std::endl;

	//Ű���带 �����̴�.
	system("cls");

	//while(true)
	//{
	//	//_kbhit()�Լ��� Ű�� �������� üũ�� ���ش� ���࿡ Ű�� ������ ������ 0�� ���� �ǰ� 
	//	//Ű�� ���࿡ ������ �Ǹ� 0�̿��� ���� �����ϰ� �ȴ�.
	//	if (_kbhit())	//#include <conio.h>
	//	{

	//		char c = _getch();	//Ű����� �ϳ��� Ű�� �Է¹޴� �Լ��̴�. �ƽ�Ű�ڵ尪�� ��ȯ�Ѵ�.
	//		
	//		switch (c)
	//		{
	//		case(int)Key::UP:
	//			std::cout << "UP�� �Է��Ͽ����ϴ�" << std::endl;
	//			break;
	//		case(int)Key::DOWN:
	//			std::cout << "DOWN�� �Է��Ͽ����ϴ�" << std::endl;
	//			break;
	//		case(int)Key::RIGHT:
	//			std::cout << "RIGHT�� �Է��Ͽ����ϴ�" << std::endl;
	//			break;
	//		case(int)Key::LEFT:
	//			std::cout << "LEFT�� �Է��Ͽ����ϴ�" << std::endl;
	//			break;
	//		case(int)Key::ENTER:
	//			std::cout << "ENTER�� �Է��Ͽ����ϴ�" << std::endl;
	//			break;
	//		case(int)Key::ESC:
	//			std::cout << "ESC�� �Է��Ͽ����ϴ�" << std::endl;
	//			break;
	//		}
	//		
	//		
	//	}

	//	
	//}

	int x = 1;
	int y = 1;

	gotoxy(x, y);

	//Async:�񵿱�
	//����Ű�� ��밡���� GetAsyncKeyState 
	while (true)
	{
		/*if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			x--;
		}
		else if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			x++;
		}
		else if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			y--;
		}
		else if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			y++;
		}*/

		if (GetAsyncKeyState((int)KeyWASD::A) & 0x8000)
		{
			x--;
		}
		else if (GetAsyncKeyState((int)KeyWASD::D) & 0x8000)
		{
			x++;
		}
		else if (GetAsyncKeyState((int)KeyWASD::W) & 0x8000)
		{
			y--;
		}
		else if (GetAsyncKeyState((int)KeyWASD::S) & 0x8000)
		{
			y++;
		}

		system("cls");
		gotoxy(x, y);
		std::cout << "��";
	}










	

	

	return 0;
}