// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�

#include "iostream"
using namespace std;

//ȫ�ֱ���������

extern int PlainText[16];
extern int CipherText[16]; //��Կ
extern int Plain[16][4];
extern int Cipher[16][4];  //��Կ
extern int MingText[64];
extern int MiText[16][64];
extern int IP[8][8];
extern int IP_I[8][8];
extern int E[8][6];
extern int P[4][8];

extern int S1[4][16];
extern int S2[4][16];
extern int S3[4][16];
extern int S4[4][16];
extern int S5[4][16];
extern int S6[4][16];
extern int S7[4][16];
extern int S8[4][16];

extern int Key[56];
extern int PC1[8][7];
extern int PC2[6][8];

extern int LeftShift[];

extern int KEY[16][48];
extern int Mi_last[64];
extern int S[8][4];

extern int CipherText[16];
extern int Cipher[16][4];
extern int R3[8][6];
extern int N_Key[16];

//������������

int PlainTextIn();
int CipherTextIn();
int KeyExt();
int RoundFunction(int n);
int OutputText();
int S_Box(int i);

