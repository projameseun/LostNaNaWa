#include <iostream>

int main()
{
	//nullptr 과  NULL의차이
	//포인터 : 메모리의 주소를 저장하는 변수
	
	int iNum = 10;


	int* pNum = &iNum;

	iNum = 200;
	
	//참조
	(*pNum) = 100;

	int a = 0;

	char* pChar = nullptr;
	double* pDouble = nullptr;


	std::cout << sizeof(pNum) << std::endl;
	std::cout << sizeof(pChar) << std::endl;
	std::cout << sizeof(pDouble) << std::endl;
	

	
	return 0;
}