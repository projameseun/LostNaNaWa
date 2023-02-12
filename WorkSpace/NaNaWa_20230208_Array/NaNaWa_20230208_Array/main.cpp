#include <iostream>
#include <Windows.h>
#include <time.h>
#include <algorithm>

using namespace std;

/*
	배열:같은 자료형의 변수 여러개를 한번에 선언할수 있게 해주는 기능이다.
	배열은 메모리가 연속적으로 잡혀 있다.

	변수타입 배열명[개수];	//갯수는 상수만 가능하다.
	의 형태로 구성된다.

	배열을 쓰는이유
	연속적 메모리를 만들때 똑같은 데이터를 그룹을 묶어서 표현할때 배열 문법을 사용한다.

*/

bool compare(int a, int b)
{
	return a > b;
}

int main()
{


	int iStudent[100];
	//위처럼 만들게되면 학생100명을 저장할수 있는게 생성된 것이다.
	//각 요소에 접근하기 위해서 사용하는것이 인덱스이다.
	//인덱스는 0 ~개수 -1까지 이다.

	//배열 초기화
	int iNumber[10] = {};	//모두 0으로 초기화 한다
	//int iNumber[10] = { 0, };
	//int iNumber[10] = { 0,0,0,0,0,0,0,0,0,0 };

	int iArray[] = { 1,299,300,500 ,230};	//다섯개를 초기화 한것이다.

	int iNumber2[10] = { 1,2,3 }; 
	//위처럼 초기화를 하게 되면 0 ,1,2번 인덱스에 1,2,3값이 들어가게 되고 나머지는 0 으로 초기화 한다.

	iNumber2[0] = 20;
	iNumber2[5] = 10;

	size_t iSize = 0;

	std::cout << "iNumber2 : " << sizeof(iNumber2) << std::endl;
	
	iSize = sizeof(iNumber2) / sizeof(*iNumber);	//배열의갯수를 구한거다


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
	
	
	//문자열 배열 
	char data[6] = { 'H','A','P','P','Y'};	//문자열 끝은 NULL,0으로 표기한다. 이래야 컴파일러가 이배열에 저장된 정보는 문자열이라는것을 알수있다.
	char data2[6] = "Happy";
	
	char data3[25] = "안녕하세요";	//한글은 2바이트 영어는 1바이트


	

	std::cout << data << std::endl;
	std::cout << data2 << std::endl;
	std::cout << data3 << std::endl;

	system("cls");

	//로또 프로그램 
	//1~45사이의 숫자중 랜덤한 6개의 숫자를 가져온다 
	//값이 중복되면 안된다.
	//오름차순 내림차순 

	int iLotto[45] = {};

	//원하는값 넣는다
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

	//STL(Standard 라이브러리)

	//오름차순 내림차순을 정렬해주는거다
	/*std::sort(iLotto, iLotto + 6);*/
	std::sort(iLotto, iLotto + 45,compare);

	//내림차순 오름차순
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