#include <iostream>
#include <Windows.h>
#include <stdio.h>

typedef int Myint;
typedef int Mylong;



	/* while �ַ� ���� ������ ���� �� ���� ����Ѵ�.
	* ������ ���� �� �������� �������� ���� ����Ѵ�.
	 while(���ǽ�) // ���ǽ��� ���� �� ������ �ȴ�. break�� ������ ������ �ȴ�.

	 
	 do while : ó�� �ѹ��� ������ ������ �ǰ� �� �Ŀ� ���ǽ��� üũ�Ͽ� false�� ����������.
	 do{
	 
	 
	 �ڤ˵�
	 
	 } whild(���ǽ�)


	*/


	//int iNumber = 0;

	///* while (true)
	//{
	//	if (iNumber == 5)
	//		break;
	//	std::cout << "iNumber = " << iNumber << std::endl;
	//	iNumber++;
	//}
	//*/
	//

	//do
	//{
	//	std::cout << iNumber << std::endl;
	//	iNumber++;

	//} while (iNumber == 5);
	//
	//

	/*----------typedaf-------------*/

	//typedaf��? c�𿡼� �ڷ����� ���Ӱ� �̸����� ���� �� ���� Ű�����̴�.


typedef struct Student
{
	int Age = 0;
	char cName[25];
	int iScore = 0;
}st;



void gotoxy(int _x, int _y)
{
	COORD _pos = { _x, _y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), _pos);

}

int main()
{
	/*int a = 0;
	Myint iNumber = 0;
	Mylong iLong = 0;

	st mystudy = { 15,"���ӽ�",100 };*/




	//sleep �Լ����� ������ 2������ �ִ�.
	/*  1._sleep(1000) �ʴ����� �ƴ϶� 1000���� 1�� �����̴�.�׷��Ƿ� 1�ʰ� �ȴ�. //stidib.h ����� �ʿ��ϴ�
		2.sleep(1000) Window.h ����� �ʿ��ϴ�
		  _sleep �Լ��� ������ �����ϴ�.

	*/

	//for (int i = 0; i < 10; ++i )
	//{
	//	std::cout << i << std::endl; 
	//	Sleep(500);

	//}
	/*int a = 0;

	std::cout << "Test" << std::endl;

	std::cin >> a;*/

	/*
		sleep�Լ��� ����ؼ� �������� ǥ���� �� �� �ִ�(���ӿ���)


	*/

	//sleep �Լ��� gotoxy�� �̿��Ͽ� �α����� ǥ��
	/*for (int i = 0; i < 5; ++i)

	{
		system("cls");
		gotoxy(50, 5);
		std::cout << "�α��� ���Դϴ�...";
		gotoxy(50, 7);
		if (i == 0)
		{
			std::cout << "������" << std::endl;
		}
		else if (i == 1)
		{
			std::cout << "������" << std::endl;
		}
		else if (i == 2)
		{
			std::cout << "������" << std::endl;
		}
		else if (i == 3)
		{
			std::cout << "������" << std::endl;
		}
		else
		{
			std::cout << "������" << std::endl;

		}
		Sleep(1000);*/

	//}
	/*---------���󺯰�-----------*/


	//�ֿܼ��� ���� ǥ���ϴ� ���
	// ù��°��  ���ڴ� �ڵ��� �� ������ؼ� GetstdHandle(STD_OUTPUT_HANDLE)��  �� �־���ߵ�.
	//�ι�°  ���ڴ� ������  �־��ش�. (�̻��� ������̶� ���� ������)

	//����
	
	//system("cls");
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	//std::cout << "���� Ȯ���� �����?" << std::endl;

	////���


	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	//std::cout << "���� Ȯ���� �����?" << std::endl;


	////�׸�
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	//std::cout << "���� Ȯ���� �����?" << std::endl;

	////���ο�
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
	//std::cout << "���� Ȯ���� �����?" << std::endl;

	////���
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	//std::cout << "���� Ȯ���� �����?" << std::endl;



	/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), NULL);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
	std::cout << "������ Ȯ���غ��ô�." << std::endl;*/

	//gotoxy(50, 5);
	//std::cout << "�ĳĿ� ��������" << std::endl;

	/*--------Ű���带 �����̴�-----*/


	//for (int i = 0; i < 10; ++i)
	//{
	//	Sleep(1000);
	//	std::wcout << i << std::endl;
	//}


	/*
		for (int i = 0; i < 5; ++i)
		{
			gotoxy(50, 5);
			std::cout << "�ε����Դϴ�" << std:: endl;

			gotoxy(50, 8);
			Sleep(1000);
				if (i == 0)
				{
					std::cout << "������" << std::endl;
				}
				else if (i == 1)
				{
					std::cout << "������" << std::endl;
				}
				else if (i == 2)
				{
					std::cout << "������" << std::endl;
				}
				else if (i == 3)
				{
					std::cout << "������" << std::endl;
				}
				else
				{
					std::cout << "������" << std::endl;
				}
		}*/

	//while (true)
	//{
	//	//_kbhit()�Լ���  Ű�� ���ȴ��� üũ�� ���ش�. ���࿡ Ű�� ������ ������ 0�� ���� �ǰ� Ű�� ���࿡ �����ԵǸ� 0�̿��� ���� �����ϰ� �ȴ�.

	//	if (_kbhit()) //#include <conio.h>
	//	{
	//		char c = _getch();

	//	}






	/*int iNumber = 0;
	while (true)
	{
		if (iNumber == 5)
			break;
		std::cout << "iNumber  = " << iNumber << std::endl;
		iNumber++;
	}

	int iNumber2 = 0;
	while (iNumber2 < 5)
	{
		std::cout << iNumber2 << std::endl;
		iNumber2++;
	}*/

	/*int iNumber3 = 0;

	do {
		iNumber3++;
		std::cout << "iNumber = " << iNumber3 << std::endl;
	} while (iNumber3 == 5);*/

	int iNumber3 = 4;
	
	do {
		iNumber3++;
		std::cout << "iNumber = " << iNumber3 << std::endl;
		
	} while (iNumber3 < 10);


	
	int iNum3 = 0;

	std::cout << "Test 11" << iNum3 << std::endl;
	std::cout << "Test 11" << iNum3 << std::endl;
	std::cout << "Test 11" << iNum3 << std::endl;
	std::cout << "Test 11" << iNum3 << std::endl;
	std::cout << "Test 11" << iNum3 << std::endl;


	//}


		return 0;
}