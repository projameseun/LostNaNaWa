#include <iostream>

	//�����ϳ� ��Ȱ������ �װͿ� ���� �����龲��

/*
	������ ���� 4���� 
	1.�������� (�޸�)�� �ش� �ڵ������ ������� ���� �ȴ�. //(����)�ش����������� ����� �����ϴ� 
	2.�������� ���α׷��� �����Ҷ� (�޸�)�� �����ǰ� ����ɶ� �����ȴ�. //(����)����������� ����� ����
	3.static����(��������)
	4.�ܺκ���(extern)


	ROM(Read-only Memory) = ReadOnly
	RAM(Random Accesss Memory) = ���α׷��� ����Ǵ� ���� �ʿ��� ������ �����ϴ� ��ǻ�� �޸� �̴�.
	RAM�̶� ����� �����͸� �������� �ƴ� ������ ������ �׼��� �Ҽ� �ִ� ������ ����� �̴�.  //Read/Write����
	

	�ڸ޸𸮿�����
	===========================================================================================
	stack����
	data����
	code����(ROM)
	heap����

*/



int data = 0;	//

void Func()
{
	int a = 0;

	 data += 1;
	
}



int main()
{
	
	Func();
	
	std::cout << data << "\n";

	return 0;
}