#include <iostream>

int main()
{
	//1.
	int iNum = 257;
	char* ptr = (char*)&iNum;


	std::cout << "ptr : " << *ptr << std::endl;
	//�� 1�̳������� ?

	//2.
	iNum = 30;
	float fNum = 5.f;

	int* pNum = (int*)&fNum;

	iNum = *pNum;

	std::cout << "ptr : " << (*pNum) << std::endl;
	//�� �̷��� ū���ڰ� ��������?

	//3.	
	short sArr[10] = { 100,200,300,400,500,600,700,800,900,1000 };

	int* iptr = (int*)sArr;

	int iData = *(short*)(iptr + 3);

	std::cout << "iData = " << iData << std::endl;


	//4.
	char cArr[10] = { 1,1,1,1,1,1,1,1,1,1 };

	short* sptr = (short*)cArr;

	iData = *sptr;

	std::cout << "iData = " << iData << std::endl;



	return 0;
}