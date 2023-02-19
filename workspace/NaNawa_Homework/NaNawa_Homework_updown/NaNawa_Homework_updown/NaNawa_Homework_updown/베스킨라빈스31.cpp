#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int iuser = 0;
	int icom = 0;
	int iNumber = 0; // 1~31 
	int iSelect = 0;
	bool btrue = true;


	std::cout << "베스킨라빈스 31 게임\n";
	std::cout << "1을 입력하면 게임을 시작합니다\n";
	std::cin >> iSelect;

	while (iSelect == 1)
	{
			std::cout << "1개~3개 중 몇개를 내시겠습니까?";
			std::cin >> iuser;

			if (iuser > 3 || iuser < 1)
			{
				std::cout << "1~3에서 골라주세요" << std::endl;
				continue;
			}
			for (int i = 0; i < iuser; ++i)
			{	
				iNumber++;
				std::cout << iNumber << std::endl;
				
				if (iNumber == 31)
				{
					std::cout << "플레이어가 졌습니다" << std::endl;

					iSelect = 0;
					btrue = !btrue;
					break;

				}


			}
			if (btrue == false)
			{
				continue;
			}

			std::cout << "차레가 바뀝니다" << std::endl;
			
			
			srand(static_cast<unsigned int>(time(NULL)));
			icom = rand() % 3 + 1; // 1~3 까지의 랜덤한 수를 출력
			std::cout << "컴퓨터 차례입니다." << std::endl;
			
			for (int i = 0; i < icom; ++i)
			{	
				iNumber++;
				std::cout << iNumber << std::endl;

				if (iNumber == 31)
				{
					std::cout << "컴퓨터가 졌습니다" << std::endl;
					iSelect = 0;

					break;
				}
				
			}
			
	
		
	}

	return 0;
}