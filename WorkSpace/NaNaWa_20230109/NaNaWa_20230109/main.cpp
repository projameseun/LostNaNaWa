#include <iostream>
#include <Windows.h>
//using namespace std;

int main()
{
	//typedef ���
	/*
	�ݺ���(loop):���α׷� ������ �Ȱ��� ����� ���� Ƚ����ŭ �ݺ��Ͽ� �����ϵ��� �����ϴ� ��ɹ��̴�.
	�ܼ��ϰ� ����ϸ� ������ �ڵ带 �ݺ��ؼ� ���۽�ų�� Ȱ���ϴ� ����̴�.

	for��
	for(�ʱⰪ; ���ǽ�; ������)
	{
		�ڵ��;
	}�� ���·� �����ȴ�.
	
	1.�ʱⰪ�� for���� ���۵ɶ� 1���� ���۵ȴ�.
	2.���ǽ��� �Ź� �ݺ��Ҷ����� üũ�ϰ� �ǰ� ���ǽ��� true�϶� �ڵ�� ���� �ڵ尡 ���۵ǰ� false�� �Ǹ� for���� ���������� �ȴ�.
	3.�������� �ڵ尡 1�� ����Ǹ� �������� ���۵ǰ� �� �Ŀ� ������ üũ�ȴ�.

	for�� �������
	�ʱⰪ -> ���ǽ� -> �ڵ���� -> ������ -> ���ǽ� -> �ڵ���� -> ������ ->���ǽ� -> �ڵ���� ....false�϶� for�� ����

	�ݺ�������
	break�� ����ϸ� �ݺ����� ���� ������ �ȴ�.
	continue�� ����ϸ� �ݺ����� ���������� ���ư��� �ȴ�.

	*/

	int iNumber = 0;
	int i = 0;
	//���� ++i 
	for (i = 0; i < 10; ++i)
	{
		std::cout << "iNumber = " << ++iNumber << std::endl;
		
	}

	//���� ������ �����Ҷ�
	for (; i < 10; ++i)
	{
		iNumber++;
	}

	std::cout << iNumber << std::endl;

	i = 0;
	//for�� ���ѷ����� ����� ���
	//�� ���� break�� ������ �ʴ��� ������ �ʴ´�.
	for (; ;)
	{
		
		++i;
		//if (i == 20) break;
		if (i == 20)
		{
			break;
		}
		std::cout << i << std::endl;
		
	}

	//for���� �̿��Ͽ� ������ 2��
	for (int i = 1; i < 10; ++i)
	{
		std::cout << "2 * " << i << " = " << i * 2 << std::endl;
	}

	system("cls");

	//����for�� : for�� �ȿ� �� �ٸ� for���� ���� �����̴�.
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			std::cout << "i : " << i << " j :" << j << std::endl;
		}
	}
	system("cls");
	for (int i = 0; i < 10; ++i)
	{
		if (i == 8)
			continue;
		
		for (int j = 0; j < 10; ++j)
		{
			std::cout << "i : " << i << " j :" << j << std::endl;
		}
	}

	system("cls");

	//������ 2 ~ 9�� ���� ����غ���.
	for (int i = 2; i < 10; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			if (j == 1)
			std::cout << i << "��: ";
			
			std::cout << i << "*" << j << "=" << i * j << "\t";
		}

		std::cout << std::endl;
	}
	


	return 0;
}