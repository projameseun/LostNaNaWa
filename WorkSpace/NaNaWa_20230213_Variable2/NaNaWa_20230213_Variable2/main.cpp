#include <iostream>
#include "Calculate.h"
#include "Func.h"

	//수요일날 분활구현과 그것에 따른 변수들쓰임

/*
	변수의 종류 4가지 
	1.지역변수 (메모리)가 해당 코드블럭을 벗어났을때 해제 된다. //(쓰임)해당지역에서만 사용이 가능하다 
	
	2.전역변수 프로그램을 실행할때 (메모리)가 생성되고 종료될때 해제된다. //(쓰임)모든지역에서 사용이 가능
	
	3.static변수(정적변수) (메모리)는 전역변수랑 같다 / (쓰임) 지역변수랑 흡사하다 
	같은 지역에서만 사용이 가능하고 생성될때 메모리가 잡히고 프로그램이 끝날때 메모리가 해제 된다.
	외부파일에서 접근했을때 이름은 같지만 서로 다른변수이다 이말은 주소가 다르다는 것이다.

	4.외부변수(extern) 외부변수라고 부르고 전역으로 쓰이면서 다른파일에도 똑같은 공용으로 쓰는 변수이다 이말은 주소가 결국 같다는 말이다.


	ROM(Read-only Memory) = ReadOnly
	RAM(Random Accesss Memory) = 프로그램이 실행되는 동안 필요한 정보를 저장하는 컴퓨터 메모리 이다.
	RAM이란 저장된 데이터를 순차적인 아닌 임의의 순서로 액세스 할수 있는 데이터 저장소 이다.  //Read/Write가능
	

	★메모리영역★
	===========================================================================================
	stack영역
	data영역
	code영역(ROM)
	heap영역

*/




int data = 0;	//

void Func()
{
	int a = 0;

	 data += 1;
	 g_iNumber++;

	 g_StaticNum++;

	 static int g_Total = 0;

	 g_Total++;

	 std::cout << "g_Total :" << g_Total << std::endl;
}

void Func3()
{
	//스태틱변수
	static int g_Total = 0;

	g_Total++;

	std::cout << "g_Total :" << g_Total << std::endl;


	//지역변수
	int a = 0;

	a++;

	std::cout << a << std::endl;
}




int main()
{

	Func();

	Func2();
	
	std::cout << g_iNumber << std::endl;

	std::cout << "메인 스태틱변수 값: " << g_StaticNum << std::endl;
	
	Func3();
	Func3();
	Func3();
	Func3();
	Func3();

	
	MyFunc1();
	MyFunc2();
	MyFunc3();
	MyFunc4();
	MyFunc5();


	return 0;
}