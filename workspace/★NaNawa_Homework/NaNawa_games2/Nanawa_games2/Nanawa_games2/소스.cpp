#include <iostream>
#include <conio.h> //kbhit, getch 함수 헤더파일
#include <Windows.h>
#include <time.h>
#include <string.h>

int ixpos = 0;
int iypos = 0;

bool bMainStart = true;
bool bMenuStart = true;
bool bGameStart = true;	//모든게임의 시작은 true , 만약에 false되면 메뉴모드로 다넘어감

int iMainStart = 1;	//0이되면 프로그램종료
int iMenuStart = 1; //0이되면 메인화면으로 넘어감

enum class Getch
{
	ESC = 27,
	ENTER = 13,
};

void Resetpos()
{
	ixpos = 50;
	iypos = 2;
}

void gotoxy(int _x, int _y)
{

	COORD pos = { _x,_y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

enum class gamenumber
{
	Drinkgame = 1,
	Updowngame,
	HnJgame,
	BRgame,
	Taxigame,
	GameEnd,
};

//----드링크게임----//

enum class DRINK
{
	iCoffee = 1,
	iCoke,
	iTrevi,
	iWater,
	iOrange,
	iEsc,
};

enum class BUY
{
	iBuy = 1,
	iEsc,
};

void DrinkSelect()
{
	Resetpos();
	gotoxy(ixpos, iypos);
	std::cout << "1. 구매";

	iypos++;
	gotoxy(ixpos, iypos);
	std::cout << "2. 나가기";

	iypos++;
	gotoxy(ixpos, iypos);
}

void NotBuy()
{
	system("cls");
	Resetpos();
	gotoxy(ixpos, iypos);
	std::cout << "돈이 부족합니다";
	std::cin.ignore();
	Sleep(1000);
}


void DrinkBuy()
{
	Resetpos();
	gotoxy(ixpos, iypos);
	int i;

	for (i = 0; i < 5; ++i)
	{
		if (i == 0)
		{
			system("cls");
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다.";
		}
		else if (i == 1)
		{
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다..";
		}
		else if (i == 2)
		{
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다...";
		}
		else if (i == 3)
		{
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다....";
		}
		else if (i == 4)
		{
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "구매중입니다.....";
		}
		Sleep(1000);
	}//for
}



void Drinkgame()
{
	int iTotal = 0;
	int iCoffee = 0;
	int iCoke = 0;
	int iTrevi = 0;
	int iWater = 0;
	int iOrange = 0;
	int iEsc = 0;
	int iMoney = 2000;
	int iChoice = 0;

	while (true)
	{
		system("cls");
		Resetpos();
		ixpos = 100;
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "Money :" << iMoney;
		std::cout << "\\";

		Resetpos();

		iypos++;
		iypos++;


		gotoxy(ixpos, iypos);
		std::cout << "1. 커피 = 1000원";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "2. 콜라 = 1200원";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "3. 트래비 = 1300원";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "4. 물 = 800원";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "5. 오렌지주스 = 1400원";


		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "6. 게임 목록으로 나가기";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cin >> iChoice;

		if (iChoice == (int)DRINK::iCoffee)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iChoice;
				int iCoffee = 1000;

				if (iChoice == (int)BUY::iBuy)
				{
					if (iMoney < iCoffee)
					{
						NotBuy();
						break;

					}

					iMoney -= iCoffee;
					system("cls");
					DrinkBuy();
					break;

				}

				else if (iChoice == (int)BUY::iEsc)
				{
					break;
				}

			}
		}//if

		else if (iChoice == (int)DRINK::iCoke)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iChoice;
				int iCoke = 1200;

				if (iChoice == (int)BUY::iBuy)
				{
					if (iMoney < iCoke)
					{
						NotBuy();
						break;

					}

					iMoney -= iCoke;
					system("cls");
					DrinkBuy();
					break;

				}

				else if (iChoice == (int)BUY::iEsc)
				{
					break;
				}

			}
		}//Coke

		else if (iChoice == (int)DRINK::iTrevi)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iChoice;
				int iTrevi = 1300;

				if (iChoice == (int)BUY::iBuy)
				{
					if (iMoney < iTrevi)
					{
						NotBuy();
						break;

					}

					iMoney -= iTrevi;
					system("cls");
					DrinkBuy();
					break;

				}

				else if (iChoice == (int)BUY::iEsc)
				{
					break;
				}

			}
		}//Trevi

		else if (iChoice == (int)DRINK::iTrevi)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iChoice;
				int iTrevi = 1300;

				if (iChoice == (int)BUY::iBuy)
				{
					if (iMoney < iTrevi)
					{
						NotBuy();
						break;

					}

					iMoney -= iTrevi;
					system("cls");
					DrinkBuy();
					break;

				}

				else if (iChoice == (int)BUY::iEsc)
				{
					break;
				}

			}
		}//Trevi

		else if (iChoice == (int)DRINK::iWater)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iChoice;
				int iWater = 800;

				if (iChoice == (int)BUY::iBuy)
				{
					if (iMoney < iWater)
					{
						NotBuy();
						break;

					}

					iMoney -= iWater;
					system("cls");
					DrinkBuy();
					break;

				}

				else if (iChoice == (int)BUY::iEsc)
				{
					break;
				}

			}
		}//iWater

		else if (iChoice == (int)DRINK::iOrange)
		{
			while (true)
			{
				system("cls");
				DrinkSelect();
				std::cin >> iChoice;
				int iOrange = 1400;

				if (iChoice == (int)BUY::iBuy)
				{
					if (iMoney < iOrange)
					{
						NotBuy();
						break;

					}

					iMoney -= iOrange;
					system("cls");
					DrinkBuy();
					break;

				}

				else if (iChoice == (int)BUY::iEsc)
				{
					break;
				}

			}
		}//iOrange

		else if (iChoice == (int)DRINK::iEsc)
		{
			break;
		}//6번 나가기

	}

	Sleep(1000);
}











//----업다운게임----//

void Updowngame()
{
	int iPlayer = 0;
	int iCom = 0;
	int iCount = 0;

	srand((unsigned int)time(NULL));
	iCom = rand() % 101;

	while (bGameStart == 1)
	{
		system("cls");
		Resetpos();
		gotoxy(ixpos, iypos);
		std::cout << "UP & DOWN GAME";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "숫자를 하나 입력해주세요";
		std::cin >> iPlayer;

		while (true)
		{
			if (iPlayer > iCom)
			{	
				iypos++;
				gotoxy(ixpos, iypos);

				std::cout << " DOWN ";
				iCount++;
				

				break;
				
			}

			else if (iPlayer < iCom)
			{	
				iypos++;
				gotoxy(ixpos, iypos);
				std::cout << "UP";
				iCount++;
				
				break;

			}

			else if (iPlayer == iCom)
			{	
				iypos++;
				gotoxy(ixpos, iypos);

				std::cout << " 정답! "<< "숫자는"<<iCom << "이였습니다!";
				
				std::cout << iCount << "번 만에 맞추었습니다";
				bGameStart = false;
				break;
			}
			
		}//while

		Sleep(1000);

	}//while

}



//----홀짝게임----//


void HnJgame()
{	
	int iPlayer;
	int iCom;

	srand((unsigned int)time(NULL));
	iCom = rand() % 10 + 1;

	while (true)
	{
		system("cls");
		Resetpos();
		gotoxy(ixpos, iypos);
		std::cout << "홀 & 짝GAME";

		iypos++;
		gotoxy(ixpos, iypos);

		std::cout << "홀이면 1, 짝수면 2를 입력해주세요";

		iypos++;
		gotoxy(ixpos, iypos);

		std::cin >> iPlayer;

		if (iCom % 2 == 0) // 짝수
		{
			iCom = 2;
		}

		else if (iCom % 2 == 1) //홀수
		{
			iCom = 1;
		}

		
		if (iCom == iPlayer)
		{
			iypos++;
			gotoxy(ixpos, iypos);

			std::cout << "승리!";
			iypos++;
			gotoxy(ixpos, iypos);
			std::cout << "Enter를 누르면 메뉴로 넘어갑니다" << std::endl;
			std::cin.ignore();
			getchar();
			break;
		}
		else
		{	
			iypos++;
			gotoxy(ixpos, iypos);

			std::cout << "패배!";
			iypos++;
			gotoxy(ixpos, iypos);
			std::cout << "Enter를 누르면 메뉴로 넘어갑니다" << std::endl;
			std::cin.ignore();
			getchar();
			break;
		}

		Sleep(1000);
	}//while


}





//----베스킨라빈스31----//

int iNumber;


void Count()
{
	gotoxy(102, 1);
	std::cout << "iNumber :" << iNumber << std::endl;

};


void BRgamestart()
{	
	int iPlayer = 0;
	int iCom = 0;

	iNumber = 0;

	int iCount = 0;

	bool bPlayer = false;
	bool bCom = false;


	srand((unsigned int)time(NULL));

	while (true)
	{	
		system("cls");

		iCom = rand() % 3 + 1;
		Count();
		Resetpos();

		iypos++;
		gotoxy(ixpos, iypos);


		std::cout << "플레이어 차례입니다" << std::endl;

		iypos++;
		gotoxy(ixpos, iypos);
		std::cin >> iPlayer;

		iypos++;
		gotoxy(ixpos, iypos);


		if (iPlayer <= 0 || iPlayer > 3)
		{

			std::cout << "1~3만 입력해주세요" << std::endl;
			std::cin.ignore();
			getchar();
			continue;
		}

		for (int i = 0; i < iPlayer; ++i)
		{
			iypos++;
			gotoxy(ixpos, iypos);
			iNumber++;
			std::cout << iNumber << std::endl;

			Count();

		}
		if (iNumber >= 31)
		{
			bPlayer = true;
		}

		if (bPlayer == true)
		{
			system("cls");
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "플레이어 패배" << std::endl;
			std::cin.ignore();
			getchar();
			break;
		}

		iypos++;
		gotoxy(ixpos, iypos);

		std::cout << "컴퓨터가 숫자를 냅니다" << std::endl;



		for (int i = 0; i < iCom; ++i)
		{

			iypos++;
			gotoxy(ixpos, iypos);
			iNumber++;
			std::cout << iNumber << std::endl;

			Count();

		}

		std::cin.ignore();
		getchar();

		if (iNumber >= 31)
		{
			bCom = true;
		}

		if (bCom == true)
		{
			system("cls");
			Resetpos();
			gotoxy(ixpos, iypos);

			std::cout << "컴퓨터 패배" << std::endl;
	
			break;
		}

	}
}


void BRgame()
{
		
	while (bGameStart == 1)
	{	

		
		system("cls");
		Resetpos();
		gotoxy(ixpos, iypos);
		std::cout << "베스킨 라빈스 31";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "숫자는 1부터 3까지 낼 수 있습니다.";

		
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "게임을 시작하려면 ENTER를 눌러주세요" << std::endl;
		
		iypos++;
		gotoxy(ixpos,iypos);
		std::cout << "나가려면 ESC를 눌러주세요";


		char cKey;

		if (_kbhit())
		{
			cKey = _getch();

			switch ((Getch)cKey)
			{
			case Getch::ESC:
				bGameStart = 0;
				break;
			case Getch::ENTER:
				BRgamestart();
				break;
			default:
				break;
			}
		}
		
		Sleep(1000);
	} //while

	
}



//----택시게임----//


enum class Taximenu
{
	Speed = 1,
	Direction,
	Move,
	Menu,
	Exit,

};

int iXPos = 0;
int iYPos = 0;

int iDestx = 0;
int iDesty = 0;

int iSpeed = 0;

void DongPos()
{
	if (iXPos > iDestx)
	{
		iXPos += iSpeed;
	}
	else if (iXPos < iDestx)
	{
		iXPos += iSpeed;

		if (iXPos >= iDestx)
		{
			iXPos = iDestx;
		}
	}
}


void SeoPos()
{
	if (iXPos < iDestx)
	{
		iXPos -= iSpeed;
	}
	else if (iXPos > iDestx)
	{
		iXPos -= iSpeed;

		if (iXPos <= iDestx)
		{
			iXPos = iDestx;
		}
	}
}


void BukPos()
{
	if (iYPos > iDesty)
	{
		iYPos += iSpeed;
	}
	else if (iYPos < iDesty)
	{
		iYPos += iSpeed;

		if (iYPos >= iDesty)
		{
			iYPos = iDesty;
		}
	}
}

void NamPos()
{
	if (iYPos < iDesty)
	{
		iYPos -= iSpeed;
	}
	else if (iYPos > iDesty)
	{
		iYPos -= iSpeed;

		if (iYPos <= iDesty)
		{
			iYPos = iDesty;
		}
	}
}

void TaxiGameStart()
{
	//Shfit + F12를 누르면 내가만든 변수의 모든곳을 참조 할수있다
	int iMaxSpeed = 0;


	while (true) //게임시작
	{

		iMaxSpeed = 3;
		iSpeed = 0;


		std::string Dir = "";
		std::string Dir2 = "";

		iDestx = 5;
		iDesty = 7;

		system("cls");

		int iSelect = 0;


		std::cout << "내 현재 위치 :" << iXPos << " , " << iYPos << " 목적지 : " << iDestx << "," << iDesty << std::endl;

		std::cout << "현재 속도 :" << iSpeed << "." << "최고 속도" << iMaxSpeed << std::endl;

		std::cout << "현재방향" << Dir << "," << Dir2 << std::endl;

		std::cout << "------------------------------" << std::endl;


		std::cout << "1. 속도" << std::endl;

		std::cout << "2. 방향" << std::endl;

		std::cout << "3. 전진" << std::endl;
		;
		std::cout << "4. 메뉴가기" << std::endl;

		std::cin >> iSelect;



		if (iSelect == (int)Taximenu::Menu) // 4. 메뉴가기
		{

			break;
		}

		if (iSelect == (int)Taximenu::Speed) // 1. 속도
		{
			std::cout << "속도를 올릴 수 있습니다." << std::endl;
			std::cout << "현재속도 :" << iSpeed << "," << "최대속도 : " << iMaxSpeed << std::endl;

			std::cin >> iSpeed;

			if (iSpeed > iMaxSpeed)
			{
				iSpeed = 0;
				std::cout << "최대속도를 넘을 수 없습니다" << std::endl;
			}

			else if (iSpeed <= iMaxSpeed && iSpeed >= 0)
			{

				iSpeed = iSpeed;
			}

		}


		else if (iSelect == (int)Taximenu::Direction) //2. 방향
		{
			while (true)
			{
				system("cls");
				std::cout << "현재방향 : " << Dir << ", " << Dir2 << std::endl;
				std::cout << "방향을 설정해주세요" << std::endl;
				std::cout << "동=Dong, 서=Seo" << std::endl;
				std::cout << "비우고 싶으면 None" << std::endl;

				std::cin >> Dir;

				std::cout << "남=Nam, 북=Buk" << std::endl;
				std::cout << "비우고 싶으면 None" << std::endl;

				std::cin >> Dir2;

				if (Dir != "Dong" && Dir != "Seo" && Dir != "None")
				{
					std::cout << "제대로 입력해주세요" << std::endl;
					Dir = "";
					std::cin.ignore();
					getchar();

					continue;
				}

				if (Dir2 != "Buk" && Dir2 != "Nam" && Dir2 != "None")
				{
					std::cout << "제대로 입력해주세요" << std::endl;
					Dir2 = "";
					std::cin.ignore();
					getchar();

					continue;
				}

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

		else if (iSelect == (int)Taximenu::Move)
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

			else if (Dir == "" && Dir2 == "Buk")
			{
				BukPos();
			}


			else if (Dir == "" && Dir2 == "Nam")
			{
				NamPos();
			}

			//------


			else if (Dir == "Dong" && Dir2 == "Nam")
			{
				DongPos();
				NamPos();
			}

			else if (Dir == "Seo" && Dir2 == "Nam")
			{
				SeoPos();
				NamPos();
			}

			else if (Dir == "Dong" && Dir2 == "Buk")
			{
				DongPos();
				BukPos();
			}

			else if (Dir == "Seo" && Dir2 == "Buk")
			{
				SeoPos();
				BukPos();
			}

		}



		else
		{
			std::cout << "번호를 제대로 입력해주세요" << std::endl;
			continue;

		}






		if (iDestx == iXPos && iDesty == iYPos)

		{

			std::cout << "목적지에 도착하였습니다. MAX스피드가 1 증가합니다" << std::endl;

			std::cout << "랜덤으로 목적지가 변경됩니다." << std::endl;

			std::cout << "이어서 다시 이동해주세요" << std::endl;

			iMaxSpeed++;

			iDestx = rand() % 21 - 10; // -10 ~ 10 까지 랜덤 난수 생성
			iDesty = rand() % 21 - 10;

			Sleep(1000);

		}




	}

}

void Taxigame()
{
	srand(static_cast<unsigned int>(time(NULL)));




	
	while (true)
	{
		int istart = 0;


		system("cls");

		std::cout << "택시게임을 시작합니다" << std::endl;
		std::cout << "----------------------------------------------------------" << std::endl;

		std::cout << "1. 속도를 정해주세요. MAX 스피드를 초과할 순 없습니다" << std::endl;

		std::cout << "2. 방향을 정해주세요. 동=Dong 서=Seo 남=Nam 북=Buk" << std::endl;

		std::cout << "3. 목적지로 전진합니다. 목적지에 도달하면 MAX 스피드가 1 증가합니다. 목적지는 랜덤으로 옮겨집니다!" << std::endl;

		std::cout << "4. 1을 누르면 게임이 시작됩니다" << std::endl;

		std::cout << "5. 나가기 -99" << std::endl;

		std::cin >> istart;
		
		if (istart == 99)
		{
			break;
		}

		if (istart == 1)
		{
			TaxiGameStart();
		}
		
		else
		{
			continue;
		}
		

	}

	
}








//----게임목록----//

void gamestart()
{
	while (bMenuStart == true)
	{
		system("cls");
		int iSelect = 0;

		bGameStart = true;

		Resetpos();
		gotoxy(ixpos, iypos);

		iypos++;
		std::cout << "1. 드링크게임";

		gotoxy(ixpos, iypos);
		iypos++;
		std::cout << "2. 업다운게임";

		gotoxy(ixpos, iypos);
		iypos++;
		std::cout << "3. 홀짝게임";

		gotoxy(ixpos, iypos);
		iypos++;
		std::cout << "4. 베스킨라빈스31";

		gotoxy(ixpos, iypos);
		iypos++;
		std::cout << "5. 택시게임";

		gotoxy(ixpos, iypos);
		iypos++;
		std::cout << "6. 게임종료";

		gotoxy(ixpos, iypos);
		iypos++;
		std::cin >> iSelect;



		if (true)
		{
			iSelect;

			switch (iSelect)
			{

			case(int)gamenumber::Drinkgame:
			{
				Drinkgame();
				break;
			}

			case(int)gamenumber::Updowngame:
			{
				Updowngame();
				break;
			}

			case(int)gamenumber::HnJgame:
			{
				HnJgame();
				break;
			}

			case(int)gamenumber::BRgame:
			{
				BRgame();
				break;
			}

			case(int)gamenumber::Taxigame:
			{
				Taxigame();
				break;
			}
			case(int)gamenumber::GameEnd:
			{
				gotoxy(ixpos, iypos);
				iypos++;
				std::cout << "MainGame으로 다시진입" << std::endl;
				bMenuStart = false;
				break;
			}



			default:
				break;
			}//switch

		}//if
	}
}//gamestart



//------------MAIN ------------//

int main()
{
	while (bMainStart == true)

	{

		system("cls");
		Resetpos();
		gotoxy(ixpos, iypos);
		std::cout << "■■■■■■■■■■■";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "■게■임■모■음■집■";


		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "■■■■■■■■■■■";


		iypos++;
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "시작 : ENTER";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "종료 : ESC";

		iypos++;
		gotoxy(ixpos, iypos);


		if (_kbhit())
		{
			char c = _getch();

			switch (c)
			{
			case(int)Getch::ENTER:
			{
				gamestart();
				bMenuStart = true;
				break;
			}
			case(int)Getch::ESC:
			{
				std::cout << "ENTER을 누르면 게임을 종료합니다";

				std::cin.ignore();
				getchar();
				bMainStart = false;
				
				break;

			}
			default:
				break;
			}//switch
		
		}//if(_kbhit)

		Sleep(500);
	}






	return 0;
}