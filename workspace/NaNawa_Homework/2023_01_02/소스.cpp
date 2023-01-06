#include <iostream>

int main()
{/*
 조건문 : if , switch
 조건문이란??
 어떤 특정 조건식을 부여하고 해당 조건을 만족하면 지정한 문장을 수행하는 문법
 if문
 if(조건식)
 {

 } (코드블럭)

 조건식이 true일 경우 코드블럭 사이의 코드가 작동이 되고, false되면 무시된다.


 */
 /*
	 if (true)
	   {
		 std::cout << "진실입니다" << std::endl;
	 }

	 if (false)
	 {
		 std::cout << "거짓입니다" << std::endl;
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

	// else : if문과 쌍으로 사용할 수 있다.
	// if문 1개당 1개의 else문이 올 수 있따.
	// else는 독립적으로 사용이 불가능하다.

	
	//else if : if 문 아래 올 수 있다. else 와 다르게 여러개를 만들 수 있다.
	//else if는 독립적으로는 사용이 불가능


	//예를 들어 로스트아크 발탄

	int ibaltanHP = 10000000; //천만

	if (ibaltanHP == 10000000) //발탄 HP 풀피
	{
		std::cout << "첫번째 이벤트 발생"<< std::endl;
		//첫번째 이벤트를 발생시킨다.
	}

	else if (ibaltanHP < 8000000) 
	{
		std::cout << "두번째 이벤트 발생" << std::endl;
		//두번째 이벤트를 발생시킨다.
	}

	else if (ibaltanHP < 5000000)
	{
		std::cout << "세번째 이벤트 발생" << std::endl;
		//세번째 이벤트를 발생시킨다.
	}

	else if (ibaltanHP < 3000000)
	{
		std::cout << "네번째 이벤트 발생" << std::endl;
		//네번째 이벤트를 발생시킨다.
	}



	int ibaltanHP2 = 7000000; //천만

	if (ibaltanHP2 == 10000000) //발탄 HP 풀피
	{
		std::cout << "첫번째 이벤트 발생" << std::endl;
		//첫번째 이벤트를 발생시킨다.
	}

	else if (ibaltanHP2 < 8000000)
	{
		std::cout << "두번째 이벤트 발생" << std::endl;
		//두번째 이벤트를 발생시킨다.
	}

	else if (ibaltanHP2 < 5000000)
	{
		std::cout << "세번째 이벤트 발생" << std::endl;
		//세번째 이벤트를 발생시킨다.
	}

	else if (ibaltanHP2 < 3000000)
	{
		std::cout << "네번째 이벤트 발생" << std::endl;
		//네번째 이벤트를 발생시킨다.
	}


	//학생프로그램 평균

	int ikor = 0;
	int ieng = 0;
	int imath = 0;
	int itotal = 0;

	//소수점 자리가 없는 float의 경우 .f로 소수점 0을 생략할 수 있다.

	float favg = 0.1f;

	//화면을 아예 깨끗이 지우는 함수 windows.h 파일이 필요하다

	/*system("cls");

		std::cout << "국어점수:";
	std::cin >> ikor;

	system("cls");
		std::cout << "영어점수:";
	std::cin >> ieng;

	system("cls");
		std::cout << "수학점수:";
	std::cin >> imath;

	system("cls");
		std::cout << ikor << std::endl;    
		std::cout << ieng << std::endl;
		std::cout << imath << std::endl;

		itotal = ikor + ieng + imath;

		favg = itotal / 3.f;

		std::cout << "평균 :" << static_cast<int>(favg) << "입니다" << std::endl;


		if (favg >= 90.f)
		{
			std::cout << "A학점 입니다" << std::endl;
		}

		else if (favg >= 80.f && favg<90.1)
		{
			std::cout << "B학점 입니다" << std::endl;
		}

		else if (favg >= 70.f && favg < 80.1)
		{
			std::cout << "C학점 입니다" << std::endl;
		}

		else (favg >= 60.f && favg < 70.1);   // 오류 뜨면서 ;여기 넣으라구함.....??         
		{
			std::cout << "D학점 입니다" << std::endl;
		}
		*/



		int ilevel = 0;

		system("cls");

		std::cout << "당신의 레벨은 몇입니까?";
		std::cin >> ilevel;

		if (ilevel >= 90)
		{
			std::cout << "상위 10% 입니다" << std::endl;
		}

		else if (ilevel >= 80 && ilevel < 89)
		{
			std::cout << "상위 20% 입니다" << std::endl;
		}

		else if (ilevel >= 70 && ilevel < 79)
		{
			std::cout << "상위 30% 입니다" << std::endl;
		}

		else if (ilevel >= 60 && ilevel < 69)  // else 쓰면 오류 뜨면서 ;여기 넣으라구함.....??         
		{
			std::cout << "상위 40% 입니다" << std::endl;
		}


		//가위바위보게임
		//컴퓨터는 바보라 가위만 냅니다


		int igame = 0;


		std::cout << "컴퓨터는 가위만 냅니다. 무엇을 내겠습니까? \n 가위=1, 바위=2, 보=3\n";
		std::cin >> igame;

		if (igame == 1)
		{
			std::cout << "무승부" << std::endl;
		}
		else if (igame == 2)
		{
			std::cout << "승리" << std::endl;
		}
		else if (igame == 3)
		{
			std::cout << "패배" << std::endl;
		}


	return 0;

}
