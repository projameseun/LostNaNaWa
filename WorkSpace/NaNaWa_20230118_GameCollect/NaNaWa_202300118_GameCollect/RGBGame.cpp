#include <iostream>
#include <stdio.h>
#include "cful.h"


#define ANSI_COLOR_RED      "\x1b[31m"
#define ANSI_COLOR_GREEN    "\x1b[32m"
#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_COLOR_BLUE     "\x1b[34m"
#define ANSI_COLOR_MAGENTA  "\x1b[35m"
#define ANSI_COLOR_CYAN     "\x1b[36m"
#define ANSI_COLOR_RESET    "\x1b[0m"


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

	

	
	printf(FG_COLOR(133, 203, 255) "Hello World!\n" RESET);
	printf(BG_COLOR(69, 46, 107) "Hello World!\n" RESET);



	return 0;
}