#include <iostream>


namespace _NANAWA //���ӽ����̽�
{
	int iHP = 100;
	int iMP = 50;
	
	void Attack()
	{
		std::cout << "�ĳĿͰ� ���ٵ带 �����մϴ�" << std::endl;
	}
	
}


int main()
{


/*
	1. namespace�� �ϳ� ���� ����غ���

	2. int inum = 0;
	100�� ����غ�����.


	3.int iNum2 = 0;
	1500�� �Է¹޾� ����غ�����.
*/
	//:: ��������������
	
	
	std::cout << "�ȳ��ϼ���. �ĳĿ��Դϴ�"<< std::endl;

	int iHP = 100;

	_NANAWA::iHP = 1000;
	
	std::cout << iHP << std::endl;
	std::cout << _NANAWA::iHP << std::endl;

	int iNumber = 1;

	std::cout << "1�� �Է����ּ���" << std::endl;
	std::cin >> iNumber; //1�� �Է����� �� 1500�� ������ �ϰ� ������ �ƹ��ų� �ĵ� ����. 
	//1�� �Է��������� �������ϴ� ���� ����ϰ�ʹ�.
	if (iNumber == 1)
	{

		std::cout << "1500" << std::endl;
	}
	else
	{

	}
	
	int iNumber2 = 0; 
	

	int iNumber3 = 100;  //�ʱⰪ�� �ִ´�.

	int iMP = 10; // �׷��ٸ� �� ������ �ǹ̰� �����ΰ�? �Ф� 

	char str[50];

	std::cout << "�ƹ����̳� �Է��غ�����" << std::endl;
	std::cin >> str;
	std::cout << "�Է��Ѱ�:" << str << std::endl;

	std::cout << "1.iMP :" << iMP << std::endl;
	std::cout << "�ĳĿ͹ٺ� ��� �Է��غ�����" << std::endl;
	std::cin >> iMP; // cin���� �Է�â�� ����°� ������.. �� i(����)�� ǥ���Ͽ����ϴ°�?,,
	std::cout << "2.iMP :" << iMP << std::endl;
	_NANAWA::Attack();

	//std::cout << "�ĳĿʹ��� ���ٵ���� �����Ͽ����ϴ�" << std::endl;
	


	return 0;


}
