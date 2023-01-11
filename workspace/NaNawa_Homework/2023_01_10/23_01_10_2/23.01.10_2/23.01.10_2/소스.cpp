#include <iostream>
#include <Windows.h>
#include <time.h>



int main()

{

	//난수 (무작위의 수)
	//컴퓨터는 랜덤이라는 수를 만들 수 없다.
	//	랜덤이란 무작위의 수를 나오게 하는건데 이 무작위의 수를 무의식적으로 선택할 수 없기 때문이다
	//	컴퓨터는 무조건 정해진 입력에 따라 값을 낼 뿐이다.
	//	여러 계산을 통해서 사람이 볼때는 마치 임의의 값인 것처럼 보이게 하는거다


	//rand()
	//무작위 랜덤테이블이란 것이 존재하고 이를 리턴하는 것이다.
	//rand() 함수는 내부에 rand_max #define으로 저의 되어 있고 이 숫자는 16진수로 되어 있는데 10진수로 바꾸면 32,767로 되어있다.
	//결국 rand()함수가 표현할 수 잇는 범위는 0~32767값이 나오게 된다.


	std::cout << "1 rand : " << rand() << std::endl;
	std::cout << "2 rand : " << rand() << std::endl;
	std::cout << "3 rand : " << rand() << std::endl;
	std::cout << "4 rand : " << rand() << std::endl;

	//rand() 함수만으로는 랜덤을 표현할 수 없기 때문에 나오게 된게 srand()함수이다.
	//srand(seed값)




	return 0;

}