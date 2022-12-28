#include <iostream>
#include <Windows.h>

int main()
{
	/*
	
	조건문 : if , switch
	조건문이란??
	어떤 특정 조건식을 부여하고 해당 조건을 만족하면 지정한 문장을 수행하는 문법
	if문
	if(조건식)
	{

	}(코드블럭)

	조건식이 true일 경우 코드블럭 사이의 코드가 작동이 되고 false되면 무시된다.


	*/

	if(true)
	{
		std::cout << "진실 입니다" << std::endl;
	}

	if (false)
	{
		std::cout << "거짓 입니다" << std::endl;
	}

	int iNumber = 100;

	//if (iNumber == 100)
	//{
	//	std::cout << "iNumber = " << iNumber << std::endl;
	//}
	
	/*
	else: if문과 쌍으로 사용할수 있다.
	if문 1개당 1개의 else문이 올수 있다.
	else는 독립적으로 사용이 불가능하다.
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
	else if:if문 아래올수 있다. else와 다르게 여러개를 만들수 있다.
	else if는 독립적으로 사용이 불가능 

	*/

	//예를들어 로스트아크 발탄 
	//int iBaltanHP = 1000;	//천만

	//if (iBaltanHP == 100000000)		//발탄 HP 풀일때
	//{
	//	//첫번째 이벤트를 발생시킨다.
	//	std::cout << "1번째 이벤트발생" << std::endl;
	//}
	//else if (iBaltanHP < 800000 && iBaltanHP > 50000)
	//{
	//	//두번째 이벤트를 발생시킨다.
	//	std::cout << "2번째 이벤트발생" << std::endl;
	//}
	//else if (iBaltanHP < 50000 && iBaltanHP > 12999)
	//{
	//	//세번째 이벤트를 발생시킨다.
	//	std::cout << "3번째 이벤트발생" << std::endl;
	//}
	//else if (iBaltanHP < 12999 && iBaltanHP > 1200)
	//{
	//	//네번째 이벤트를 발생시킨다.
	//	std::cout << "4번째 이벤트발생" << std::endl;
	//}
	//else
	//{
	//	//마지막 이벤트를 발생시킨다.
	//	std::cout << "5번째 이벤트발생" << std::endl;
	//}

	//학생프로그램 평균
	int iKor = 0;
	int iEng = 0;
	int iMath = 0;
	int iTotal = 0;

	//소수점 자리가 없는 float일경우에는 .f로 수소점 0을 생략할수 있다 ex) 1.0f == 1.f;
	float fAvg = 0.f;	
	//평균(Average)
	// 화면을 아에 깨끗이 지우는 함수 Winodws.h 파일이 필요하다
	system("cls");
	
	std::cout << "국어점수 : ";
	std::cin >> iKor;
	system("cls");
	std::cout << "영어점수 : ";
	std::cin >> iEng;
	system("cls");
	std::cout << "수학점수 : ";
	std::cin >> iMath;
	system("cls");

	std::cout << iKor << std::endl;
	std::cout << iEng << std::endl;
	std::cout << iMath << std::endl;

	iTotal = iKor + iEng + iMath;

	fAvg = iTotal / 3.f;

	std::cout << "평균 : " << static_cast<int>(fAvg) << "입니다" << std::endl;


	if (fAvg >= 90.f)
	{
		std::cout << "축하드립니다 A학점입니다." << std::endl;
	}
	//평균이 80보다 크거나 같고 평균이 90보다 작을때  //  80 ~ 89
	else if (fAvg >= 80.f && fAvg < 90.f)
	{
		std::cout << "축하드립니다 B학점입니다." << std::endl;
	}
	else if (fAvg >= 70.f && fAvg < 80.f)
	{
		std::cout << "축하드립니다 C학점입니다." << std::endl;
	}
	else
	{
		std::cout << "F학점입니다." << std::endl;
	}


	//if 문을이용해서 선택게임을 만들어보세요(학생프로그램,게임직업 등)

	return 0;
}