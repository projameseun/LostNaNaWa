#include <iostream>
#include <time.h>
#include <Windows.h>

int iBingo = 0;
int aiBingo = 0;

int iSelectMode = 0;

int iPlayer[25];
int iAi[25];



enum class GameMode
{
	EASY = 1,
	HARD,
};


void GameModeSelect()
{
	while (true)
	{
		system("cls");
		std::cout << "게임모드를 선택해주세요" << std::endl;
		std::cout << "1.EASY MODE" << std::endl;
		std::cout << "2.HARD MODE" << std::endl;

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


void Shuffle()
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

		itemp = iAi[idx1];
		iAi[idx1] = iAi[idx2];
		iAi[idx2] = itemp;

	}

}


void Initial()
{
	for (int i = 0; i < 25; ++i)
	{
		iPlayer[i] = i + 1;
		iAi[i] = i + 1;
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
				if (iAi [i * 5 + j] == INT_MAX)
				{	
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
					std::cout << "♥" << "\t";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
				}

				else
				{
					std::cout << iAi[i * 5 + j] << "\t";
				}


			}

			std::cout << std::endl;
		}


		int iNumber = 0;

		std::cout << std::endl;
		std::cout << "1~25까지 숫자를 입력해주세요. 0을 누르면 게임을 종료합니다." << std::endl;
		std::cin >> iNumber;

		if (iNumber > 25)
		{
			std::cout << "1~25까지 입력해주세요" << std::endl;
		}

		for (int i = 0; i < 25; ++i)
		{
			if (iNumber == iPlayer[i])
			{
				iPlayer[i] = INT_MAX;
			}
			if (iNumber == iAi[i])
			{
				iAi[i] = INT_MAX;
			}
				
		} 
		
		int iHbcount = 0;
		int iWbcount = 0;
		int iRbcount = 0;
		int iLbcount = 0;

		iBingo = 0;
		aiBingo = 0;

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (iPlayer[i + j * 5] == INT_MAX) // 세로빙고 0 5 10 15 20
				{
					iHbcount++;

					if (iHbcount == 5)
					{
						iBingo++;
					}
				}

				//다음시간에 만나요~ 

				//if (iPlayer[i + j * 5] % 4 && i+j*5 != 0 && i+j*5 !=24 == INT_MAX) // / 우측대각 4 8 12 16 20
				//{
				//	iRbcount++;

				//	if (iRbcount == 5)
				//	{
				//		iBingo++;
				//	}

				//}

				//if (iPlayer[i + j * 5] / 6 == INT_MAX) // 좌측대각 0 6 12 18 24
				//{
				//	iLbcount++;

				//	if (iLbcount == 5)
				//	{
				//		iBingo++;
				//	}

				//}


				if (iPlayer[i * 5 + j] == INT_MAX) // 가로 빙고 0 1 2 3 4 
				{
					iWbcount++;

					if (iWbcount == 5)
					{
						iBingo++;
					}
				}


			}

			iWbcount = 0;
			iHbcount = 0;
						

		} //빙고 IF문


		for (int i = 0; i < 25; i+=6) // 좌 -> 우 아래
		{
			if (iPlayer[i] == INT_MAX)
			{
				iLbcount++;
				if (iLbcount == 5)
				{
					iBingo++;
				}
			}
		}

		for (int i = 4; i < 21; i+=4)
		{
			if (iPlayer[i] == INT_MAX)
			{
				iRbcount++;
				if (iRbcount == 5)
				{
					iBingo++;
				}
			}
		}

		std::cout << "iBingo  = " << iBingo << std::endl;
		std::cout << "aiBingo  = " << aiBingo << std::endl;


		if (iBingo >= 5 && aiBingo >= 5)
		{
			std::wcout << "게임을 종료합니다" << std::endl;
		}
		




		Sleep(1000);


	}//while



} //void GameRender


void MainGameStart()
{
	srand(static_cast<unsigned int> (time(NULL)));

	Initial();
	Shuffle();

	GameRender();
	
	

}



int main()
{
	GameModeSelect();

	MainGameStart();


	return 0;
}