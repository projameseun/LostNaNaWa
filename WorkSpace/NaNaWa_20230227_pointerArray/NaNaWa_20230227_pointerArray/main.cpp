#include <iostream>
#include <Windows.h>


//Cal by reference ������ ȣ��
void Func(int* a)
{
	*a = 2000;
}

//Call by value ���� ȣ��
void Func2(int a)
{
	a = 2000;
}


int main()
{
	int iNum = 0;
	int* pNum = nullptr;

	pNum = &iNum;

	//�ּ��� ���� ũ�� 
	//byte�̴� 
	//�������� ���� 
	//�����ʹ� ������ ���� 2������ �����Ǵµ�
	//������ ������ ���࿡ 1�� ���Ҷ� �޸��ּҰ� 100���� �̸� 
	//101�� �Ǵ°� �ƴ϶� �� �ش� �ڷ�����ŭ ��������.
	//������� int�ڷ����̶�� 104������ �ȴ�.

	pNum += 1; //pNum�� int�� �������̱⶧���� 4byte��ŭ �����ȴ�.
	
	//�����͹迭 
	//�迭���� �����ʹ� 
	//�迭���� �ش�迭�� �����ϴ� ù���� �޸��ּ��̴�
	//�׷��� ������ ������ ������ �迭�� ���� �޸� �ּҸ� �����ϰ� �ε����� �����Ҽ� �ִ�.

	int iArr[10] = {};

	//


	for (int i = 0; i < 10; ++i)
	{
		iArr[i] = i + 1;
	}

	//std::cout << *(iArr ) << std::endl;

	*(iArr + 0) = 20;
	*(iArr + 2) = 200;

	for (int i = 0; i < 10; ++i)
	{
		std::cout << iArr[i] << std::endl;
	}

	
	//�迭�� �ε��� ���� ������ �����̴�.
	iArr[5] = 3000;
	std::cout << iArr[5] << std::endl;
	std::cout << *(iArr + 5) << std::endl;

	system("cls");

	for (int i = 0; i < 10; ++i)
	{
		std::cout << *(iArr + i) << std::endl;
	}


	int a = 200;
	
	Func(&a);

	std::cout << a << std::endl;

	int b = 300;

	Func2(b);

	std::cout << b << std::endl;

	//CallbyValue
	//CallbyReference 
	
	return 0;
}