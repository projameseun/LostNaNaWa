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
		std::cout << "홀짝게임" << std::endl;
		std::cout << "홀짝게임 입니다 홀,짝둘중에하나를 선택해 주세요 " << std::endl;


		iSelect = rand() % 1;

		if (iSelect == 0)
		{
			AI = "홀";
		}
		else
		{
			AI = "짝";
		}

		std::cin >> Player;

		if (AI == Player)
		{
			std::cout << "맞췄습니다" << std::endl;
		}
		else if (AI != Player)
		{
			std::cout << "틀렷습니다" << std::endl;
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
		std::cout << "<======Game모음집======>" << std::endl;
		std::cout << "1.홀짝게임" << std::endl;
		std::cout << "2.드링크게임" << std::endl;
		std::cout << "3.알지비게임" << std::endl;
		std::cout << "4.업다운게임" << std::endl;
		std::cout << "5.베스킨31게임" << std::endl;
		std::cout << "6.택시게임" << std::endl;
		std::cout << "7.게임나가기" << std::endl;

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
			std::cout << "드링크게임" << std::endl;
		}
		else if (iSelect == (int)GameType::RGBGame)
		{
			std::cout << "업다운게임" << std::endl;

		}
		else if (iSelect == (int)GameType::UpDownGame)
		{
			std::cout << "베스킨31" << std::endl;
		}
		else if (iSelect == (int)GameType::Baskin31Game)
		{
			std::cout << "택시게임" << std::endl;
		}
		else if (iSelect == (int)GameType::TaxiGame)
		{
			std::cout << "홀짝게임" << std::endl;
		}
		else
		{
			continue;
		}
		
		
		
	}
	return 0;
}