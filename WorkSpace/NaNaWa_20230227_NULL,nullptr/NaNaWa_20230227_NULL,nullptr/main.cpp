#include <iostream>


void Func(int a)
{
	std::cout << "int ȣ��" << std::endl;
}

void Func(int* a)
{
	std::cout << "int* ȣ��" << std::endl;
}


int main()
{
	//NULL,nullptr

	int iNum = 0;

	int a = NULL;
	
	//c++11���� ���� �����.

	//NULL,nullptr ������ 
	//NULL�� #define ���� �Ǿ� �ִ� ��� 0�̴�.

	//nullptr�� �����͸� ǥ���ϴ� ���߿� NULL�� ǥ���ϴ� ���̶�� �Ҽ� �ִ�.
	Func(0);
	Func(NULL);
	Func((int*)0);
	Func(nullptr);

	//NULL�� ��ȣ�ϴ�.
	std::cout << "NULL,nullptr ��" << std::endl;

	int* ptr1 = NULL;
	int* ptr2 = nullptr;

	//int iTest = nullptr;

	if (ptr1 == NULL)
	{
		std::cout << "NULL == NULL" << std::endl;
	}
	if (ptr2 == NULL)
	{
		std::cout << "nullptr == NULL" << std::endl;
	}
	if (ptr1 == nullptr)
	{
		std::cout << "NULL == nullptr" << std::endl;
	}
	if (ptr2 == nullptr)
	{
		std::cout << "nullptr == nullptr" << std::endl;
	}
	if (ptr1 == ptr2)
	{
		std::cout << "NULL == nullptr" << std::endl;
	}

	//���� ����� �ϰԵǸ� �������� �Ǵµ�
	//NULL�� 0�̱⵵ ������ nullptr�� �������� true�� ���´ٴ� ����� �˼� �ְ�
	//NULL�� ��Ȳ�� ���� ��ȣ�ϰ� �����ȴ�.
	//����� intŸ���̶� �񱳸� �ϰ� �� ����� ������0���� null�� ����Ű�� ��ȣ�� ��Ȳ�� ���´�.
	//�׷��� �����͸� ����Ҷ� �ʱ�ȭ�� �Ҷ��� NULL�� �ƴ� nulltpr�� ����ؾ� �ȴ�.
	//�׸��� nulllptr�� ����ϰ� �Ǹ� ����ڰ� �̰Ŵ� �����͸� �ʱ�ȭ �Ѱ��̶�� �ٷ� �˼� �־ �������� ��������.
	





	//������:�ּҸ� �����ϴ� ���� 
	//32bit ȯ�濡���� 4byte
	//64bite ȯ�濡���� 8byte 

	//�������� �ּҴ��� byte�� 

	
	//�������� 
	//�����ͺ����� �ٸ������� �޸��ּҸ� �����ϰ� ������ �ش� �ּҿ� �����Ͽ� ���� �����ų� �����ϴ°��� ���Ѵ�.

	//�����ͺ������� ������ �ڷ����̸��� ������ ������ ������ ���۵Ǵ� �ּҰ����� 
	//�󸶸�ŭ�� ũ�⸦ �о������ �����Ѵ�.

	int* ptr = nullptr;

	std::cout << sizeof(ptr) << std::endl;

	float fNum = 3.0f;

	short* psNum = nullptr;
	
	//std::cout << sizeof(pfNum) << std::endl;
	//std::cout << sizeof(psNum) << std::endl;

	ptr = &iNum;

	*ptr = 100;


	int* pNum = (int*)&fNum;

	iNum = *pNum;

	std::cout << iNum << std::endl;
	std::cout << (*pNum) << std::endl;
	
	//���� ���� ��ûū���ڰ� ���´� ������ fNum�� �Ǽ� �̴� �Ǽ�ǥ���� ���ʿ� ����ǥ������ ���� �ٸ���.
	//�׷��� �Ǽ�ǥ���� ����� ������ ǥ�������� ���� ���°� �̴�.
	//������ ����,��� ǥ���� �ٸ���ó��
	


	return 0;
}