#include <iostream>
#include <Windows.h>
#include <time.h>
#include <algorithm>

using namespace std;

/*
	�迭:���� �ڷ����� ���� �������� �ѹ��� �����Ҽ� �ְ� ���ִ� ����̴�.
	�迭�� �޸𸮰� ���������� ���� �ִ�.

	����Ÿ�� �迭��[����];	//������ ����� �����ϴ�.
	�� ���·� �����ȴ�.

	�迭�� ��������
	������ �޸𸮸� ���鶧 �Ȱ��� �����͸� �׷��� ��� ǥ���Ҷ� �迭 ������ ����Ѵ�.

*/

bool compare(int a, int b)
{
	return a > b;
}

int main()
{


	int iStudent[100];
	//��ó�� ����ԵǸ� �л�100���� �����Ҽ� �ִ°� ������ ���̴�.
	//�� ��ҿ� �����ϱ� ���ؼ� ����ϴ°��� �ε����̴�.
	//�ε����� 0 ~���� -1���� �̴�.

	//�迭 �ʱ�ȭ
	int iNumber[10] = {};	//��� 0���� �ʱ�ȭ �Ѵ�
	//int iNumber[10] = { 0, };
	//int iNumber[10] = { 0,0,0,0,0,0,0,0,0,0 };

	int iArray[] = { 1,299,300,500 ,230};	//�ټ����� �ʱ�ȭ �Ѱ��̴�.

	int iNumber2[10] = { 1,2,3 }; 
	//��ó�� �ʱ�ȭ�� �ϰ� �Ǹ� 0 ,1,2�� �ε����� 1,2,3���� ���� �ǰ� �������� 0 ���� �ʱ�ȭ �Ѵ�.

	iNumber2[0] = 20;
	iNumber2[5] = 10;

	size_t iSize = 0;

	std::cout << "iNumber2 : " << sizeof(iNumber2) << std::endl;
	
	iSize = sizeof(iNumber2) / sizeof(*iNumber);	//�迭�ǰ����� ���ѰŴ�


	for (int i = 0; i < iSize; ++i)
	{
	
		iNumber2[i] = i + 1;
	}

	for (int i = 0; i < iSize; ++i)
	{
		std::cout << "iNumber2[";
		std::cout << i << "]" << iNumber2[i] << std::endl;
	}

	
	float fArray[50] = { 0.f };

	std::cout << "fArray : " << sizeof(fArray) << std::endl;
	
	
	//���ڿ� �迭 
	char data[6] = { 'H','A','P','P','Y'};	//���ڿ� ���� NULL,0���� ǥ���Ѵ�. �̷��� �����Ϸ��� �̹迭�� ����� ������ ���ڿ��̶�°��� �˼��ִ�.
	char data2[6] = "Happy";
	
	char data3[25] = "�ȳ��ϼ���";	//�ѱ��� 2����Ʈ ����� 1����Ʈ


	

	std::cout << data << std::endl;
	std::cout << data2 << std::endl;
	std::cout << data3 << std::endl;

	system("cls");

	//�ζ� ���α׷� 
	//1~45������ ������ ������ 6���� ���ڸ� �����´� 
	//���� �ߺ��Ǹ� �ȵȴ�.
	//�������� �������� 

	int iLotto[45] = {};

	//���ϴ°� �ִ´�
	for (int i = 0; i < 45; ++i)
	{
		iLotto[i] = i + 1;
	}

	srand(static_cast<unsigned int>(time(NULL)));

	//shuffule 
	int iTemp, idx1, idx2;

	for (int i = 0; i < 100; ++i)
	{
		idx1 = rand() % 45;
		idx2 = rand() % 45;

		iTemp = iLotto[idx1];
		iLotto[idx1] = iLotto[idx2];
		iLotto[idx2] = iTemp;
	}

	//STL(Standard ���̺귯��)

	//�������� ���������� �������ִ°Ŵ�
	/*std::sort(iLotto, iLotto + 6);*/
	std::sort(iLotto, iLotto + 45,compare);

	//�������� ��������
	/*for (int i = 0; i < 5; ++i)
	{
		for (int j = i + 1; j < 6; ++j)
		{
			if (iLotto[i] > iLotto[j])
			{
				iTemp = iLotto[i];
				iLotto[i] = iLotto[j];
				iLotto[j] = iTemp;
			}
		}
	}*/

	for (int i = 0; i < 6; ++i)
	{
		std::cout << iLotto[i] << std::endl;
	}
	

	return 0;
}