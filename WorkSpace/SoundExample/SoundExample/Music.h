#pragma once
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <Digitalv.h>
#include <string.h>

//---------------������ ����� ����߰�
#pragma comment(lib,"winmm.lib")

MCI_OPEN_PARMS      mciOpen; //������ �ε�

MCI_PLAY_PARMS       mciPlay; //������ ���

MCI_STATUS_PARMS   mciStatus; //������ ����

UINT wDeviceID = 0;  //����� ��ġ�� 0�̸� ó�����ε�����
DWORD Result; //�����

std::string MusicName;

LPCTSTR MusicRoute;

WORD InitMP3(LPCTSTR lpszWave);
void UpdateMP3(int Play_Num);
void Pause(int Player_Num);
void ResetWav(int Player_Num);
void PlayWav(int Play_Num);
void DestroyWav();