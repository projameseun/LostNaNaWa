#include <iostream>

int main()
{/*
 ���ǹ� : if , switch
 ���ǹ��̶�??
 � Ư�� ���ǽ��� �ο��ϰ� �ش� ������ �����ϸ� ������ ������ �����ϴ� ����
 if��
 if(���ǽ�)
 {

 } (�ڵ��)

 ���ǽ��� true�� ��� �ڵ�� ������ �ڵ尡 �۵��� �ǰ�, false�Ǹ� ���õȴ�.


 */
 /*
	 if (true)
	   {
		 std::cout << "�����Դϴ�" << std::endl;
	 }

	 if (false)
	 {
		 std::cout << "�����Դϴ�" << std::endl;
	 }
	 */



	int iNumber = 50;
	int iNumber2 = 100;

	 if (iNumber == 50)
	{
		std::cout << "iNumber=" << iNumber << std::endl;
	}
	

	if (iNumber == 100)
	{
		std::cout << "iNumber=" << iNumber << std::endl;

	}

	else
	{
		std::cout << "iNumber=" << iNumber2 << std::endl;

	}

	// else : if���� ������ ����� �� �ִ�.
	// if�� 1���� 1���� else���� �� �� �ֵ�.
	// else�� ���������� ����� �Ұ����ϴ�.

	
	//else if : if �� �Ʒ� �� �� �ִ�. else �� �ٸ��� �������� ���� �� �ִ�.
	//else if�� ���������δ� ����� �Ұ���


	//���� ��� �ν�Ʈ��ũ ��ź

	int ibaltanHP = 10000000; //õ��

	if (ibaltanHP == 10000000) //��ź HP Ǯ��
	{
		std::cout << "ù��° �̺�Ʈ �߻�"<< std::endl;
		//ù��° �̺�Ʈ�� �߻���Ų��.
	}

	else if (ibaltanHP < 8000000) 
	{
		std::cout << "�ι�° �̺�Ʈ �߻�" << std::endl;
		//�ι�° �̺�Ʈ�� �߻���Ų��.
	}

	else if (ibaltanHP < 5000000)
	{
		std::cout << "����° �̺�Ʈ �߻�" << std::endl;
		//����° �̺�Ʈ�� �߻���Ų��.
	}

	else if (ibaltanHP < 3000000)
	{
		std::cout << "�׹�° �̺�Ʈ �߻�" << std::endl;
		//�׹�° �̺�Ʈ�� �߻���Ų��.
	}



	int ibaltanHP2 = 7000000; //õ��

	if (ibaltanHP2 == 10000000) //��ź HP Ǯ��
	{
		std::cout << "ù��° �̺�Ʈ �߻�" << std::endl;
		//ù��° �̺�Ʈ�� �߻���Ų��.
	}

	else if (ibaltanHP2 < 8000000)
	{
		std::cout << "�ι�° �̺�Ʈ �߻�" << std::endl;
		//�ι�° �̺�Ʈ�� �߻���Ų��.
	}

	else if (ibaltanHP2 < 5000000)
	{
		std::cout << "����° �̺�Ʈ �߻�" << std::endl;
		//����° �̺�Ʈ�� �߻���Ų��.
	}

	else if (ibaltanHP2 < 3000000)
	{
		std::cout << "�׹�° �̺�Ʈ �߻�" << std::endl;
		//�׹�° �̺�Ʈ�� �߻���Ų��.
	}


	//�л����α׷� ���

	int ikor = 0;
	int ieng = 0;
	int imath = 0;
	int itotal = 0;

	//�Ҽ��� �ڸ��� ���� float�� ��� .f�� �Ҽ��� 0�� ������ �� �ִ�.

	float favg = 0.1f;

	//ȭ���� �ƿ� ������ ����� �Լ� windows.h ������ �ʿ��ϴ�

	/*system("cls");

		std::cout << "��������:";
	std::cin >> ikor;

	system("cls");
		std::cout << "��������:";
	std::cin >> ieng;

	system("cls");
		std::cout << "��������:";
	std::cin >> imath;

	system("cls");
		std::cout << ikor << std::endl;    
		std::cout << ieng << std::endl;
		std::cout << imath << std::endl;

		itotal = ikor + ieng + imath;

		favg = itotal / 3.f;

		std::cout << "��� :" << static_cast<int>(favg) << "�Դϴ�" << std::endl;


		if (favg >= 90.f)
		{
			std::cout << "A���� �Դϴ�" << std::endl;
		}

		else if (favg >= 80.f && favg<90.1)
		{
			std::cout << "B���� �Դϴ�" << std::endl;
		}

		else if (favg >= 70.f && favg < 80.1)
		{
			std::cout << "C���� �Դϴ�" << std::endl;
		}

		else (favg >= 60.f && favg < 70.1);   // ���� �߸鼭 ;���� ��������.....??         
		{
			std::cout << "D���� �Դϴ�" << std::endl;
		}
		*/



		int ilevel = 0;

		system("cls");

		std::cout << "����� ������ ���Դϱ�?";
		std::cin >> ilevel;

		if (ilevel >= 90)
		{
			std::cout << "���� 10% �Դϴ�" << std::endl;
		}

		else if (ilevel >= 80 && ilevel < 89)
		{
			std::cout << "���� 20% �Դϴ�" << std::endl;
		}

		else if (ilevel >= 70 && ilevel < 79)
		{
			std::cout << "���� 30% �Դϴ�" << std::endl;
		}

		else if (ilevel >= 60 && ilevel < 69)  // else ���� ���� �߸鼭 ;���� ��������.....??         
		{
			std::cout << "���� 40% �Դϴ�" << std::endl;
		}


		//��������������
		//��ǻ�ʹ� �ٺ��� ������ ���ϴ�


		int igame = 0;


		std::cout << "��ǻ�ʹ� ������ ���ϴ�. ������ ���ڽ��ϱ�? \n ����=1, ����=2, ��=3\n";
		std::cin >> igame;

		if (igame == 1)
		{
			std::cout << "���º�" << std::endl;
		}
		else if (igame == 2)
		{
			std::cout << "�¸�" << std::endl;
		}
		else if (igame == 3)
		{
			std::cout << "�й�" << std::endl;
		}


	return 0;

}
