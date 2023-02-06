#include <iostream>

//���丮�� �Լ�

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




/*	���(Recursion)�Լ��� 
	�Լ� �ȿ��� �ڱ� �ڽ��� �Լ��� ȣ���ϴ� ���
	ȣ�⽺�� ����Ŭ�� �ϸ� �ٸ� �ʵ� ���� �ִ� �߿���
	�Լ� �ȿ��� �ڱ��Լ��� ��� �ҷ�����(����Լ�) ������ �Ѱ�ġ�� �����ϰ� �Ǵµ�
	�̰� ���ÿ��� �÷ο� ��� �Ѵ�.
	

*/

int Factorial_Re(int _Count)
{
	if (_Count == 1)
	{
		return 1;
	}

	return _Count * Factorial_Re(_Count - 1);
}

//�Ǻ���ġ����
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

		//������ �߸��ϸ� �̻��� ���� ���� �ȴ�.
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

	//���丮���� ���������� 4���丮�� �̸� ���ϴ� Ƚ���� 3�� �̴�.

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

	//�Ǻ���ġ���� 
	iResult = Fibonacci(8);
	std::cout << "iResult = " << iResult << std::endl;

	iResult = Fibonacci_Re(5);
	std::cout << "iResult = " << iResult << std::endl;

	return 0;
}

//�迭