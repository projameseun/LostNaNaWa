#pragma once
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <Digitalv.h>
#include <string.h>

//---------------������ ����� ����߰�
#pragma comment(lib,"winmm.lib")


WORD InitMP3(LPCTSTR lpszWave);
void UpdateMP3(int Play_Num);
void Pause(int Player_Num);
void ResetMp3(int Player_Num);
void PlayMp3(int Play_Num);
void DestroyMp3();