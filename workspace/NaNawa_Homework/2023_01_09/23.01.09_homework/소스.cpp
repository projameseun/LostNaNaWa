#include <iostream>
#include <Windows.h>
#include <time.h>

//예제 1번 enum class
enum class Food
{
	pizza = 1,
	chicken,
	bagel,
	salad,
};

//예제 2번 enum class

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

	//1.if,else if,else 를 이용해서 선택게임을 만들어보세요 (직업,학생프로그램등 뭐든다)
	//조건:enumclass를 사용해서 만든다


	int iFood = 0;
	int iPrice = 0, iWeight = 0;

	std::cout << "오늘 저녁으로 뭐먹지?" << std::endl;
	std::cout << "1. 피자" << std::endl;
	std::cout << "2. 치킨" << std::endl;
	std::cout << "3. 베이글" << std::endl;
	std::cout << "4. 샐러드" << std::endl;
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
		std::cout << "피자를 선택하였습니다" << std::endl;
		std::cout << "가격=" << iPrice << std::endl;
		std::cout << "양=" << iWeight << std::endl;
	}

	else if (iFood == (int)Food::chicken)
	{
		std::cout << "치킨를 선택하였습니다" << std::endl;
		std::cout << "가격=" << iPrice << std::endl;
		std::cout << "양=" << iWeight << std::endl;
	}
	else if (iFood == (int)Food::bagel)
	{
		std::cout << "베이글을 선택하였습니다" << std::endl;
		std::cout << "가격=" << iPrice << std::endl;
		std::cout << "양=" << iWeight << std::endl;
	}
	else if (iFood == (int)Food::salad)
	{
		std::cout << "샐러드를 선택하였습니다" << std::endl;
		std::cout << "가격=" << iPrice << std::endl;
		std::cout << "양=" << iWeight << std::endl;
	}
	else
	{
		std::cout << "음식을 선택해주세요" << std::endl;
	}



	//2.switch 를 이용해서 만들어보세요  (직업,학생프로그램등 뭐든다)
	//조건 enumclass를 사용해서만든다 

	int iJob = 0;

	std::cout << "당신은 몇살입니까?" << std::endl;
	std::cout << "1. 0~13" << std::endl;
	std::cout << "2. 14~19" << std::endl;
	std::cout << "3. 20~" << std::endl;
	std::cin >> iJob;

	switch ((Job)iJob)
	{
	case Job::kids:
		std::cout << "어린이입니다" << std::endl;
		break;
	case Job::student:
		std::cout << "학생입니다" << std::endl;
		break;
	case Job::adult:
		std::cout << "성인입니다" << std::endl;
		break;
	default:
		std::cout << "확인되지 않습니다" << std::endl;
		break;
	}


	//3.rand()
	//rand함수를 이용해서 
	//최소 공격력 최대공격력의 사이값만 가져오게 만들어보세요 (500~1000)
	int iMin = 500;
	int iMax = 1000;

	int iRand = rand() % (iMax-iMin + 1) + iMin;
		std::cout << iRand << std::endl;

		
	//1000 - 500 =500  + 1   + 500  // 핵심 = 변수사용

	//4.rand()
	//rand()함수와 조건문을 사용해서 아이템 드랍확률 프로그램을 작성해보세요 
	float iDropRand = 0.f;



	//가위바위보게임
	// 컴퓨터에서 1~3을 무작위로 낸다. 
	// 내가 1~3 중 선택하여 낸다
	// 컴퓨터의 수와 나의 수를 비교하여 승부를 가린다.
	//1 = 주먹, 2= 가위, 3=보 가 된다.

	int iNum = 0;

	std::cout << "가위바위보를 시작합니다" << std::endl;
	std::cout << "가위=1 바위=2 보=3" << std::endl;
	std::cin >> iNum;


	int iRand2 = rand() % 3+1;
	std::cout << "컴퓨터가" << iRand2 << "를 냈습니다" << std::endl;

	if (iRand2 == iNum)
	{
		std::cout << "비겼습니다" << std::endl;

	}
	else if (iRand2 ==(int)Game::Paper && iNum==1) // 이겼다. 플레이어가 가위를 냈을 때 , 컴퓨터는 보 (3)를 낸다. 
	{
		std::cout << "이겼습니다" << std::endl;

	}
	else if (iRand2 == (int)Game::Scisscors  && iNum==1)
	{
		std::cout << "졌습니다" << std::endl;

	}
	else if (iRand2 == 3 && iNum == 2)
	{
		std::cout << "졌습니다" << std::endl;
	}
	else if (iRand2 == 1 && iNum == 2)
	{
		std::cout << "  이겼습니다" << std::endl;
	}
	else  if (iRand2 == 2 && iNum == 3)
	{
		std::cout << "이겼습니다" << std::endl;
			}

	else if (iRand2 == 1 && iNum == 3)
	{
		std::cout << "졌습니다" << std::endl;

	}



	return  0;
}




