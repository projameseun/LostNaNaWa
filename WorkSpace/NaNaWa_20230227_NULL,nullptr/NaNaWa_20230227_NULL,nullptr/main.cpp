#include <iostream>


void Func(int a)
{
	std::cout << "int 호출" << std::endl;
}

void Func(int* a)
{
	std::cout << "int* 호출" << std::endl;
}


int main()
{
	//NULL,nullptr

	int iNum = 0;

	int a = NULL;
	
	//c++11에서 부터 생겼다.

	//NULL,nullptr 차이점 
	//NULL은 #define 정의 되어 있는 상수 0이다.

	//nullptr은 포인터를 표현하는 값중에 NULL을 표현하는 값이라고 할수 있다.
	Func(0);
	Func(NULL);
	Func((int*)0);
	Func(nullptr);

	//NULL은 모호하다.
	std::cout << "NULL,nullptr 비교" << std::endl;

	int* ptr1 = NULL;
	int* ptr2 = nullptr;

	//int iTest = nullptr;

	if (ptr1 == NULL)
	{
		std::cout << "NULL == NULL" << std::endl;
	}
	if (ptr2 == NULL)
	{
		std::cout << "nullptr == NULL" << std::endl;
	}
	if (ptr1 == nullptr)
	{
		std::cout << "NULL == nullptr" << std::endl;
	}
	if (ptr2 == nullptr)
	{
		std::cout << "nullptr == nullptr" << std::endl;
	}
	if (ptr1 == ptr2)
	{
		std::cout << "NULL == nullptr" << std::endl;
	}

	//위에 출력을 하게되면 모두출력이 되는데
	//NULL은 0이기도 하지만 nullptr과 비교했을때 true가 나온다는 사실을 알수 있고
	//NULL은 상황에 따라 모호하게 변동된다.
	//어떨때는 int타입이랑 비교를 하고 또 어떨때는 포인터0으로 null을 가리키는 모호한 상황이 나온다.
	//그래서 포인터를 사용할때 초기화를 할때는 NULL이 아닌 nulltpr을 사용해야 된다.
	//그리고 nulllptr은 사용하게 되면 사용자가 이거는 포인터를 초기화 한것이라고 바로 알수 있어서 가독성도 좋아진다.
	





	//포인터:주소를 저장하는 변수 
	//32bit 환경에서는 4byte
	//64bite 환경에서는 8byte 

	//포인터의 주소단위 byte다 

	
	//역참조란 
	//포인터변수가 다른변수의 메모리주소를 저장하고 있을때 해당 주소에 접근하여 값을 얻어오거나 변경하는것을 말한다.

	//포인터변수마다 각각의 자료형이름을 가지는 이유는 변수가 시작되는 주소값에서 
	//얼마만큼의 크기를 읽어들이지 결정한다.

	int* ptr = nullptr;

	std::cout << sizeof(ptr) << std::endl;

	float fNum = 3.0f;

	short* psNum = nullptr;
	
	//std::cout << sizeof(pfNum) << std::endl;
	//std::cout << sizeof(psNum) << std::endl;

	ptr = &iNum;

	*ptr = 100;


	int* pNum = (int*)&fNum;

	iNum = *pNum;

	std::cout << iNum << std::endl;
	std::cout << (*pNum) << std::endl;
	
	//위에 값은 엄청큰숫자가 나온다 이유는 fNum은 실수 이다 실수표현은 애초에 정수표현과는 완전 다르다.
	//그래서 실수표현에 방식을 정수로 표현했을때 값이 나온것 이다.
	//예전에 음수,양수 표현이 다른것처럼
	


	return 0;
}