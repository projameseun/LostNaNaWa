#include <iostream>
#include <Windows.h>
#include <time.h>

//���� 1�� enum class
enum class Food
{
	pizza = 1,
	chicken,
	bagel,
	salad,
};

//���� 2�� enum class

enum class Job
{
	kids = 1,
	student,
	adult,
};

enum class Game
{
	Scisscors = 1,
	Rock,
	Paper,
};

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	//1.if,else if,else �� �̿��ؼ� ���ð����� �������� (����,�л����α׷��� �����)
	//����:enumclass�� ����ؼ� �����


	int iFood = 0;
	int iPrice = 0, iWeight = 0;

	std::cout << "���� �������� ������?" << std::endl;
	std::cout << "1. ����" << std::endl;
	std::cout << "2. ġŲ" << std::endl;
	std::cout << "3. ���̱�" << std::endl;
	std::cout << "4. ������" << std::endl;
	std::cin >> iFood;


	switch ((Food)iFood)
{
	case Food::pizza:
	iPrice = 27000;
	iWeight = 2;
	break;
	case Food::chicken:
	iPrice = 22000;
	iWeight = 2;
	break;
	case Food::bagel:
	iPrice = 4000;
	iWeight = 1;
	break;
case Food::salad:
	iPrice = 5000;
	iWeight = 1;
	break;
default:

	break;
}
	if (iFood == (int)Food::pizza)
	{
		std::cout << "���ڸ� �����Ͽ����ϴ�" << std::endl;
		std::cout << "����=" << iPrice << std::endl;
		std::cout << "��=" << iWeight << std::endl;
	}

	else if (iFood == (int)Food::chicken)
	{
		std::cout << "ġŲ�� �����Ͽ����ϴ�" << std::endl;
		std::cout << "����=" << iPrice << std::endl;
		std::cout << "��=" << iWeight << std::endl;
	}
	else if (iFood == (int)Food::bagel)
	{
		std::cout << "���̱��� �����Ͽ����ϴ�" << std::endl;
		std::cout << "����=" << iPrice << std::endl;
		std::cout << "��=" << iWeight << std::endl;
	}
	else if (iFood == (int)Food::salad)
	{
		std::cout << "�����带 �����Ͽ����ϴ�" << std::endl;
		std::cout << "����=" << iPrice << std::endl;
		std::cout << "��=" << iWeight << std::endl;
	}
	else
	{
		std::cout << "������ �������ּ���" << std::endl;
	}



	//2.switch �� �̿��ؼ� ��������  (����,�л����α׷��� �����)
	//���� enumclass�� ����ؼ������ 

	int iJob = 0;

	std::cout << "����� ����Դϱ�?" << std::endl;
	std::cout << "1. 0~13" << std::endl;
	std::cout << "2. 14~19" << std::endl;
	std::cout << "3. 20~" << std::endl;
	std::cin >> iJob;

	switch ((Job)iJob)
	{
	case Job::kids:
		std::cout << "����Դϴ�" << std::endl;
		break;
	case Job::student:
		std::cout << "�л��Դϴ�" << std::endl;
		break;
	case Job::adult:
		std::cout << "�����Դϴ�" << std::endl;
		break;
	default:
		std::cout << "Ȯ�ε��� �ʽ��ϴ�" << std::endl;
		break;
	}


	//3.rand()
	//rand�Լ��� �̿��ؼ� 
	//�ּ� ���ݷ� �ִ���ݷ��� ���̰��� �������� �������� (500~1000)
	int iMin = 500;
	int iMax = 1000;

	int iRand = rand() % (iMax-iMin + 1) + iMin;
		std::cout << iRand << std::endl;

		
	//1000 - 500 =500  + 1   + 500  // �ٽ� = �������

	//4.rand()
	//rand()�Լ��� ���ǹ��� ����ؼ� ������ ���Ȯ�� ���α׷��� �ۼ��غ����� 
	float iDropRand = 0.f;



	//��������������
	// ��ǻ�Ϳ��� 1~3�� �������� ����. 
	// ���� 1~3 �� �����Ͽ� ����
	// ��ǻ���� ���� ���� ���� ���Ͽ� �ºθ� ������.
	//1 = �ָ�, 2= ����, 3=�� �� �ȴ�.

	int iNum = 0;

	std::cout << "������������ �����մϴ�" << std::endl;
	std::cout << "����=1 ����=2 ��=3" << std::endl;
	std::cin >> iNum;


	int iRand2 = rand() % 3+1;
	std::cout << "��ǻ�Ͱ�" << iRand2 << "�� �½��ϴ�" << std::endl;

	if (iRand2 == iNum)
	{
		std::cout << "�����ϴ�" << std::endl;

	}
	else if (iRand2 ==(int)Game::Paper && iNum==1) // �̰��. �÷��̾ ������ ���� �� , ��ǻ�ʹ� �� (3)�� ����. 
	{
		std::cout << "�̰���ϴ�" << std::endl;

	}
	else if (iRand2 == (int)Game::Scisscors  && iNum==1)
	{
		std::cout << "�����ϴ�" << std::endl;

	}
	else if (iRand2 == 3 && iNum == 2)
	{
		std::cout << "�����ϴ�" << std::endl;
	}
	else if (iRand2 == 1 && iNum == 2)
	{
		std::cout << "  �̰���ϴ�" << std::endl;
	}
	else  if (iRand2 == 2 && iNum == 3)
	{
		std::cout << "�̰���ϴ�" << std::endl;
			}

	else if (iRand2 == 1 && iNum == 3)
	{
		std::cout << "�����ϴ�" << std::endl;

	}



	return  0;
}




