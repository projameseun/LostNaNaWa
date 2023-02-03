#include <iostream>

int Add(int _a, int _b)
{
	return _a + _b;
}

int Minus(int _a, int _b)
{
	return _a - _b;
}

int main()
{
	int iResult = 0;

	iResult = Add(10, 20);

	int iResult2 = 0;

	iResult2 = Minus(50, 20);

	iResult = Add(10, 20);
	iResult = Add(10, 20);
	iResult = Add(10, 20);

	

	return 0;
}