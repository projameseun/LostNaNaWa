#include <iostream>
#include <bitset>
enum class GunslingerSkill
{
	DualBuckshot = 0x1,
	FocusedShot = 0x2,
	LastRequest = 0x4,
	Peacekeeper = 0x8,

	PerfectZone = 0x10,
	Sharpshooter = 0x20,	//32
	//Sharpshooter = 0x40,

};



int main()
{
	/*
		비트단위 논리 연산자:AND(&),OR(|),NOT(~),XOR(^)
		값 대 값을 연산하여 결과로 값이 나오게 된다.
		
		 110 & 52 = 
		&0110 1110
		 0011 0100
		-----------
		 0010 0100

		 36이된다.

		 110 | 52 =
		|0110 1110
		 0011 0100
		 ----------
		 0111 1110

		 126이 된다.

		 A		B		XOR
		 false	false	false
		 false	true	true
		 true	false	true
		 true	true	false

		 XOR는 두개가 같으면 false 다르면 true가 나온다.

		  110 ^ 52 =
		^0110 1110
		 0011 0100
		 ----------
		 0101 1010

		 10 + 16+ 64 = 90이된다.
		 
		 NOT~연산자는 1은 0, 0은 1로 변경된다.
		 ~110 
		 0110 1110
		 ---------
		 1001 0001

	*/

	std::cout << "110 & 52 = " << (110 & 52) << std::endl;
	std::cout << "110 | 52 = " << (110 | 52) << std::endl;
	std::cout << "110 ^ 52 = " << (110 ^ 52) << std::endl;

	
	//쉬프트연산자 : << , >> 2가지가 있다.
	//값 대 값을 연산하여 결과로 값이 나오게 된다.
	
	unsigned char a = 3;

	//a<<=1;
	a = a << 5;		//2의n승 * 배수 ///2의5승은 32 ,빠른 곱하기 라고도 부른다
	a = 0;
	unsigned char b = 8;	//2의n승 나누기	,빠른 나누기 라고도 부른다.

	b >>= 2;	
	b = 0;

	/*
	30 << 2 = 
	0001 1110	위 연산 뒤에 0 을 2개붙이라는것이다.
	 111 1000
	
	120이된다. 

	30 << 3 = 
	0001 1110
	1111000
	240 이된다.

	30 << 2 ==> 2의2승 * 30  //120
	30 << 3 ==> 2의3승 * 30  //240

	30 >> 2 
	11110 
	111 
	7이된다.
	
	30 >> 3
	11110 
	11
	3

	30 >> 2 ===>2의2승 / 30 //7
	30 >> 3 ===>2의3승 / 30 //3

	*/

	//비트연산자 , 쉬프트연산자를 이용해서 게임에서 사용하는법

	int iSkill = 0;

	iSkill = iSkill | (int)GunslingerSkill::DualBuckshot;
	//iSkill |= (int)GunslingerSkill::DualBuckshot;		//값을넣어줄대
	iSkill |= (int)GunslingerSkill::FocusedShot;

	std::cout << std::bitset<8>(iSkill) << std::endl;

	//iSkill ^= (int)GunslingerSkill::FocusedShot;		//없으면 넣고, 있으면 뺀다
	//iSkill ^= (int)GunslingerSkill::FocusedShot;		

	//특정자리 비트제거
	iSkill &= ~(int)GunslingerSkill::DualBuckshot;		//뺀다


	if (iSkill & (int)GunslingerSkill::DualBuckshot)	//확인을 한다
	{
		std::cout << "듀얼벅샷 발동" << std::endl;
	}
	if (iSkill & (int)GunslingerSkill::FocusedShot)
	{
		std::cout << "포커스샷 발동" << std::endl;
	}

	return 0;
}
