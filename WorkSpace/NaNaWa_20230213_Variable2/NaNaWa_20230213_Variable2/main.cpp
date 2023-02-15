#include <iostream>
#include "Calculate.h"
#include "Func.h"

	//�����ϳ� ��Ȱ������ �װͿ� ���� �����龲��

/*
	������ ���� 4���� 
	1.�������� (�޸�)�� �ش� �ڵ���� ������� ���� �ȴ�. //(����)�ش����������� ����� �����ϴ� 
	
	2.�������� ���α׷��� �����Ҷ� (�޸�)�� �����ǰ� ����ɶ� �����ȴ�. //(����)����������� ����� ����
	
	3.static����(��������) (�޸�)�� ���������� ���� / (����) ���������� ����ϴ� 
	���� ���������� ����� �����ϰ� �����ɶ� �޸𸮰� ������ ���α׷��� ������ �޸𸮰� ���� �ȴ�.
	�ܺ����Ͽ��� ���������� �̸��� ������ ���� �ٸ������̴� �̸��� �ּҰ� �ٸ��ٴ� ���̴�.

	4.�ܺκ���(extern) �ܺκ������ �θ��� �������� ���̸鼭 �ٸ����Ͽ��� �Ȱ��� �������� ���� �����̴� �̸��� �ּҰ� �ᱹ ���ٴ� ���̴�.


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
	 g_iNumber++;

	 g_StaticNum++;

	 static int g_Total = 0;

	 g_Total++;

	 std::cout << "g_Total :" << g_Total << std::endl;
}

void Func3()
{
	//����ƽ����
	static int g_Total = 0;

	g_Total++;

	std::cout << "g_Total :" << g_Total << std::endl;


	//��������
	int a = 0;

	a++;

	std::cout << a << std::endl;
}




int main()
{

	Func();

	Func2();
	
	std::cout << g_iNumber << std::endl;

	std::cout << "���� ����ƽ���� ��: " << g_StaticNum << std::endl;
	
	Func3();
	Func3();
	Func3();
	Func3();
	Func3();

	
	MyFunc1();
	MyFunc2();
	MyFunc3();
	MyFunc4();
	MyFunc5();


	return 0;
}