#pragma once
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <Digitalv.h>
#include <string.h>

//---------------음악을 사용할 헤더추가
#pragma comment(lib,"winmm.lib")

//static MCI_OPEN_PARMS      mciOpen; //파일을 로드


WORD InitMP3(LPCTSTR lpszWave);
void UpdateMP3(int Play_Num);
void Pause(int Player_Num);
void ResetMp3(int Player_Num);
void PlayMp3(int Play_Num);
void DestroyMp3();

extern MCI_OPEN_PARMS      mciOpen; //파일을 로드
