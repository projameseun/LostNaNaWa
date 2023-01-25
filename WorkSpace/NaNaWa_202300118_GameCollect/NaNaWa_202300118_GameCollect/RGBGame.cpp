#include <iostream>
#include <stdio.h>



int main()
{
	//32비트 칼라 RGB를 만들어보자 
	//0~255만 받을수 있다
	unsigned int iColor = 0;
	unsigned char iAlpha = 100;
	unsigned char iRed = 40;
	unsigned char iGreen = 110;
	unsigned char iBlue = 10;

	iColor |= iAlpha;
	iColor = iColor << 8;

	iColor |= iRed;
	iColor <<= 8;

	iColor |= iGreen;
	iColor <<= 8;

	iColor |= iBlue;

	std::cout << "iColor = " << iColor << std::endl;

	//0 ~15			     A         R         G         B
	//0 ~9 a b c d e f 00000000  00000000  00000000 11111111
	std::cout << "Blue : " << (iColor & 0x000000ff) << std::endl;
	
	std::cout << "Green :" << (iColor >> 8 & 0x000000ff) << std::endl;

	std::cout << "Rgb :" << (iColor >> 16 & 0x000000ff) << std::endl;

	std::cout << "Alpha :" << (iColor >> 24 & 0x000000ff) << std::endl;

	std::cout << (FG_COLO)



	return 0;
}