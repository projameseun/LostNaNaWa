#include <iostream>


enum class GunslingerSkill
{
	DualBuckshot = 1,
	Focusedshot = 2,
	LastRequest = 4,
	Peacekeeper = 8,
	PerfectZone = 16,
	Sharpshooter = 32,

};


int main()
{
	/*
		비트단위 논리 연산자 : AND(&), OR(|), NOT(-), XOR(^)
		속도가 빠름
		값 대 값을 연산하여 결과로 값이 나오게 된다.

		110 & 52 = 
		&0110 1110 
		 0011 0100
	    ----------
		 0010 0100

		 36이 된다

		 110 | 52
		 |0110 1110
		  0011 0100
		  ---------
		  0111 1110

		  126이 된다


		  A         B       XOR
		  false		false	false
		  false		true	true
		  true		false	true
		  ture		ture	false

		  XOR은 두개가 같으면 FALSE 다르면 TRUE가 나온다

		   110 ^ 52
		 ^0110 1110
		  0011 0100
		  ---------
		  0101 1010

		  10 + 16 + 62 = 90 이 나온다.

		  NOT~ 연산자는 1은 0, 0은 1로 변경된다.
		  ~110
		  0110 1110
		  ---------
		  1001 0001



	*/


	std::cout << "110 & 52" << "="<< (110 & 52) << std::endl;
	std::cout << "110 | 52" << "=" << (110 | 52) << std::endl;
	std::cout << "110 ^ 52" << "=" << (110 ^ 52) << std::endl;

	int iNumber = 8;
	std::cout << "iNum = " << (~iNumber) << std::endl;	//음수만들때 1의 보수 + 1


	//쉬프트연산자 : << , >>  2가지가 있다. 
	//값 대 값을 연산하여 결과로 값이 나오게 된다.
	
	unsigned char a = 2;

	//a<<=1;(축약형) 비트를 한칸 왼쪽으로 밀어 내겠다 
	a = a << 2;  //2
	
	a = 0;


	unsigned char b = 100; //2의 n승 % 값, = 빠른 나누기 라고도 부른다. 몫만 나온다 
	b >>= 3;
	b = 0;

	/*
	* 30 << 2 = 
	* 0001 1110
	* 
	* 
	*/


	//비트연산자, 쉬프트연산자를 이용해서 게임에서 사용하는 법


	int iSkill = 0;
	iSkill |= (int)GunslingerSkill::DualBuckshot;		//값을 넣어준다
	iSkill |= (int)GunslingerSkill::Focusedshot;



	if (iSkill | (int)GunslingerSkill::DualBuckshot)	//확인을 한다
	{
		std::cout << "듀얼벅샷발동" << std::endl;

	} 

	return 0;

}	