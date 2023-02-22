#include <iostream>
#include <time.h>
#include <Windows.h>

int iBingo = 0;
int aiBingo = 0;

int iSelectMode = 0;

int Player[25];
int AI[25];

bool bAcc = true;

enum class LN_NUMBER
{
	LN_W1,
	LN_W2,
	LN_W3,
	LN_W4,
	LN_W5,

	LN_H1,
	LN_H2,
	LN_H3,
	LN_H4,
	LN_H5,

	LN_LD,
	LN_RD,
};

enum class AIMode
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

		if (iSelectMode == (int)AIMode::EASY)
		{
			iSelectMode = 1;
			break;
		}
		else if (iSelectMode == (int)AIMode::HARD)
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

		itemp = Player[idx1];
		Player[idx1] = Player[idx2];
		Player[idx2] = itemp;

		idx1 = rand() % 25;
		idx2 = rand() % 25;

		itemp = AI[idx1];
		AI[idx1] = AI[idx2];
		AI[idx2] = itemp;

	}

}


void Initial()
{
	for (int i = 0; i < 25; ++i)
	{
		Player[i] = i + 1;
		AI[i] = i + 1;
	}

}

void BingoCheck()
{
	int iHbcount = 0;
	int iWbcount = 0;
	int iRbcount = 0;
	int iLbcount = 0;

	int aiiHbcount = 0;
	int aiiWbcount = 0;
	int aiiRbcount = 0;
	int aiiLbcount = 0;

	iBingo = 0;
	aiBingo = 0;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (Player[i + j * 5] == INT_MAX) // 세로빙고 0 5 10 15 20
			{
				iHbcount++;

				if (iHbcount == 5)
				{
					iBingo++;
				}
			}

			if (AI[i + j * 5] == INT_MAX) // 세로빙고 0 5 10 15 20
			{
				aiiHbcount++;

				if (aiiHbcount == 5)
				{
					aiBingo++;
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


			if (Player[i * 5 + j] == INT_MAX) // 가로 빙고 0 1 2 3 4 
			{
				iWbcount++;

				if (iWbcount == 5)
				{
					iBingo++;
				}
			}

			if (AI[i * 5 + j] == INT_MAX) // 가로 빙고 0 1 2 3 4 
			{
				aiiWbcount++;

				if (aiiWbcount == 5)
				{
					aiBingo++;
				}
			}


		}

		iWbcount = 0;
		iHbcount = 0;
		aiiWbcount = 0;
		aiiHbcount = 0;

	} //빙고 IF문

	iLbcount = 0;
	iRbcount = 0;
	aiiLbcount = 0;
	aiiRbcount = 0;

	for (int i = 0; i < 25; i += 6) // 좌 -> 우 아래
	{
		if (Player[i] == INT_MAX)
		{
			iLbcount++;
			if (iLbcount == 5)
			{
				iBingo++;
			}
		}
		if (AI[i] == INT_MAX)
		{
			aiiLbcount++;
			if (aiiLbcount == 5)
			{
				aiBingo++;
			}
		}
	}

	for (int i = 4; i < 21; i += 4)
	{
		if (Player[i] == INT_MAX)
		{
			iRbcount++;
			if (iRbcount == 5)
			{
				iBingo++;
			}
		}
		if (AI[i] == INT_MAX)
		{
			aiiRbcount++;
			if (aiiRbcount == 5)
			{
				aiBingo++;
			}
		}
	}
}


void GameRender()
{
	while (true)
	{
		system("cls");




		std::cout << "iBingo  = " << iBingo << std::endl;
		std::cout << "aiBingo  = " << aiBingo << std::endl;


		if (iBingo >= 5 && aiBingo >= 5)
		{
			std::wcout << "게임을 종료합니다" << std::endl;
		}



		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		std::cout << "<========Player=======>" << std::endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (Player[i * 5 + j] == INT_MAX)
				{
					
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
					std::cout << "★" << "\t";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
				}

				else
				{
					std::cout << Player[i * 5 + j] << "\t";
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
				if (AI [i * 5 + j] == INT_MAX)
				{	
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
					std::cout << "♥" << "\t";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
				}

				else
				{
					std::cout << AI[i * 5 + j] << "\t";
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

		bAcc = true;

		for (int i = 0; i < 25; ++i)
		{
			if (iNumber == Player[i])
			{
				Player[i] = INT_MAX;
				bAcc = false;
			}
			if (iNumber == AI[i])
			{
				AI[i] = INT_MAX;
			}
				
		} 

		//ai 차례가 되면된다.

		switch ((AIMode)iSelectMode)
		{
		case AIMode::EASY:
			while (true)
			{
				int i = rand() % 25;
				if (AI[i] == INT_MAX)
				{
					continue;
				}
				if (AI[i] != INT_MAX)
				{
					iNumber = AI[i];
					break;
				}
			}

			for (int i = 0; i < 25; ++i)
			{
				if (iNumber == Player[i])
				{
					Player[i] = INT_MAX;
					bAcc = false;
				}
				if (iNumber == AI[i])
				{
					AI[i] = INT_MAX;
				}
			}

			break;
		case AIMode::HARD:
		{
			int iCheckCount = 0;
			int iSaveCount = 0;
			int iLine = 0;

			//가로줄체크
			for (int i = 0; i < 5; ++i)
			{
				iCheckCount = 0;

				for (int j = 0; j < 5; ++j)
				{
					if (AI[i * 5 + j] == INT_MAX)
					{
						++iCheckCount;
					}
				}

				if (iCheckCount < 5 && iSaveCount < iCheckCount)
				{
					iLine = i;
					iSaveCount = iCheckCount;
				}

			}


			//세로줄체크
			for (int i = 0; i < 5; ++i)
			{
				iCheckCount = 0;
				for (int j = 0; j < 5; ++j)
				{
					if (AI[j * 5 + i] == INT_MAX)
					{
						++iCheckCount;
					}
				}

				if (iCheckCount < 5 && iSaveCount < iCheckCount)
				{
					iLine = i + 5;
					iSaveCount = iCheckCount;
				}
			}


			iCheckCount = 0;
			//왼대 
			for (int i = 0; i < 25; i += 6)
			{
				if (AI[i] == INT_MAX)
				{
					++iCheckCount;
				}

			}

			if (iCheckCount < 5 && iSaveCount < iCheckCount)
			{
				iLine = (int)LN_NUMBER::LN_LD;
				iSaveCount = iCheckCount;
			}


			iCheckCount = 0;
			//오대 
			for (int i = 4; i <= 20; i += 4)
			{
				if (AI[i] == INT_MAX)
				{
					++iCheckCount;
				}

			}

			if (iCheckCount < 5 && iSaveCount < iCheckCount)
			{
				iLine = (int)LN_NUMBER::LN_RD;
				iSaveCount = iCheckCount;
			}

			//여기 까지 온건 문자체크가 가장 많이 된 라인을 알게 된것이다.
			//가로줄
			if (iLine <= (int)LN_NUMBER::LN_W5)
			{

				for (int i = 0; i < 5; ++i)
				{
					if (AI[iLine * 5 + i] != INT_MAX)
					{

						iNumber = AI[iLine * 5 + i];
					}
				}
			}
			//세로줄
			else if (iLine <= (int)LN_NUMBER::LN_H5)
			{
				for (int i = 0; i < 5; ++i)
				{
					if (AI[i * 5 + (iLine - 5)] != INT_MAX)
					{
						iNumber = AI[i * 5 + (iLine - 5)];
					}
				}
			}
			//왼대
			else if (iLine == (int)LN_NUMBER::LN_LD)
			{
				for (int i = 0; i < 25; i += 6)
				{
					if (AI[i] != INT_MAX)
					{
						iNumber = AI[i];
					}
				}
			}
			//오대
			else if (iLine == (int)LN_NUMBER::LN_RD)
			{
				for (int i = 4; i <= 20; i += 4)
				{
					if (AI[i] != INT_MAX)
					{
						iNumber = AI[i];
					}
				}
			}


			for (int i = 0; i < 25; ++i)
			{
				if (AI[i] == iNumber)
				{
					AI[i] = INT_MAX;
				}
				if (Player[i] == iNumber)
				{
					Player[i] = INT_MAX;
				}
			}


		}
			break;
		default:
			break;
		}

		
		if (bAcc)
		{
			continue;
		}



		BingoCheck();

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