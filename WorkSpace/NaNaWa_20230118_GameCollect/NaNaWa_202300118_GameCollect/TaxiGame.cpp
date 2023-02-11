#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string.h>

enum class GameMenu
{
	Speed= 1,
	Direction,
	Move,
	Menu,
};

//���ǵ�
int iSpeed = 0;
int iMaxSpeed = 0;

//������ġ
int ixPos = 0;
int iyPos = 0;

//������

int iDestx = 0;
int iDesty = 0;

void DongPos()
{
	if (ixPos > iDestx)	//�������� ���ʿ� �ִٴ� �Ŵ�
	{
		ixPos += iSpeed;
	}
	else if (ixPos < iDestx)	//�������� �����ʿ� �ִٴ� �Ŵ�
	{
		ixPos += iSpeed;
		if (ixPos >= iDestx)
		{
			ixPos = iDestx;
		}
	}

	

}

void SeoPos()
{
	if (ixPos < iDestx)	//�������� �����U�� �ִٴ°Ŵ�
	{
		ixPos -= iSpeed;
	}
	else if (ixPos > iDestx) //�������� �ަU�� �ִٴ°Ŵ�
	{
		ixPos -= iSpeed;
		if (ixPos <= iDestx)	
		{
			ixPos = iDestx;
		}
	}
	
}

void NamPos()
{
	if (iyPos < iDesty)	//�������� ���� �ִٴ°Ŵ�
	{
		iyPos -= iSpeed;
	}
	else if (iyPos > iDesty)
	{
		iyPos -= iSpeed;
		if (iyPos <= iDesty)
		{
			iyPos = iDesty;
		}
	}
	
}

void BukPos()
{
	

	if (iyPos > iDesty)
	{
		iyPos += iSpeed;
	}
	else if (iyPos < iDesty)
	{
		iyPos += iSpeed;
		if (iyPos >= iDesty)
		{
			iyPos = iDesty;
		}
	}
	
	
}



int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	while (true)
	{
		system("cls");
		std::cout << "<===========�ý� ���� =============>" << std::endl;
		std::cout << "1.����" << std::endl;
		std::cout << "2.������" << std::endl;
		
		int iSelect = 0;

		std::cin >> iSelect;

		if (iSelect == 1)	//���ӽ���
		{
			iSpeed = 0;	//���� ���ǵ�
			iMaxSpeed = 3;
			
			//����
			std::string Dir = "";
			std::string Dir2 = "";

			//������ġ
			ixPos = 0;
			iyPos = 0;

			//������ 
			iDestx = 5;
			iDesty = 7;

			system("cls");
			std::cout << "1.�ӵ��� ���Ѵ� Max���ǵ�� ������ �����ϴ�" << std::endl;
			std::cout << "2.������ ���Ѵ�." << std::endl;
			std::cout << "3.�������� �����Ѵ�, �������� �����ϸ� Max���ǵ尡 1���� �׸��� �������� �������� ��������� -10~ 10 " << std::endl;
			std::cout << "Enter�� �����ָ� ������ ���۵˴ϴ�" << std::endl;
			std::cout << std::endl;
			
			std::cin.ignore();
			getchar();

			while (true)//���� ���۵Ǵ°�
			{
				system("cls");
				std::cout << "����ġ : " << ixPos << "," << iyPos << " ������ : " << iDestx << "," << iDesty << std::endl;
				std::cout << "����ӵ� : " << iSpeed << "," << " �ְ�ӵ� : " << iMaxSpeed << std::endl;
				std::cout << "������� : " << Dir << " , " << Dir2 << std::endl;

				std::cout << "1.�ӵ�" << std::endl;
				std::cout << "2.����" << std::endl;
				std::cout << "3.����" << std::endl;
				std::cout << "4.�޴�����" << std::endl;

		

				if (iDestx == ixPos && iDesty == iyPos)
				{
					std::cout << "�����Ͽ����ϴ� !! Max���ǵ尡 1����" << std::endl;
					std::cout << "�������� ���ο� ��ġ�� ����Ǿ����ϴ�" << std::endl;
					std::cout << "�̾ �ٽ� �̵����ּ���" << std::endl;

					iMaxSpeed++;
					//-10 10
					iDestx = rand() % 21 - 10;	//-10 10 
					iDesty = rand() % 21 - 10;

			

				}


				int iSelect = 0;

				std::cin >> iSelect; 

				if (iSelect == (int)GameMenu::Menu)
				{
					break;
				}

				if (iSelect == (int)GameMenu::Speed)
				{
					std::cout << "�ӵ��� �ø��� �ֽ��ϴ� " << std::endl;
					std::cout << "����ӵ� : " << iSpeed << "," << " �ְ�ӵ� : " << iMaxSpeed << std::endl;
					
					std::cin >> iSpeed;

					if (iSpeed > iMaxSpeed)
					{
						iSpeed = 0;
						std::cout << "�ְ�ӵ��� �������� �����ϴ�" << std::endl;
					}
					else if (iSpeed <= iMaxSpeed && iSpeed >= 0)
					{
						iSpeed = iSpeed;
					}

					
				}

				else if (iSelect == (int)GameMenu::Direction)
				{
					while (true)
					{
						system("cls");



						std::cout << "������� : " << Dir << " , " << Dir2 << std::endl;
						std::cout << "������ �������ּ���" << std::endl;

						std::cout << "��,���� �Է����ּ���" << std::endl;
						std::cout << "���࿡ ��,���� ���� ������ �����̶�� �Է����ּ���" << std::endl;

						std::cin >> Dir;

						std::cout << "��,�ϸ� �Է����ּ���" << std::endl;
						std::cout << "���࿡ ��,���� ���� ������ �����̶�� �Է����ּ���" << std::endl;

						std::cin >> Dir2;

						if (Dir != "Dong" && Dir != "Seo" && Dir != "None")
						{
							std::cout << "����� �Է����ּ��� " << std::endl;
							Dir = "";
							std::cin.ignore();
							getchar();

							continue;
						}

						if (Dir2 != "Nam" && Dir2 != "Buk" && Dir2 != "None")
						{
							std::cout << "����� �Է����ּ��� " << std::endl;
							Dir2 = "";
							std::cin.ignore();
							getchar();

							continue;
						}

						//������ �����ߴ�
						if (Dir == "None")
						{
							Dir = "";
						}
						if (Dir2 == "None")
						{
							Dir2 = "";
						}

						break;
					}
					
					
				
				}
				else if (iSelect == (int)GameMenu::Move)
				{
					if (iSpeed == 0)
					{
						continue;
					}

					if (Dir == "" && Dir2 == "")
					{
						continue;
					}

					if (Dir == "Dong" && Dir2 == "")
					{
						
						DongPos();
					}
					else if (Dir == "Seo" && Dir2 == "")
					{
						SeoPos();
					}

					else if (Dir == "" && Dir2 == "Nam")
					{
						NamPos();
					}

					else if (Dir == "" && Dir2 == "Buk")
					{
						BukPos();
					}
					
					/// ////////////
				
					else if (Dir == "Dong" && Dir2 == "Nam")
					{
						DongPos();
						NamPos();
					}
					else if (Dir == "Dong" && Dir2 == "Buk")
					{
						DongPos();
						BukPos();
					}
					else if (Dir == "Seo" && Dir2 == "Nam")
					{
						SeoPos();
						NamPos();
					}
					else if (Dir == "Seo" && Dir2 == "Buk")
					{
						SeoPos();
						BukPos();
					}
					
					
				


				}
				else
				{
					std::cout << "��ȣ�� ����� �Է����ּ��� " << std::endl;
					continue;
				}
			}
			
		}
		else if (iSelect == 2)
		{
			break;
		}
		
		
	}

	return 0;
}