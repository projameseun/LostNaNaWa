#include <iostream>

int main()
{
	//������
	//+,-,*,/,%(��ⷯ��)

	std::cout << "10 + 5 = " << (10 + 5) << std::endl;
	std::cout << "10 - 5 = " << (10 - 5) << std::endl;
	std::cout << "10 * 5 = " << (10 * 5) << std::endl;
	std::cout << "10 / 5 = " << (10 / 5) << std::endl;
	std::cout << "10 % 5 = " << (10 % 5) << std::endl;

	//��ⷯ�������ڴ� A�� B�� ���������� ���� ������ �������� �����ش�.
	//10 % 5 = 0 �� �Ǵ� ���̴�.
	//��ⷯ�� �����ڸ� �̿��ϸ� 2�� ���������� �������� 0�̵Ǹ� ¦���̴�. ¦���� �� �������� Ȧ���̴�.

	//������ �����
	//+= , -=�� ��� �����ڵ��� ����ؼ� ����� �����ϴ�.

	int a = 0;
	int b = 0;

	a += 1; // a = a +1;
	b -= 1; // b = b -1;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	//���� ������
	//++,--

	//int iNumber = 0;

	//iNumber = iNumber++;
	//std::cout << "iNumber++ = " << iNumber << std::endl;
	//iNumber = iNumber--;
	//std::cout << "iNumber-- = " << iNumber << std::endl;

	//����,����

	int data = 0;
	data++; //����
	++data; //����

	int iNumber = 10;
	int iNumber2 = 30;
	int iNumber3 = 0;
	int iNumber4 = 0;

	iNumber3 = ++iNumber;
	iNumber4 = --iNumber2;

	std::cout << "iNumber3 = " << iNumber3 << std::endl;
	std::cout << "iNumber4 = " << iNumber4 << std::endl;

	//���������ڴ� ���״�� �������� �ְ� ���Ѵٴ� �ǹ��̴�.
	//���� �����ڴ� �ܵ����� ����Ҷ��� ū���� ������ ������ �־������� ��Ⱑ �ٸ���.
	//������ �켱������ ���ؼ� ���Կ����ڰ� ���� �Ͼ��.
	//�׷��� ���� �� ������ ������ �־������� �и��� ���̰� �ִ�.

	//���迬���� 
	//< , > , <= , >= ,==(����) , !=(�ٸ���)
	//���迬���ڴ� ���� ���� �����Ͽ� ��/�������� ������ �ȴ�.

	std::cout << "100 < 200 = " << (100 < 200) << std::endl;
	std::cout << "100 > 200 = " << (100 > 200) << std::endl;
	std::cout << "100 <= 200 = " << (100 <= 200) << std::endl;
	std::cout << "100 >= 200 = " << (100 >= 200) << std::endl;
	std::cout << "100 == 200 = " << (100 == 200) << std::endl;
	std::cout << "100 != 200 = " << (100 != 200) << std::endl;

	//������ �̿��� ���迬����

	iNumber = 0;
	iNumber = 20;

	std::cout << "iNumber < 200 = " << (iNumber < 200) << std::endl;
	std::cout << "iNumber != 200 = " << (iNumber != 200) << std::endl;


	//�� ������
	//!(NOT),&&(AND),||(OR)
	//�� �����ڴ� ��/���� �� ��/������ �����Ͽ� ����� ��/������ ������ �ȴ�.

	/*
	
	A		B		AND		OR
	false	false	false	false
	false	true	false	true
	true	false	false	true
	true	true	true	true

	AND�� �Ѵ� true�϶� true�̰� �ƴϸ� false�̴�.
	OR�� ���� �ϳ��� true�϶� true�̰� �ƴϸ� false.

	A		NOT
	false	true
	true	false
	NOT�����ڴ� ������ �ȴ�.
	

	true = 1 ;
	flase = 0;
	*/

	std::cout << "false && false = " << (false && false) << std::endl;		//0
	std::cout << "false && true = " << (false && true) << std::endl;		//0
	std::cout << "true && false = " << (true && false) << std::endl;		//0
	std::cout << "true && true = " << (true && true) << std::endl;			//1

	std::cout << "false || false = " << (false || false) << std::endl;		//0
	std::cout << "false || true = " << (false || true) << std::endl;		//1
	std::cout << "true || false = " << (true || false) << std::endl;		//1
	std::cout << "true || true = " << (true || true) << std::endl;			//1

	std::cout << "!false = " << !false << std::endl;						//1
	std::cout << "!true = " << !true<< std::endl;							//0

	

	return 0;
}