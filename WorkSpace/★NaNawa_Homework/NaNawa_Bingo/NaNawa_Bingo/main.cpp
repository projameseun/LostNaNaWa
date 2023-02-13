#include <iostream>
#include <time.h>
#include <Windows.h>

int iBingo = 0;
int aiBingo = 0;

int iSelectMode = 0;

int iPlayer[25];
int iAI[25];

enum class GameMode
{
	EASY =1,
	HARD,
};

void GameModeSelcet()
{
	while (true)
	{
		system("cls");
		std::cout << "게임모드를 선택해주세요" << std::endl;
		std::cout << "1.EASY" << std::endl;
		std::cout << "2.HARD" << std::endl;

		std::cin >> iSelectMode;

		if (iSelectMode == (int)GameMode::EASY)
		{
			iSelectMode = 1;
			break;
		}
		else if (iSelectMode == (int)GameMode::HARD)
		{
			iSelectMode = 2;
			break;
		}
		else
		{
			continue;
		}

	}
}

//셔플
void Shuffule()
{
	int idx1, idx2, itemp = 0;

	for (int i = 0; i < 100; ++i)
	{
		idx1 = rand() % 25;
		idx2 = rand() % 25;

		itemp = iPlayer[idx1];
		iPlayer[idx1] = iPlayer[idx2];
		iPlayer[idx2] = itemp;


		idx1 = rand() % 25;
		idx2 = rand() % 25;

		itemp = iAI[idx1];
		iAI[idx1] = iAI[idx2];
		iAI[idx2] = itemp;
		
	}
}

//초기값넣기
void Initial()
{
	for (int i = 0; i< 25; ++i)
	{
		iPlayer[i] = i + 1;
		iAI[i] = i + 1;
	}
}

void GameRender()
{
	while (true)
	{
		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		std::cout << "<========Player=======>" << std::endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (iPlayer[i * 5 + j] == INT_MAX)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
					std::cout << "★" << "\t";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
				}
				else
				{
					std::cout << iPlayer[i * 5 + j] << "\t";
				}
				
			}

			std::cout << std::endl;
		}

		std::cout << std::endl;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		std::cout << "<========AI=======>" << std::endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (iAI[i * 5 + j] == INT_MAX)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
					std::cout << "♥" << "\t";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
				}
				else
				{
					std::cout << iAI[i * 5 + j] << "\t";

				}
			}

			std::cout << std::endl;
		}


		std::cout << "iBingo  = " << iBingo << std::endl;
		std::cout << "aiBingo  = " << aiBingo << std::endl;

	
		
	}//	while (true)
}

void MainGameStart()
{
	srand(static_cast<unsigned int>(time(NULL)));

	Initial();
	Shuffule();
	
	//render부분
	GameRender();
	
	
}

int main()
{
	GameModeSelcet();

	//게임진짜시작 
	MainGameStart();


	return 0;
}