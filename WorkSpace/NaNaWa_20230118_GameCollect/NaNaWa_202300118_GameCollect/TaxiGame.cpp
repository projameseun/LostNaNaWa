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

//스피드
int iSpeed = 0;
int iMaxSpeed = 0;

//현재위치
int ixPos = 0;
int iyPos = 0;

//목적지

int iDestx = 0;
int iDesty = 0;

void DongPos()
{
	if (ixPos > iDestx)	//목적지가 왼쪽에 있다는 거다
	{
		ixPos += iSpeed;
	}
	else if (ixPos < iDestx)	//목적지가 오른쪽에 있다는 거다
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
	if (ixPos < iDestx)	//목적지가 오른쪾에 있다는거다
	{
		ixPos -= iSpeed;
	}
	else if (ixPos > iDestx) //목적지가 왼쪾에 있다는거다
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
	if (iyPos < iDesty)	//목적지가 위에 있다는거다
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
		std::cout << "<===========택시 게임 =============>" << std::endl;
		std::cout << "1.시작" << std::endl;
		std::cout << "2.나가기" << std::endl;
		
		int iSelect = 0;

		std::cin >> iSelect;

		if (iSelect == 1)	//게임시작
		{
			iSpeed = 0;	//나의 스피드
			iMaxSpeed = 3;
			
			//방향
			std::string Dir = "";
			std::string Dir2 = "";

			//현재위치
			ixPos = 0;
			iyPos = 0;

			//목적지 
			iDestx = 5;
			iDesty = 7;

			system("cls");
			std::cout << "1.속도를 정한다 Max스피드는 넘을수 없습니다" << std::endl;
			std::cout << "2.방향을 정한다." << std::endl;
			std::cout << "3.목적지로 전진한다, 목적지에 도달하면 Max스피드가 1증가 그리고 목적지는 랜덤으로 변경범위는 -10~ 10 " << std::endl;
			std::cout << "Enter를 눌러주면 게임이 시작됩니다" << std::endl;
			std::cout << std::endl;
			
			std::cin.ignore();
			getchar();

			while (true)//게임 시작되는곳
			{
				system("cls");
				std::cout << "내위치 : " << ixPos << "," << iyPos << " 목적지 : " << iDestx << "," << iDesty << std::endl;
				std::cout << "현재속도 : " << iSpeed << "," << " 최고속도 : " << iMaxSpeed << std::endl;
				std::cout << "현재방향 : " << Dir << " , " << Dir2 << std::endl;

				std::cout << "1.속도" << std::endl;
				std::cout << "2.방향" << std::endl;
				std::cout << "3.전진" << std::endl;
				std::cout << "4.메뉴가기" << std::endl;

		

				if (iDestx == ixPos && iDesty == iyPos)
				{
					std::cout << "도착하였습니다 !! Max스피드가 1증가" << std::endl;
					std::cout << "랜덤으로 새로운 위치가 변경되었습니다" << std::endl;
					std::cout << "이어서 다시 이동해주세요" << std::endl;

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
					std::cout << "속도를 올릴수 있습니다 " << std::endl;
					std::cout << "현재속도 : " << iSpeed << "," << " 최고속도 : " << iMaxSpeed << std::endl;
					
					std::cin >> iSpeed;

					if (iSpeed > iMaxSpeed)
					{
						iSpeed = 0;
						std::cout << "최고속도를 넘을수는 없습니다" << std::endl;
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



						std::cout << "현재방향 : " << Dir << " , " << Dir2 << std::endl;
						std::cout << "방향을 설정해주세요" << std::endl;

						std::cout << "동,서를 입력해주세요" << std::endl;
						std::cout << "만약에 동,서를 비우고 싶으면 없음이라고 입력해주세요" << std::endl;

						std::cin >> Dir;

						std::cout << "남,북를 입력해주세요" << std::endl;
						std::cout << "만약에 남,북을 비우고 싶으면 없음이라고 입력해주세요" << std::endl;

						std::cin >> Dir2;

						if (Dir != "Dong" && Dir != "Seo" && Dir != "None")
						{
							std::cout << "제대로 입력해주세요 " << std::endl;
							Dir = "";
							std::cin.ignore();
							getchar();

							continue;
						}

						if (Dir2 != "Nam" && Dir2 != "Buk" && Dir2 != "None")
						{
							std::cout << "제대로 입력해주세요 " << std::endl;
							Dir2 = "";
							std::cin.ignore();
							getchar();

							continue;
						}

						//없음을 선택했다
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
					std::cout << "번호를 제대로 입력해주세요 " << std::endl;
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