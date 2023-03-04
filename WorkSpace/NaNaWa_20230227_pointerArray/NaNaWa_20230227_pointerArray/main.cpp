#include <iostream>
#include <Windows.h>


//Cal by reference 참조를 호출
void Func(int* a)
{
	*a = 2000;
}

//Call by value 값을 호출
void Func2(int a)
{
	a = 2000;
}


int main()
{
	int iNum = 0;
	int* pNum = nullptr;

	pNum = &iNum;

	//주소의 단위 크기 
	//byte이다 
	//포인터의 연산 
	//포인터는 덧셈과 뺄샘 2가지가 제공되는데
	//포인터 연산은 만약에 1을 더할때 메모리주소가 100번지 이면 
	//101이 되는게 아니라 그 해당 자료형만큼 더해진다.
	//예를들어 int자료형이라면 104번지가 된다.

	pNum += 1; //pNum은 int형 포인터이기때문에 4byte만큼 증가된다.
	
	//포인터배열 
	//배열명은 포인터다 
	//배열명은 해당배열이 시작하는 첫번재 메모리주소이다
	//그렇기 때문에 포인터 변수에 배열의 시작 메모리 주소를 저장하고 인덱스로 접근할수 있다.

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

	
	//배열의 인덱스 접근 포인터 연산이다.
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