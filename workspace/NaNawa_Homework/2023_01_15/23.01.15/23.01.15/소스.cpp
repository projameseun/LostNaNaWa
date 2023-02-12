#include<iostream>
#include <Windows.h>



int main()
{


	std::cout << "1¹ø º°Âï±â" << std::endl;

	for (int i = 0; i <5; ++i)
	{
		for (int j =0; j <=i; ++j)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;


	std::cout << "2¹ø º°Âï±â" << std::endl;

	for (int i = 5; i > 0; --i)
	{
		for (int j = 0; j < i; ++j)
		{			
			std::cout << "*";

		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
 
return 0;
}


	