#include <iostream>
#include <Windows.h>

int main()
{
	/*
	
	���ǹ� : if , switch
	���ǹ��̶�??
	� Ư�� ���ǽ��� �ο��ϰ� �ش� ������ �����ϸ� ������ ������ �����ϴ� ����
	if��
	if(���ǽ�)
	{

	}(�ڵ��)

	���ǽ��� true�� ��� �ڵ�� ������ �ڵ尡 �۵��� �ǰ� false�Ǹ� ���õȴ�.


	*/

	if(true)
	{
		std::cout << "���� �Դϴ�" << std::endl;
	}

	if (false)
	{
		std::cout << "���� �Դϴ�" << std::endl;
	}

	int iNumber = 100;

	//if (iNumber == 100)
	//{
	//	std::cout << "iNumber = " << iNumber << std::endl;
	//}
	
	/*
	else: if���� ������ ����Ҽ� �ִ�.
	if�� 1���� 1���� else���� �ü� �ִ�.
	else�� ���������� ����� �Ұ����ϴ�.
	*/
	
	if (iNumber == 100)
	{
		std::cout << "iNumber = " << iNumber << std::endl;
	}
	else
	{
		std::cout << "iNumber = " << iNumber << std::endl;
	}
	
	/*
	else if:if�� �Ʒ��ü� �ִ�. else�� �ٸ��� �������� ����� �ִ�.
	else if�� ���������� ����� �Ұ��� 

	*/

	//������� �ν�Ʈ��ũ ��ź 
	//int iBaltanHP = 1000;	//õ��

	//if (iBaltanHP == 100000000)		//��ź HP Ǯ�϶�
	//{
	//	//ù��° �̺�Ʈ�� �߻���Ų��.
	//	std::cout << "1��° �̺�Ʈ�߻�" << std::endl;
	//}
	//else if (iBaltanHP < 800000 && iBaltanHP > 50000)
	//{
	//	//�ι�° �̺�Ʈ�� �߻���Ų��.
	//	std::cout << "2��° �̺�Ʈ�߻�" << std::endl;
	//}
	//else if (iBaltanHP < 50000 && iBaltanHP > 12999)
	//{
	//	//����° �̺�Ʈ�� �߻���Ų��.
	//	std::cout << "3��° �̺�Ʈ�߻�" << std::endl;
	//}
	//else if (iBaltanHP < 12999 && iBaltanHP > 1200)
	//{
	//	//�׹�° �̺�Ʈ�� �߻���Ų��.
	//	std::cout << "4��° �̺�Ʈ�߻�" << std::endl;
	//}
	//else
	//{
	//	//������ �̺�Ʈ�� �߻���Ų��.
	//	std::cout << "5��° �̺�Ʈ�߻�" << std::endl;
	//}

	//�л����α׷� ���
	int iKor = 0;
	int iEng = 0;
	int iMath = 0;
	int iTotal = 0;

	//�Ҽ��� �ڸ��� ���� float�ϰ�쿡�� .f�� ������ 0�� �����Ҽ� �ִ� ex) 1.0f == 1.f;
	float fAvg = 0.f;	
	//���(Average)
	// ȭ���� �ƿ� ������ ����� �Լ� Winodws.h ������ �ʿ��ϴ�
	system("cls");
	
	std::cout << "�������� : ";
	std::cin >> iKor;
	system("cls");
	std::cout << "�������� : ";
	std::cin >> iEng;
	system("cls");
	std::cout << "�������� : ";
	std::cin >> iMath;
	system("cls");

	std::cout << iKor << std::endl;
	std::cout << iEng << std::endl;
	std::cout << iMath << std::endl;

	iTotal = iKor + iEng + iMath;

	fAvg = iTotal / 3.f;

	std::cout << "��� : " << static_cast<int>(fAvg) << "�Դϴ�" << std::endl;


	if (fAvg >= 90.f)
	{
		std::cout << "���ϵ帳�ϴ� A�����Դϴ�." << std::endl;
	}
	//����� 80���� ũ�ų� ���� ����� 90���� ������  //  80 ~ 89
	else if (fAvg >= 80.f && fAvg < 90.f)
	{
		std::cout << "���ϵ帳�ϴ� B�����Դϴ�." << std::endl;
	}
	else if (fAvg >= 70.f && fAvg < 80.f)
	{
		std::cout << "���ϵ帳�ϴ� C�����Դϴ�." << std::endl;
	}
	else
	{
		std::cout << "F�����Դϴ�." << std::endl;
	}


	//if �����̿��ؼ� ���ð����� ��������(�л����α׷�,�������� ��)

	return 0;
}