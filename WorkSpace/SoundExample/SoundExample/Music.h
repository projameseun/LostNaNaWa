#pragma once
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <Digitalv.h>
#include <string.h>

//---------------음악을 사용할 헤더추가
#pragma comment(lib,"winmm.lib")

MCI_OPEN_PARMS      mciOpen; //파일을 로드

MCI_PLAY_PARMS       mciPlay; //파일을 재생

MCI_STATUS_PARMS   mciStatus; //파일의 상태

UINT wDeviceID = 0;  //재생위 위치값 0이면 처음으로돌려줌
DWORD Result; //결과값

std::string MusicName;

LPCTSTR MusicRoute;

WORD InitMP3(LPCTSTR lpszWave);
void UpdateMP3(int Play_Num);
void Pause(int Player_Num);
void ResetWav(int Player_Num);
void PlayWav(int Play_Num);
void DestroyWav();