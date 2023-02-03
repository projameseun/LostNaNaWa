#include <iostream>

//팩토리얼 함수

int Factorial(int _Count)
{
	int iValue = 1;

	for (int i = 0; i < _Count - 1; ++i)
	{
		//iValue = iValue * (i + 2);
		iValue *= (i + 2);               //1* 2* 3* ...  //

		//  
	}

	//Factorial(5); 

	return iValue;
}

//재귀함수란 
//함수 안에서 자기 자신의 함수를 호출하는 방식
//호출스택 더블클릭하면 다른 쪽도 볼수 있다 중요함
//함수 안에서 자기함수를 계속불러오면(재귀함수) 스택의 한계치를 도달하게되는데
//이걸 스택오버 플로우라고 한다.


int main()
{
	int iFacNum = 7;

	int iResult = 0;

	//팩토리얼을 생각했을때 4팩토리얼 이면 곱하는 횟수가 3개 이다.

	//for (int i = 0; i < iFacNum - 1; ++i)
	//{
	//	//iValue = iValue * (i + 2);
	//	iValue *= (i + 2);               //1* 2* 3* ...  //

	//	//  
	//}

	iResult = Factorial(10);

	std::cout << "iResult = " << iResult << std::endl;

	return 0;
}