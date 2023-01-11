#include <iostream>
#include <stdlib.h>
#include <Windows.h>

typedef int MyInt;
typedef long Mylong;

/*
	typedef란?
	c언에서 자료형을 새롭게 이름을 붙일때 쓰는 키워드이다.
	구조체라는게 있는데 구조체를 편하게 사용하기 위해서이다. 
*/

typedef struct Student
{
	int iAge;
	char cName[25];
	int iScore;

}st;

//get 가져오다
// set 보내다
//내가필요한 기능을 넣어놓는 집합(함수)
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

	//struct Student st = { 15,"제임스",100 };

	st MyStudy = { 15,"제임스",100 };

	/*
		sleep함수는 종류가 2가지가 있다.
		
		1._sleep(1000) 초단위가 아니라 1000분의 1초단위다. 그러므로 1초가 된다. //stidlib.h 헤더가필요하다
		
		2.Sleep(1000)  Windows.h 헤더가 필요하다 
		_sleep함수와 사용법이 동일하다.
	*/


	//for (int i = 0; i < 10; ++i)
	//{
	//	std::cout << i << std::endl;
	//	//_sleep(1000);
	//	Sleep(500);
	//}
	


	/*
		Sleep함수를 사용해서 역동적인 표현을 할수 있다(게임에서)
		
	*/

	//Sleep함수 와 gotoxy를 이용하여 로그인을 표현
	//for(int i = 0; i < 5; ++i)
	//{
	//	system("cls");
	//	gotoxy(50, 5);
	//	std::cout << "로그인 중입니다 ....";
	//	gotoxy(50, 7);
	//	if (i == 0)
	//	{
	//		std::cout << "■□□□□";
	//	}
	//	else if (i == 1)
	//	{
	//		std::cout << "■■□□□";
	//	}
	//	else if (i == 2)
	//	{
	//		std::cout << "■■■□□";
	//	}
	//	else if (i == 3)
	//	{
	//		std::cout << "■■■■□";

	//	}
	//	else
	//	{
	//		std::cout << "■■■■■";

	//	}
	//	Sleep(1000);
	//}

	system("cls");

	//콘솔에서 색깔표현하는 방법
	//첫번째는 인자는 핸들을 꼭얻어야되서 GetstdHandle(STD_OUTPUT_HANDLE)를 꼭 넣어줘야되.
	//두번째 인자는 색깔을 넣어준다.(이색은 삼원색이랑 같은원리다)
	//FOREGROUND_INTENSITY 밝은색을 의미한다.

	//레드 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
	std::cout << "색깔 확인해 볼까요?" << std::endl;

	//레드 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	std::cout << "색깔 확인해 볼까요?" << std::endl;

	//블루 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	std::cout << "색깔 확인해 볼까요?" << std::endl;

	//그린
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	std::cout << "색깔 확인해 볼까요?" << std::endl;

	//엘로우
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
	std::cout << "색깔 확인해 볼까요?" << std::endl;

	//흰색
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	std::cout << "색깔 확인해 볼까요?" << std::endl;

	//키보드를 움직이다.


	return 0;
}