#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string.h>

enum class GameType
{
	OddEvenGame =1,
	DrinkGame ,
	RGBGame,
	UpDownGame,
	Baskin31Game,
	TaxiGame,
	ExitGame,
};


void OddEvenGameMode()
{
	std::string Player = "";
	std::string AI = "";

	int iSelect = 0;

	while (true)
	{
		system("cls");
		std::cout << "Ȧ¦����" << std::endl;
		std::cout << "Ȧ¦���� �Դϴ� Ȧ,¦���߿��ϳ��� ������ �ּ��� " << std::endl;


		iSelect = rand() % 1;

		if (iSelect == 0)
		{
			AI = "Ȧ";
		}
		else
		{
			AI = "¦";
		}

		std::cin >> Player;

		if (AI == Player)
		{
			std::cout << "������ϴ�" << std::endl;
		}
		else if (AI != Player)
		{
			std::cout << "Ʋ�ǽ��ϴ�" << std::endl;
		}

		std::cin.ignore();

		getchar();

		break;


	}
}

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	int iSelect = 0;

	while (true)
	{
		
		system("cls");
		std::cout << "<======Game������======>" << std::endl;
		std::cout << "1.Ȧ¦����" << std::endl;
		std::cout << "2.�帵ũ����" << std::endl;
		std::cout << "3.���������" << std::endl;
		std::cout << "4.���ٿ����" << std::endl;
		std::cout << "5.����Ų31����" << std::endl;
		std::cout << "6.�ýð���" << std::endl;
		std::cout << "7.���ӳ�����" << std::endl;

		std::cin >> iSelect;

		if (iSelect == (int)GameType::ExitGame)
		{
			break;
		}

		if (iSelect == (int)GameType::OddEvenGame)
		{
			OddEvenGameMode();
		}
		else if (iSelect == (int)GameType::DrinkGame)
		{
			std::cout << "�帵ũ����" << std::endl;
		}
		else if (iSelect == (int)GameType::RGBGame)
		{
			std::cout << "���ٿ����" << std::endl;

		}
		else if (iSelect == (int)GameType::UpDownGame)
		{
			std::cout << "����Ų31" << std::endl;
		}
		else if (iSelect == (int)GameType::Baskin31Game)
		{
			std::cout << "�ýð���" << std::endl;
		}
		else if (iSelect == (int)GameType::TaxiGame)
		{
			std::cout << "Ȧ¦����" << std::endl;
		}
		else
		{
			continue;
		}
		
		
		
	}
	return 0;
}