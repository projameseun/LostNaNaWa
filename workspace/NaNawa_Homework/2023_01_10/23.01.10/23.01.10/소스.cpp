#include <iostream>
#include <Windows.h>
#include <time.h>

int main()
{
	/*
	�ݺ��� for : ���α׷� �׿��� �Ȱ��� ����� ���� Ƚ����ŭ �ݺ��Ͽ� �����ϵ��� �����ϴ� ��ɹ�
	�ܼ��ϰ� ����ϸ� ������ �ڵ带 �ݺ��ؼ� ���۽�ų�� Ȱ���ϴ� ���


	for��
	for(�ʱⰪ, ���ǽ�, ������)
	{
	�ڵ��;
	}

	1. �ʱⰪ�� for���� �밡�� �� 1���� ���۵ȴ�.
	2. ���ǽ��� �Ź� �ݺ��Ҷ����� üũ�ϰ� �ǰ� ���ǽ��� true�϶� �ڵ��  ���� �ڵ尡 ���۵Ǹ� false�� �Ǹ� for���� ������.
	3. �ʱⰪ�� �ڵ尡 1�� ����Ǹ� �������� ���۵ǰ� �� �Ŀ� ������ üũ�ȴ�.

	for���� �������
	�ʱⰪ > ���ǽ� > �ڵ���� > ������ > ���ǽ� > �ڵ���� > ������ > ���ǽ� ... ... false�϶� for�� ����
	*/

	int iNumber = 0;

	int i = 0;

	//���� ++i


	for (i = 0; i < 10; ++i)
	{
		std::cout << "iNumber =" << iNumber++ << std::endl;
	}

	//���� ������ �����Ҷ�

	for (; i < 10; ++i)
	{
		iNumber++;
	}

	std::cout << iNumber << std::endl;

	//FOR���� ���ѷ����� ����� ���
	//�� ���� break�� ������ �ʴ��� ������ �ʴ´�.

	i = 0;
	for (; ;) // ; ; = ���ѷ���
	{
		++i;
		//if (i==20) break;

		if (i==20)
		{
			break;
		}
		
		std::cout << i << std::endl;
	}

	//for���� �̿��Ͽ� ������ 2��
	for (int i = 1; i < 10; ++i)
	{
		std::cout << "2 * " << i << "=" << i * 2 << std::endl;
	}

	for (int i = 1; i < 10; ++i)
	{
		std::cout << "3 *" << i << "=" << i * 3 << std::endl;

	}


	system("cls");
	//���� for�� : for �� �ȿ� �� �ٸ� for ���� ���� �����̴�.

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j <10; ++j)
		{
			std::cout << "i:" << i << "j:" << j << std::endl;

		}
	}


	for (int i = 2; i < 10; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			std::cout << i << "*" << j <<"="<< i * j << std::endl;
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		if (i == 8)
			continue; // i�� 8�϶� if���� ������ ���ö� �� �� �� ������ �Ǿ �ٽ� �Ʒ� for���� ��


		for (int j = 0; j < 10; ++j)
		{
			std::cout << "i:" << i << "j :" << j << std::endl;
		}
	}


	//������ �غ��� ����� ��  
	

	/*for ()
	{


	}*/










	return 0;
}