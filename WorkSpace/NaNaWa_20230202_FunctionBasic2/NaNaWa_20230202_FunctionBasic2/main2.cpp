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




/*	재귀(Recursion)함수란 
	함수 안에서 자기 자신의 함수를 호출하는 방식
	호출스택 더블클릭 하면 다른 쪽도 볼수 있다 중요함
	함수 안에서 자기함수를 계속 불러오면(재귀함수) 스택의 한계치를 도달하게 되는데
	이걸 스택오버 플로우 라고 한다.
	

*/

int Factorial_Re(int _Count)
{
	if (_Count == 1)
	{
		return 1;
	}

	return _Count * Factorial_Re(_Count - 1);
}

//피보나치수열
//1 1 2 3 5 8 13 21 34 55 89
int Fibonacci(int _Num)
{
	int iPreNum = 1;
	int iPreNum2 = 1;

	int iResult = 0;

	if (_Num == 1 || _Num == 2)
	{
		return 1;
	}

	for (int i = 0; i < _Num - 2; ++i)
	{
		
		iResult = iPreNum + iPreNum2;

		//순서를 잘못하면 이상한 값이 들어가게 된다.
		//iPreNum2 = iResult;
		//iPreNum = iPreNum2;
		iPreNum = iPreNum2;
		iPreNum2 = iResult;
		
	}

	return iResult;
}

int Fibonacci_Re(int _Num)
{
	if (_Num == 1 || _Num == 2)
	{
		return 1;
	}

	return Fibonacci_Re(_Num - 1) + Fibonacci_Re(_Num - 2);
	
}


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

	iResult = Factorial_Re(5);

	std::cout << "iResult = " << iResult << std::endl;

	//피보나치수열 
	iResult = Fibonacci(8);
	std::cout << "iResult = " << iResult << std::endl;

	iResult = Fibonacci_Re(5);
	std::cout << "iResult = " << iResult << std::endl;

	return 0;
}

//배열