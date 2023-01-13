#include <iostream>
#include <Windows.h>

int main()
{
	/*
	반복문(loop):프로그램 내에서 똑같은 명령을 일정 횟수만큼 반복하여 수행하도록 제어하는 명령문이다.
	단순하게 얘기하면 동일한 코드를  반복해서 동작시킬때 활용하는 기능이다.

	for문
	for(초기값: 조건식: 증가값)
	{
		코드    :
	}의 형태로 구성된다
	1.초기값은 for문이 시작될 때 1번만 동작된다.
	2.조건식 매번 반복할 때마다 체크하게 되고, 조건식이 true일때 코드블럭 안에 코드가 동작되고 false가 되면 for문을 빠져나오게 된다. 
	3. 증가값은 코드가 1번 실행되면, 증가값이 동작되고 그  후에 조건이 체크된다.

	for문 실행순서
	초기값 -> 조건식 -> 코드실행 -> 증가값 -> 조건식 -> 코드실행 -> 증가값 ->  조건실행...false일때 for문 종료
	
	break를 사용하면 반복문을   빠져 나오게 된다.
	*/

	int iNumber = 0;
	int i = 0;

	for (int i = 0; i < 10; ++i) //전위로 써 ++ 
	{
     		std::cout <<"iNumber = " << iNumber++ << std::endl;
	}

	//시작 조건을 생략할때
	for (; i<10; ++i)
	{
		
	}

	//for에 무한루프를 만드는 방법
	i = 0;

	//for (; ;) //무한루프
	//{

	//	++i;
	//	if (i == 20)
	//	{
	//		break;
	//	}
	//	std::cout << i << std::endl;
	//}

	//for문을 이용하여 구구단 2단
	
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "2  *" << i << "=" << i * 2 << std::endl;

	}
	system("cls");
	//이중for문

	for (int i = 2; i < 10; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			std::cout << i << "*" << j << "=" << i * j << std::endl;
		}


	}




	system("cls");
	//continue
	//continue를 사용하면 반복문의 시작점으로 돌아가게 된다.

	for (int i = 0; i < 10; ++i)
	{
		if (i == 5)
			continue;

		for (int i = 0;)

	}
	return 0;
}

