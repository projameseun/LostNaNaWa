#include <iostream>

int main()
{
	//연산자
	//+,-,*,/,%(모듈러스)

	std::cout << "10 + 5 = " << (10 + 5) << std::endl;
	std::cout << "10 - 5 = " << (10 - 5) << std::endl;
	std::cout << "10 * 5 = " << (10 * 5) << std::endl;
	std::cout << "10 / 5 = " << (10 / 5) << std::endl;
	std::cout << "10 % 5 = " << (10 % 5) << std::endl;

	//모듈러스연산자는 A를 B로 나누었을때 몫을 제외한 나머지를 구해준다.
	//10 % 5 = 0 이 되는 것이다.
	//모듈러스 연산자를 이용하면 2로 나누었을때 나머지가 0이되면 짝수이다. 짝수를 뺀 나머지는 홀수이다.

	//연산자 축약형
	//+= , -=등 모든 연산자들은 축약해서 사용이 가능하다.

	int a = 0;
	int b = 0;

	a += 1; // a = a +1;
	b -= 1; // b = b -1;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	//증감 연산자
	//++,--

	//int iNumber = 0;

	//iNumber = iNumber++;
	//std::cout << "iNumber++ = " << iNumber << std::endl;
	//iNumber = iNumber--;
	//std::cout << "iNumber-- = " << iNumber << std::endl;

	//전위,후위

	int data = 0;
	data++; //후위
	++data; //전위

	int iNumber = 10;
	int iNumber2 = 30;
	int iNumber3 = 0;
	int iNumber4 = 0;

	iNumber3 = ++iNumber;
	iNumber4 = --iNumber2;

	std::cout << "iNumber3 = " << iNumber3 << std::endl;
	std::cout << "iNumber4 = " << iNumber4 << std::endl;

	//후위연산자는 말그대로 값을먼저 넣고 더한다는 의미이다.
	//증감 연산자는 단독으로 사용할때는 큰차가 없지만 변수를 넣었을때는 얘기가 다르다.
	//연산자 우선순위에 의해서 대입연산자가 먼저 일어난다.
	//그래서 후위 와 전위를 변수에 넣었을때는 분명한 차이가 있다.

	//관계연산자 
	//< , > , <= , >= ,==(같다) , !=(다르다)
	//관계연산자는 값대 값을 연산하여 참/거짓으로 나오게 된다.

	std::cout << "100 < 200 = " << (100 < 200) << std::endl;
	std::cout << "100 > 200 = " << (100 > 200) << std::endl;
	std::cout << "100 <= 200 = " << (100 <= 200) << std::endl;
	std::cout << "100 >= 200 = " << (100 >= 200) << std::endl;
	std::cout << "100 == 200 = " << (100 == 200) << std::endl;
	std::cout << "100 != 200 = " << (100 != 200) << std::endl;

	//변수를 이용한 관계연산자

	iNumber = 0;
	iNumber = 20;

	std::cout << "iNumber < 200 = " << (iNumber < 200) << std::endl;
	std::cout << "iNumber != 200 = " << (iNumber != 200) << std::endl;


	//논리 연산자
	//!(NOT),&&(AND),||(OR)
	//논리 연산자는 참/거짓 대 참/거짓을 연산하여 결과로 참/거짓이 나오게 된다.

	/*
	
	A		B		AND		OR
	false	false	false	false
	false	true	false	true
	true	false	false	true
	true	true	true	true

	AND는 둘다 true일때 true이고 아니면 false이다.
	OR는 둘중 하나라도 true일때 true이고 아니면 false.

	A		NOT
	false	true
	true	false
	NOT연산자는 반전이 된다.
	

	true = 1 ;
	flase = 0;
	*/

	std::cout << "false && false = " << (false && false) << std::endl;		//0
	std::cout << "false && true = " << (false && true) << std::endl;		//0
	std::cout << "true && false = " << (true && false) << std::endl;		//0
	std::cout << "true && true = " << (true && true) << std::endl;			//1

	std::cout << "false || false = " << (false || false) << std::endl;		//0
	std::cout << "false || true = " << (false || true) << std::endl;		//1
	std::cout << "true || false = " << (true || false) << std::endl;		//1
	std::cout << "true || true = " << (true || true) << std::endl;			//1

	std::cout << "!false = " << !false << std::endl;						//1
	std::cout << "!true = " << !true<< std::endl;							//0

	

	return 0;
}