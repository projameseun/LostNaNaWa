//#include <iostream>
//#include <Windows.h>
//
///*
//switch(����)
//{
//case ��(���):
//�ڵ�
//break;	break�� ������ switch���� ������.
//case ��(���):
//�ڵ�
//break;	break�� ������ switch���� ������.
//...
//...
//...
//
//default:	���� caseüũ�� �� �Ѿ���� �Ǹ� ���´�. else�� ��������
//break;
//
//
//}
//
//if�� swtich���� �ſ� ����ϴ�.
//��� ����ص� �����ϴ�.
//���� ���� �������� ����ϸ� �ӵ��� ���̰� �ִµ� ū ���̴� ����.
//���� �˻簡 2~3�϶��� if�� ������ , ���ǰ˻簡 ������쿨�� switch�� ���� ������
//�׷��� �� �����ð��� ���̴� 0.4�� ���� �ۿ� �ȵȴ�... ���ɿ� ������ ������ �ʴ´�.
//
//
//*/
//
//namespace TYPEA
//{
//	enum ECar
//	{
//		BENZ = 1,
//		AUDI,
//		HYUNDAE,
//		SAMSUNG = 100,
//		BMW,
//		PORSCHE,
//	};
//}
//
//namespace TYPEB
//{
//	enum KCar
//	{
//		KIA,
//		HYUNDAE,
//		SAMSUNG = 100,
//
//	};
//}
//
////enum class (c++11)
//
//enum class JOB
//{
//	GUNSLINGER =1,
//	BARD,
//	BATTLEMASTER,
//	BERSERKER,
//};
//
//enum class JOB2
//{
//	GUNSLINGER = 1,
//	BARD,
//	BATTLEMASTER,
//	BERSERKER,
//};
//
//
//
//int main()
//{
//	int iNumber = 3;
//
//	//switch (iNumber)
//	//{
//	//case BENZ:		//case�� ���� ������ ����� ���´�. ������ ���ü� ����.
//	//	std::cout << "1���� �Դϴ�" << std::endl;
//	//	break;		
//	//case AUDI:
//	//	std::cout << "2���� �Դϴ�" << std::endl;
////	break;
////case HYUNDAE:
////	std::cout << "3���� �Դϴ�" << std::endl;
////case BMW:
////	std::cout << "4���� �Դϴ�" << std::endl;
////	break;
////default:
////	std::cout << "�׿ܹ� �Դϴ�" << std::endl;
////	break;
////}
//
//
///*
//enum(������)
//���ڿ� �̸��� �ο��ϴ� ����̴�.
//�������� ������ ���ڿ� �̸��� �ٿ��ٶ� ����Ҽ� �ִ�.
//enum ���Ÿ�
//{
//
//};
//enum�� ����
//���ڸ� ���ڷ� ǥ���Ҽ� �ִ�. ����Ʈ���� �����Ǹ� ������� �ʰ� dns�� ����ؼ� ���� �ſ� ����ϴ�.
//
//enum�� ������
//������ �̸�����(namespace)�� ������ ���� �ʴٴ°�
//enum�� ����ϴ� ���� �ߺ��Ǵ°� ������ �ȴ�. ���� ����ڰ� ����,���̿� Ÿ���� �ٿ��� �̸��� �����Ҽ� ������ �װ��� ����ڰ� ���� �����̸��� �� �����ؼ� �����Ѱ��̴�.
//*/
//
//int iCar = 0;
//
//iCar = TYPEA::AUDI;
//
//iCar = TYPEB::HYUNDAE;
//
//switch (iCar)
//{
//case TYPEA::BENZ:		//case�� ���� ������ ����� ���´�. ������ ���ü� ����.
//	std::cout << "������ �����߽��ϴ�" << std::endl;
//	break;
//case TYPEA::AUDI:
//	std::cout << "�ƿ�� �����߽��ϴ�" << std::endl;
//	break;
//case TYPEA::HYUNDAE:
//	std::cout << "���븦 �����߽��ϴ�" << std::endl;
//case TYPEA::BMW:
//	std::cout << "BMW�� �����߽��ϴ�" << std::endl;
//	break;
//default:
//	std::cout << "�׿ܹ� �Դϴ�" << std::endl;
//	break;
//}
//
//system("cls");
//
////�ν�Ʈ��ũ ��������
//int iJob = 0;
//int iAttack = 0, iDeffence = 0, iHP = 0, iMP = 0;
//
//std::cout << "<=======������ �������ּ��� ======>" << std::endl;
//std::cout << "1.�ǽ�����" << std::endl;
//std::cout << "2.�ٵ�" << std::endl;
//std::cout << "3.��Ʋ������" << std::endl;
//std::cout << "4.����Ŀ" << std::endl;
//std::cin >> iJob;
//
////CTRL + ENTER
//
//
//switch ((JOB)iJob)
//{
//case JOB::GUNSLINGER:
//	iAttack = 70;
//	iDeffence = 50;
//	iHP = 500;
//	iMP = 100;
//	break;
//case JOB::BARD:
//	iAttack = 30;
//	iDeffence = 10;
//	iHP = 700;
//	iMP = 500;
//	break;
//case JOB::BATTLEMASTER:
//	iAttack = 100;
//	iDeffence = 20;
//	iHP = 1000;
//	iMP = 10;
//	break;
//case JOB::BERSERKER:
//	iAttack = 1000;
//	iDeffence = 500;
//	iHP = 2000;
//	iMP = 1;
//	break;
//default:
//	
//	break;
//}
//
//	if (iJob == (int)JOB::GUNSLINGER)
//	{
//		std::cout << "�ǽ����� ���谡�� �氩���ϴ�" << std::endl;
//		std::cout << "���ݷ� : " << iAttack << std::endl;
//		std::cout << "���� : " << iDeffence << std::endl;
//		std::cout << "ü�� : " << iHP << std::endl;
//		std::cout << "���� : " << iMP << std::endl;
//	}
//	else if (iJob == (int)JOB::BARD)
//	{
//		std::cout << "�ٵ� ���谡�� �氩���ϴ�" << std::endl;
//		std::cout << "���ݷ� : " << iAttack << std::endl;
//		std::cout << "���� : " << iDeffence << std::endl;
//		std::cout << "ü�� : " << iHP << std::endl;
//		std::cout << "���� : " << iMP << std::endl;
//	}
//	else if (iJob == (int)JOB::BATTLEMASTER)
//	{
//		std::cout << "��Ʋ������ ���谡�� �氩���ϴ�" << std::endl;
//		std::cout << "���ݷ� : " << iAttack << std::endl;
//		std::cout << "���� : " << iDeffence << std::endl;
//		std::cout << "ü�� : " << iHP << std::endl;
//		std::cout << "���� : " << iMP << std::endl;
//	}
//	else if(iJob == (int)JOB::BERSERKER)
//	{
//		std::cout << "����Ŀ ���谡�� �氩���ϴ�" << std::endl;
//		std::cout << "���ݷ� : " << iAttack << std::endl;
//		std::cout << "���� : " << iDeffence << std::endl;
//		std::cout << "ü�� : " << iHP << std::endl;
//		std::cout << "���� : " << iMP << std::endl;
//	}
//	else
//	{
//		std::cout << "���谡�� ������ �������ּ��� �̤�" << std::endl;
//	}
//
//	
//
//	return 0;
//}