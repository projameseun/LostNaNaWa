#include <iostream>

int main()
{
	//변수: 메모리(램)에 공간을 만들고 해당공간에 값을 저장해서 사용할수 있게 해주는기능.
	//자료형(Data Type) 
	//정수형 : int char short long...
	//실수형 : float double ...
	
	//int 4byte크기를 갖고있다.
	//변수는 고정이 아니다 
	//0 : 값이라고 부른다.
	//= 대입연산자라고 부른다.
	//Lvalue , RValue
	
	int iNumber = 0;
	//컴파일 과정에서(변수 ====> 메모리주소(ffbxxx))
	
	//기본컴퓨터 단위
	//1bit 는 0,1 두가지를 표현할수 있고
	//1Byte = 8Bit
	
	//1Kbyte =1024byte
	//1mybyte = 1024kbyte
	//1gbbyte = 1024mbyte
	//1tbbyte = 1024gbyte

	
	//아스키코드란?
	char ch = 48;  //1Byte  256가지를 표현가능
	std::cout << ch << std::endl;
	ch = 256;
	//ch = 256 을 넣으니까 0 이나왔다  
	//왜 0이나오는지?



	

	return 0;
}