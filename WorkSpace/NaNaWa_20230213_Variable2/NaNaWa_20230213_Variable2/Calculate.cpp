#include "Calculate.h"
#include <iostream>


int g_data = 0;

int Add(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

int Multi(int a, int b)
{
	return a * b;
}

int Divide(int a, int b)
{
	return a / b;
}


void Func2()
{
	g_iNumber++;

	g_StaticNum++;
	g_StaticNum++;
	g_StaticNum++;
	g_StaticNum++;
	g_StaticNum++;

	std::cout << "외부헤더 스태틱변수 값: " << g_StaticNum << std::endl;
}

extern int g_iNumber = 10;
