#include <iostream>

int main()
{
	//nullptr ��  NULL������
	//������ : �޸��� �ּҸ� �����ϴ� ����
	
	int iNum = 10;


	int* pNum = &iNum;

	iNum = 200;
	
	//����
	(*pNum) = 100;

	int a = 0;

	char* pChar = nullptr;
	double* pDouble = nullptr;


	std::cout << sizeof(pNum) << std::endl;
	std::cout << sizeof(pChar) << std::endl;
	std::cout << sizeof(pDouble) << std::endl;
	

	
	return 0;
}