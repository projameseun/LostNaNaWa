#include <iostream>
#include <stdlib.h>
#include <Windows.h>

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


	return 0;
}