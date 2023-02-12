#include <iostream>
#include <conio.h> //kbhit, getch �Լ� �������
#include <Windows.h>
#include <time.h>
#include <string.h>

int ixpos = 0;
int iypos = 0;

bool bMainStart = true;
bool bMenuStart = true;
bool bGameStart = true;	//�������� ������ true , ���࿡ false�Ǹ� �޴����� �ٳѾ

int iMainStart = 1;	//0�̵Ǹ� ���α׷�����
int iMenuStart = 1; //0�̵Ǹ� ����ȭ������ �Ѿ

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

//----�帵ũ����----//

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
	std::cout << "1. ����";

	iypos++;
	gotoxy(ixpos, iypos);
	std::cout << "2. ������";

	iypos++;
	gotoxy(ixpos, iypos);
}

void NotBuy()
{
	system("cls");
	Resetpos();
	gotoxy(ixpos, iypos);
	std::cout << "���� �����մϴ�";
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
			std::cout << "�������Դϴ�.";
		}
		else if (i == 1)
		{
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "�������Դϴ�..";
		}
		else if (i == 2)
		{
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "�������Դϴ�...";
		}
		else if (i == 3)
		{
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "�������Դϴ�....";
		}
		else if (i == 4)
		{
			Resetpos();
			gotoxy(ixpos, iypos);
			std::cout << "�������Դϴ�.....";
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
		std::cout << "1. Ŀ�� = 1000��";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "2. �ݶ� = 1200��";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "3. Ʈ���� = 1300��";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "4. �� = 800��";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "5. �������ֽ� = 1400��";


		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "6. ���� ������� ������";

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
		}//6�� ������

	}

	Sleep(1000);
}











//----���ٿ����----//

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
		std::cout << "���ڸ� �ϳ� �Է����ּ���";
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

				std::cout << " ����! "<< "���ڴ�"<<iCom << "�̿����ϴ�!";
				
				std::cout << iCount << "�� ���� ���߾����ϴ�";
				bGameStart = false;
				break;
			}
			
		}//while

		Sleep(1000);

	}//while

}



//----Ȧ¦����----//


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
		std::cout << "Ȧ & ¦GAME";

		iypos++;
		gotoxy(ixpos, iypos);

		std::cout << "Ȧ�̸� 1, ¦���� 2�� �Է����ּ���";

		iypos++;
		gotoxy(ixpos, iypos);

		std::cin >> iPlayer;

		if (iCom % 2 == 0) // ¦��
		{
			iCom = 2;
		}

		else if (iCom % 2 == 1) //Ȧ��
		{
			iCom = 1;
		}

		
		if (iCom == iPlayer)
		{
			iypos++;
			gotoxy(ixpos, iypos);

			std::cout << "�¸�!";
			iypos++;
			gotoxy(ixpos, iypos);
			std::cout << "Enter�� ������ �޴��� �Ѿ�ϴ�" << std::endl;
			std::cin.ignore();
			getchar();
			break;
		}
		else
		{	
			iypos++;
			gotoxy(ixpos, iypos);

			std::cout << "�й�!";
			iypos++;
			gotoxy(ixpos, iypos);
			std::cout << "Enter�� ������ �޴��� �Ѿ�ϴ�" << std::endl;
			std::cin.ignore();
			getchar();
			break;
		}

		Sleep(1000);
	}//while


}





//----����Ų���31----//

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


		std::cout << "�÷��̾� �����Դϴ�" << std::endl;

		iypos++;
		gotoxy(ixpos, iypos);
		std::cin >> iPlayer;

		iypos++;
		gotoxy(ixpos, iypos);


		if (iPlayer <= 0 || iPlayer > 3)
		{

			std::cout << "1~3�� �Է����ּ���" << std::endl;
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
			std::cout << "�÷��̾� �й�" << std::endl;
			std::cin.ignore();
			getchar();
			break;
		}

		iypos++;
		gotoxy(ixpos, iypos);

		std::cout << "��ǻ�Ͱ� ���ڸ� ���ϴ�" << std::endl;



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

			std::cout << "��ǻ�� �й�" << std::endl;
	
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
		std::cout << "����Ų ��� 31";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "���ڴ� 1���� 3���� �� �� �ֽ��ϴ�.";

		
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "������ �����Ϸ��� ENTER�� �����ּ���" << std::endl;
		
		iypos++;
		gotoxy(ixpos,iypos);
		std::cout << "�������� ESC�� �����ּ���";


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



//----�ýð���----//


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
	//Shfit + F12�� ������ �������� ������ ������ ���� �Ҽ��ִ�
	int iMaxSpeed = 0;


	while (true) //���ӽ���
	{

		iMaxSpeed = 3;
		iSpeed = 0;


		std::string Dir = "";
		std::string Dir2 = "";

		iDestx = 5;
		iDesty = 7;

		system("cls");

		int iSelect = 0;


		std::cout << "�� ���� ��ġ :" << iXPos << " , " << iYPos << " ������ : " << iDestx << "," << iDesty << std::endl;

		std::cout << "���� �ӵ� :" << iSpeed << "." << "�ְ� �ӵ�" << iMaxSpeed << std::endl;

		std::cout << "�������" << Dir << "," << Dir2 << std::endl;

		std::cout << "------------------------------" << std::endl;


		std::cout << "1. �ӵ�" << std::endl;

		std::cout << "2. ����" << std::endl;

		std::cout << "3. ����" << std::endl;
		;
		std::cout << "4. �޴�����" << std::endl;

		std::cin >> iSelect;



		if (iSelect == (int)Taximenu::Menu) // 4. �޴�����
		{

			break;
		}

		if (iSelect == (int)Taximenu::Speed) // 1. �ӵ�
		{
			std::cout << "�ӵ��� �ø� �� �ֽ��ϴ�." << std::endl;
			std::cout << "����ӵ� :" << iSpeed << "," << "�ִ�ӵ� : " << iMaxSpeed << std::endl;

			std::cin >> iSpeed;

			if (iSpeed > iMaxSpeed)
			{
				iSpeed = 0;
				std::cout << "�ִ�ӵ��� ���� �� �����ϴ�" << std::endl;
			}

			else if (iSpeed <= iMaxSpeed && iSpeed >= 0)
			{

				iSpeed = iSpeed;
			}

		}


		else if (iSelect == (int)Taximenu::Direction) //2. ����
		{
			while (true)
			{
				system("cls");
				std::cout << "������� : " << Dir << ", " << Dir2 << std::endl;
				std::cout << "������ �������ּ���" << std::endl;
				std::cout << "��=Dong, ��=Seo" << std::endl;
				std::cout << "���� ������ None" << std::endl;

				std::cin >> Dir;

				std::cout << "��=Nam, ��=Buk" << std::endl;
				std::cout << "���� ������ None" << std::endl;

				std::cin >> Dir2;

				if (Dir != "Dong" && Dir != "Seo" && Dir != "None")
				{
					std::cout << "����� �Է����ּ���" << std::endl;
					Dir = "";
					std::cin.ignore();
					getchar();

					continue;
				}

				if (Dir2 != "Buk" && Dir2 != "Nam" && Dir2 != "None")
				{
					std::cout << "����� �Է����ּ���" << std::endl;
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
			std::cout << "��ȣ�� ����� �Է����ּ���" << std::endl;
			continue;

		}






		if (iDestx == iXPos && iDesty == iYPos)

		{

			std::cout << "�������� �����Ͽ����ϴ�. MAX���ǵ尡 1 �����մϴ�" << std::endl;

			std::cout << "�������� �������� ����˴ϴ�." << std::endl;

			std::cout << "�̾ �ٽ� �̵����ּ���" << std::endl;

			iMaxSpeed++;

			iDestx = rand() % 21 - 10; // -10 ~ 10 ���� ���� ���� ����
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

		std::cout << "�ýð����� �����մϴ�" << std::endl;
		std::cout << "----------------------------------------------------------" << std::endl;

		std::cout << "1. �ӵ��� �����ּ���. MAX ���ǵ带 �ʰ��� �� �����ϴ�" << std::endl;

		std::cout << "2. ������ �����ּ���. ��=Dong ��=Seo ��=Nam ��=Buk" << std::endl;

		std::cout << "3. �������� �����մϴ�. �������� �����ϸ� MAX ���ǵ尡 1 �����մϴ�. �������� �������� �Ű����ϴ�!" << std::endl;

		std::cout << "4. 1�� ������ ������ ���۵˴ϴ�" << std::endl;

		std::cout << "5. ������ -99" << std::endl;

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








//----���Ӹ��----//

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
		std::cout << "1. �帵ũ����";

		gotoxy(ixpos, iypos);
		iypos++;
		std::cout << "2. ���ٿ����";

		gotoxy(ixpos, iypos);
		iypos++;
		std::cout << "3. Ȧ¦����";

		gotoxy(ixpos, iypos);
		iypos++;
		std::cout << "4. ����Ų���31";

		gotoxy(ixpos, iypos);
		iypos++;
		std::cout << "5. �ýð���";

		gotoxy(ixpos, iypos);
		iypos++;
		std::cout << "6. ��������";

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
				std::cout << "MainGame���� �ٽ�����" << std::endl;
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
		std::cout << "������������";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "��ԡ��ӡ�����������";


		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "������������";


		iypos++;
		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "���� : ENTER";

		iypos++;
		gotoxy(ixpos, iypos);
		std::cout << "���� : ESC";

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
				std::cout << "ENTER�� ������ ������ �����մϴ�";

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