#include <iostream>


namespace _NANAWA //범위지정연산자
{
	int iHP = 100;
	int iMP = 50;
	
	void Attack()
	{
		std::cout << "냐냐와가 힐바드를 공격합니다" << std::endl;
	}
	
}


int main()
{


/*
	1. namespace를 하나 만들어서 출력해보기

	2. int inum = 0;
	100을 출력해보세요.


	3.int iNum2 = 0;
	1500을 입력받아 출력해보세요.
*/

	
	std::cout << "안녕하세요. 냐냐와입니다"<< std::endl;

	int iHP = 100;

	_NANAWA::iHP = 1000;
	
	std::cout << iHP << std::endl;
	std::cout << _NANAWA::iHP << std::endl;

	int iNumber = 1;

	std::cout << "1을 입력해주세요" << std::endl;
	std::cin >> iNumber; //1을 입력했을 때 1500이 나오게 하고 싶은데 아무거나 쳐도 나옴. 
	std::cout << "1500" << std::endl;
	
	int iMP = 10; // 그렇다면 이 정의의 의미가 무엇인가? ㅠㅠ 

	std::cout << "냐냐와바보 라고 입력해보세요" << std::endl;
	std::cin >> iMP; // cin으로 입력창을 만드는거 같은데.. 꼭 i(정수)를 표현하여야하는가?,,
	_NANAWA::Attack();

	//std::cout << "냐냐와님이 힐바드님을 공격하였습니다" << std::endl;



	return 0;


}
