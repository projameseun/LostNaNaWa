#include <iostream>
#include <Windows.h>
#include <time.h>

int main()
{
	/*
	반복문 for : 프로그램 네에서 똑같은 명령을 일정 횟수만큼 반복하여 수행하도록 제어하는 명령문
	단순하게 얘기하면 동일한 코드를 반복해서 동작시킬때 활용하는 기능


	for문
	for(초기값, 조건식, 증가값)
	{
	코드블럭;
	}

	1. 초기값은 for문이 싲가될 때 1번만 동작된다.
	2. 조건식은 매번 반복할때마다 체크하게 되고 조건식이 true일때 코드블럭  안의 코드가 동작되면 false가 되면 for문을 나간다.
	3. 초기값은 코드가 1번 실행되면 증가값이 동작되고 그 후에 조건이 체크된다.

	for문의 실행순서
	초기값 > 조건식 > 코드실행 > 증가값 > 조건식 > 코드실행 > 증가값 > 조건식 ... ... false일때 for문 종료
	*/

	int iNumber = 0;

	int i = 0;

	//전위 ++i


	for (i = 0; i < 10; ++i)
	{
		std::cout << "iNumber =" << iNumber++ << std::endl;
	}

	//시작 조건을 생략할때

	for (; i < 10; ++i)
	{
		iNumber++;
	}

	std::cout << iNumber << std::endl;

	//FOR문에 무한루프를 만드는 방법
	//이 때는 break를 만나지 않는한 나가지 않는다.

	i = 0;
	for (; ;) // ; ; = 무한루프
	{
		++i;
		//if (i==20) break;

		if (i==20)
		{
			break;
		}
		
		std::cout << i << std::endl;
	}

	//for문을 이용하여 구구단 2단
	for (int i = 1; i < 10; ++i)
	{
		std::cout << "2 * " << i << "=" << i * 2 << std::endl;
	}

	for (int i = 1; i < 10; ++i)
	{
		std::cout << "3 *" << i << "=" << i * 3 << std::endl;

	}


	system("cls");
	//이중 for문 : for 문 안에 또 다른 for 문이 들어가는 형태이다.

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j <10; ++j)
		{
			std::cout << "i:" << i << "j:" << j << std::endl;

		}
	}


	for (int i = 2; i < 10; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			std::cout << i << "*" << j <<"="<< i * j << std::endl;
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		if (i == 8)
			continue; // i가 8일때 if문을 나가서 나올때 그 수 에 증가값 되어서 다시 아래 for문에 들어감


		for (int j = 0; j < 10; ++j)
		{
			std::cout << "i:" << i << "j :" << j << std::endl;
		}
	}


	//응용을 해보자 경우의 수  
	

	/*for ()
	{


	}*/










	return 0;
}