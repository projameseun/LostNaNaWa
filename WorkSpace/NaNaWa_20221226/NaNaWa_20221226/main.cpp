//#include <iostream>
//
//int main()
//{
//	//형변환 (Type Casting)
//	//5가지가 있다
//	//형변환의 종류 => c-style cast 
//	//타입 캐스트 연산자 ==> static_cast , const_cast , dynamic_cast, reinterpreat_cast
//
//	//c-style cast는 숫자 앞에 (자료형)을 사용한다.
//	//int a = 10;
//	//int b = 20;
//	//float fNumber = (float)a / b;
//
//	//static_cast<자료형> static_cast는 하나의 자료형을 다른 자료형으로 변환하는데 가장 적합하다
//	//c언어 형변환이랑 같지만 , 포인터의타입의 캐스팅을 금지한다. 단 void*의 변환은 가능하다.
//	//상속관계에 있는 클래스간에 캐스팅이 가능하나 런타임(프로그램 실행되고 있는동안) 타입검사를 하지 않기때문에 위험하다 이때는 dynamic_cast를 사용한다.
//
//	int a = 20;
//	int b = 50;
//	float fNumber = static_cast<float>(a) / b;
//
//	//암시적 형변환 -자동으로 형변환이 이루어 진다.
//	//명시적 형변환 - 사용자가 직접 데이터의 타입을 변경하는 것 이다.
//
//	//암시적 형변환 ex)
//	//암시적 형변환할때는 조심해야되는게 있다. 
//	//크기가 큰대서 작은거로 가게되면 데이터 손실이 있을수 있다. 그래서 확실할때만 사용하는것이 좋다.
//
//	int iNumber = 3.14;
//
//	//명시적 형변환 ex)
//	int iNumber2 = (float)50.;
//
//	
//
//
//	return 0;
//}