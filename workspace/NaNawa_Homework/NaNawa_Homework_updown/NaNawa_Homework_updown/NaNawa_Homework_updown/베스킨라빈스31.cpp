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


	std::cout << "����Ų��� 31 ����\n";
	std::cout << "1�� �Է��ϸ� ������ �����մϴ�\n";
	std::cin >> iSelect;

	while (iSelect == 1)
	{
			std::cout << "1��~3�� �� ��� ���ðڽ��ϱ�?";
			std::cin >> iuser;

			if (iuser > 3 || iuser < 1)
			{
				std::cout << "1~3���� ����ּ���" << std::endl;
				continue;
			}
			for (int i = 0; i < iuser; ++i)
			{	
				iNumber++;
				std::cout << iNumber << std::endl;
				
				if (iNumber == 31)
				{
					std::cout << "�÷��̾ �����ϴ�" << std::endl;

					iSelect = 0;
					btrue = !btrue;
					break;

				}


			}
			if (btrue == false)
			{
				continue;
			}

			std::cout << "������ �ٲ�ϴ�" << std::endl;
			
			
			srand(static_cast<unsigned int>(time(NULL)));
			icom = rand() % 3 + 1; // 1~3 ������ ������ ���� ���
			std::cout << "��ǻ�� �����Դϴ�." << std::endl;
			
			for (int i = 0; i < icom; ++i)
			{	
				iNumber++;
				std::cout << iNumber << std::endl;

				if (iNumber == 31)
				{
					std::cout << "��ǻ�Ͱ� �����ϴ�" << std::endl;
					iSelect = 0;

					break;
				}
				
			}
			
	
		
	}

	return 0;
}