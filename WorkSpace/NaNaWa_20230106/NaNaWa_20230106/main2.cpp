#include <iostream>
#include <time.h>

int main()
{

	//srand((unsigned int)time(NULL));
	srand(static_cast<unsigned int>(time(NULL)));

	//난수 (무작위 의 수)
	//컴퓨터는 랜덤이라는 수를 만들수 없다.
	//랜덤이란 무작위의 수를 나오게 하는건데 이 무작위의 수를 무의시적으로 선택 할수 없기 때문이다.
	//컴퓨터는 무조건 정해진 입력에 따라 값을 낼 뿐이다.
	//여러 계산을 통해서 사람이 볼때는 마치 임의의 값인 것처럼 보이게 하는거다.

	//rand()
	//무작위 랜덤테이블이란 것이 존재하고 이를 리턴하는 거다. 
	//rand() 함수는 내부에 RAND_MAX #define으로 정의 되어있고 이숫자는 16진수로 되어 있는데, 10진수로 바꾸면 32,767로 되어있다.
	//결국 rand()함수가 표현할수 있는 범위는 0 ~ 32,767값이 나온다는 것이다.
	//rand함수는 프로그램이 실행될때 딱 값이 정해지기 때문에 프로그램을 여러번 실행을 시켜도 동일한 값이 나온다.

	//std::cout << "1 rand :" << rand() << std::endl;
	//std::cout << "2 rand :" << rand() << std::endl;
	//std::cout << "3 rand :" << rand() << std::endl;
	//std::cout << "4 rand :" << rand() << std::endl;

	//rand() 함수만으로는 랜덤을 표현할수 없기때문에 나오게 된게 srand()함수이다.
	//srand(seed값)
	//srand는 rand함수에 사용될 수를 초기화 한다. 이 초기화를 매개변수로 받는 seed값을 이용해서 사용한다.
	//srand(5000);
	//std::cout << "rand :" << rand() << std::endl;
	//srand(5000);
	//std::cout << "rand :" << rand() << std::endl;
	//srand(6000);
	//std::cout << "rand :" << rand() << std::endl;
	//srand(200);
	//std::cout << "rand :" << rand() << std::endl;

	//time함수 
	//UCT(1972년 1월 1일 0분 0초부터 시행된 국제 표준시) 이시간을 정수값으로 반환해주는 함수가 time함수이다.
	////
	////std::cout << time(0) << std::endl;
	//std::cout << "1.rand :" << rand() << std::endl;
	//std::cout << "2.rand :" << rand() << std::endl;
	//std::cout << "3.rand :" << rand() << std::endl;
	//std::cout << "4.rand :" << rand() << std::endl;
	//std::cout << "5.rand :" << rand() << std::endl;

	//우리가 정해진 범위의 숫자안에서 랜덤을 가져오게 하고싶다.
	//이때 사용하는게 나머지 연산자다.
	//어떤 큰숫자가 와도 나머지 연산자를 사용하면 내가 원하는 범위에 값을 나타낼수 있다.


	////0~2까지만 무조건나온다
	///*int iRand = rand() % 3;*/
	//std::cout << iRand << std::endl;

	////0~99까지만 나오게한다
	//iRand = rand() % 100;

	////1~100까지만 나오게한다
	//iRand = rand() % 100 + 1;		//0 ~99 나오게된다 

	////100 ~ 199 까지만 나오게한다

	//iRand = rand() % 100 + 100;	

	//float fRand = rand() % 10000 / 100.f;	//소수점 둘째자리의 숫자를 사용할수도 있다.
	//std::cout << "Rand :" << fRand << std::endl;

	//최소 공격력 최대 공격력
	//500~1000
	//int iMin = 500;
	//int iMax = 1000;

	//0 ~500값이 나오게 해야된다. 

	/*if (fRand < 1.f)
	{
		std::cout << "에스더 획득 " << std::endl;
	}
	else if (fRand < 50.f)
	{
		std::cout << "유물 획득 " << std::endl;
	}
	else if (fRand < 60.f)
	{
		std::cout << "희귀 획득 " << std::endl;
	}
	else if (fRand < 70.f)
	{
		std::cout << "일반 획득 " << std::endl;
	}
	else
	{
		std::cout << "아이템 없음 " << std::endl;
	}*/

	
	int iMax = 500;
	int iMin = 1000;

	int iRand = rand() % (1000 - 500 + 1) + 500;

		std::cout << iRand << std::endl;

	return 0;
}