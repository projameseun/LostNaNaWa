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

//����Լ��� 
//�Լ� �ȿ��� �ڱ� �ڽ��� �Լ��� ȣ���ϴ� ���
//ȣ�⽺�� ����Ŭ���ϸ� �ٸ� �ʵ� ���� �ִ� �߿���
//�Լ� �ȿ��� �ڱ��Լ��� ��Ӻҷ�����(����Լ�) ������ �Ѱ�ġ�� �����ϰԵǴµ�
//�̰� ���ÿ��� �÷ο��� �Ѵ�.


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

	return 0;
}