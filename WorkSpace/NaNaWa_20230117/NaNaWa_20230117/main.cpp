#include <iostream>


/*
	함수(function): 사용자가 원하는 코드를 모아서 기능을 만들어 줄수 있는 것을 말한다.
	예를들어서 반복되는 코드가 있다면 그것을 함수로 만들어서 필요한 곳에서 이 함수를 불러서 해당코드가 동작될수 있게 만들어 줄수 있다.


*/


/*
	함수 문법
	
	반환타입 함수명(인자(매개변수))
	{

	}함수몸체

	반환타입:함수가 동작을 수행하고 결과를 반환해줄수 있는 자료형을 지정한다(void,int,float등)
	
	인자는 있을수도 있고 없을수도 있다
	인자는 이 함수를 불러다 호출할때 이 함수에 넘겨주고자 하는 값이 있다면 변수를 만들어서 사용하게 해준다.
	void 반환타입은 반환 할 값이 없다는 것이다.
*/


//전역변수
int gNum = 0;

//더하기 기능
int Add(int _a, int _b)
{
	int iResult = 0;
	float fNumber = 0.f;

	iResult += fNumber + 3.f;

	return _a + _b;
}

int Minus(int _a, int _b)
{
	return _a - _b;
}


void Render(float _a)
{
	std::cout << "Test" <<std::endl;
}


void Function();	//함수 선언



int main()
{
	/*
		삼항연산자
		조건 ? A : B 
		조건이 참이면 A를 반환하고 조건이 거짓이면 B를 반환한다.

	*/

	int iResult = 0;

	int a = 20, b = 50;

	iResult = (a != b) ? a : b;

	std::cout << "iResult = " << iResult << std::endl;

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "i = " << i << std::endl;
	}


	int iTotal = Add(10,20);

	int iTotal2 = Minus(10, 20);

	std::cout << "iTotal = " << iTotal << std::endl;

	std::cout << "iTotal2 = " << iTotal2 << std::endl;

	Render(1.f);
	
	//Function();

	int iNum = 0;

	float fNumber = 0.f;

	gNum++;
	gNum++;

	Function();

	std::cout << "gNum = " << gNum << std::endl;

	//지역변수 :코드블럭{}안에서 선언된 변수를 말한다. 함수의 내부나 함수의 인자들이 지역변수에 속한다.
	//지역변수는 함수 안에서만 접근이 가능하며, 함수를 벗어나면 소멸된다(메모리에서 해제된다.)
	
	//전역변수: Main코드블럭 외부에서 선언하는 변수를 말한다.
	//전역변수는 선언된 전역변수 아래의 어느 함수에서라도 동일한 변수로 접근이 가능하다.
	//전역변수는 프로그램이 시작될때 메모리에 할당되고 초기화를 안하면 자동으로 0으로 초기화가 된다.
	//전역변수는 프로그램이 실행될 동안 메모리에 계속 존재하다가 프로그램이 종료가 될때 메모리에서 해제 된다.


	return 0;
}


void Function()		//함수 정의
{
	gNum++;
	std::cout << "Function " << std::endl;
}
