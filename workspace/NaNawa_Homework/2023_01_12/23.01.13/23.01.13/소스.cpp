#include <iostream>
#include <Windows.h>
#include <stdio.h>

typedef int Myint;
typedef int Mylong;



	/* while 주로 무한 루프를 돌릴 때 많이 사용한다.
	* 게임을 만들 때 무한으로 돌릴때도 많이 사용한다.
	 while(조건식) // 조건식이 참일 때 나오게 된다. break를 만나면 나가게 된다.

	 
	 do while : 처음 한번은 무조건 동작이 되고 그 후에 조건식을 체크하여 false면 빠져나간다.
	 do{
	 
	 
	 코ㅛ드
	 
	 } whild(조건식)


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

	//typedaf란? c언에서 자료형을 새롭게 이름ㅇ르 붙일 때 쓰는 키워드이다.


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

	st mystudy = { 15,"제임스",100 };*/




	//sleep 함수에는 종류가 2가지가 있다.
	/*  1._sleep(1000) 초단위가 아니라 1000분의 1초 단위이다.그러므로 1초가 된다. //stidib.h 헤더가 필요하다
		2.sleep(1000) Window.h 헤더가 필요하다
		  _sleep 함수와 사용법이 동일하다.

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
		sleep함수를 사용해서 역동적인 표현을 할 수 있다(게임에서)


	*/

	//sleep 함수와 gotoxy를 이용하여 로그인을 표현
	/*for (int i = 0; i < 5; ++i)

	{
		system("cls");
		gotoxy(50, 5);
		std::cout << "로그인 중입니다...";
		gotoxy(50, 7);
		if (i == 0)
		{
			std::cout << "■□□□□" << std::endl;
		}
		else if (i == 1)
		{
			std::cout << "■■□□□" << std::endl;
		}
		else if (i == 2)
		{
			std::cout << "■■■□□" << std::endl;
		}
		else if (i == 3)
		{
			std::cout << "■■■■□" << std::endl;
		}
		else
		{
			std::cout << "■■■■■" << std::endl;

		}
		Sleep(1000);*/

	//}
	/*---------색상변경-----------*/


	//콘솔에서 색깔 표현하는 방법
	// 첫번째는  인자는 핸들을 꼭 언더야해서 GetstdHandle(STD_OUTPUT_HANDLE)을  꼭 넣어줘야돼.
	//두번째  인자는 색깔을  넣어준다. (이색은 삼원색이랑 같은 원리다)

	//레드
	
	//system("cls");
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	//std::cout << "색깔 확인해 볼까요?" << std::endl;

	////블루


	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	//std::cout << "색깔 확인해 볼까요?" << std::endl;


	////그린
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	//std::cout << "색깔 확인해 볼까요?" << std::endl;

	////옐로우
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
	//std::cout << "색깔 확인해 볼까요?" << std::endl;

	////흰색
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	//std::cout << "색깔 확인해 볼까요?" << std::endl;



	/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), NULL);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN);
	std::cout << "색깔을 확인해봅시다." << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
	std::cout << "색깔을 확인해봅시다." << std::endl;*/

	//gotoxy(50, 5);
	//std::cout << "냐냐와 공부하자" << std::endl;

	/*--------키보드를 움직이다-----*/


	//for (int i = 0; i < 10; ++i)
	//{
	//	Sleep(1000);
	//	std::wcout << i << std::endl;
	//}


	/*
		for (int i = 0; i < 5; ++i)
		{
			gotoxy(50, 5);
			std::cout << "로딩중입니다" << std:: endl;

			gotoxy(50, 8);
			Sleep(1000);
				if (i == 0)
				{
					std::cout << "■□□□□" << std::endl;
				}
				else if (i == 1)
				{
					std::cout << "■■□□□" << std::endl;
				}
				else if (i == 2)
				{
					std::cout << "■■■□□" << std::endl;
				}
				else if (i == 3)
				{
					std::cout << "■■■■□" << std::endl;
				}
				else
				{
					std::cout << "■■■■■" << std::endl;
				}
		}*/

	//while (true)
	//{
	//	//_kbhit()함수는  키가 눌렸는지 체크를 해준다. 만약에 키를 누르지 않으면 0이 들어가게 되고 키를 만약에 누르게되면 0이외의 값을 리턴하게 된다.

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