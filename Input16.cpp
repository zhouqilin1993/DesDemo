#include "stdafx.h"

int PlainTextIn(){
	
	for (int i = 0; i < 16; i++){
		char c;
		cin >> c;
		switch (c)
		{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			PlainText[i] = c - '0'; break;
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
			PlainText[i] = (c - 'a')+10; break;
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
			PlainText[i] = (c - 'A')+10; break;
		default:
			cout << "对不起：请输入16进制的数据！" << endl;
			break;
		}
	}

	for (int i = 0; i < 16; i++){
		switch (PlainText[i])
		{
		case 0 : 
			Plain[i][0] = 0;
			Plain[i][1] = 0;
			Plain[i][2] = 0;
			Plain[i][3] = 0;
			break;
		case 1:
			Plain[i][0] = 0;
			Plain[i][1] = 0;
			Plain[i][2] = 0;
			Plain[i][3] = 1;
			break;
		case 2:
			Plain[i][0] = 0;
			Plain[i][1] = 0;
			Plain[i][2] = 1;
			Plain[i][3] = 0;
			break;
		case 3:
			Plain[i][0] = 0;
			Plain[i][1] = 0;
			Plain[i][2] = 1;
			Plain[i][3] = 1;
			break;
		case 4:
			Plain[i][0] = 0;
			Plain[i][1] = 1;
			Plain[i][2] = 0;
			Plain[i][3] = 0;
			break;
		case 5:
			Plain[i][0] = 0;
			Plain[i][1] = 1;
			Plain[i][2] = 0;
			Plain[i][3] = 1;
			break;
		case 6:
			Plain[i][0] = 0;
			Plain[i][1] = 1;
			Plain[i][2] = 1;
			Plain[i][3] = 0;
			break;
		case 7:
			Plain[i][0] = 0;
			Plain[i][1] = 1;
			Plain[i][2] = 1;
			Plain[i][3] = 1;
			break;
		case 8:
			Plain[i][0] = 1;
			Plain[i][1] = 0;
			Plain[i][2] = 0;
			Plain[i][3] = 0;
			break;
		case 9:
			Plain[i][0] = 1;
			Plain[i][1] = 0;
			Plain[i][2] = 0;
			Plain[i][3] = 1;
			break;
		case 10:
			Plain[i][0] = 1;
			Plain[i][1] = 0;
			Plain[i][2] = 1;
			Plain[i][3] = 0;
			break;
		case 11:
			Plain[i][0] = 1;
			Plain[i][1] = 0;
			Plain[i][2] = 1;
			Plain[i][3] = 1;
			break;
		case 12:
			Plain[i][0] = 1;
			Plain[i][1] = 1;
			Plain[i][2] = 0;
			Plain[i][3] = 0;
			break;
		case 13:
			Plain[i][0] = 1;
			Plain[i][1] = 1;
			Plain[i][2] = 0;
			Plain[i][3] = 1;
			break;
		case 14:
			Plain[i][0] = 1;
			Plain[i][1] = 1;
			Plain[i][2] = 1;
			Plain[i][3] = 0;
			break;
		case 15:
			Plain[i][0] = 1;
			Plain[i][1] = 1;
			Plain[i][2] = 1;
			Plain[i][3] = 1;
			break;
		
		default:
			break;
		}
	}

	for (int i = 0; i < 16; i++){
		for (int j = 0; j < 4; j++){
			MingText[i * 4 + j] = Plain[i][j];
		}
	}


	return 0;
}

int CipherTextIn(){
	
	for (int i = 0; i < 16; i++){
		char c;
		cin >> c;
		switch (c)
		{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			CipherText[i] = c - '0'; break;
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
			CipherText[i] = (c - 'a') + 10; break;
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
			CipherText[i] = (c - 'A') + 10; break;
		default:
			cout << "对不起：请输入16进制的数据！" << endl;
			break;
		}
	}

	for (int i = 0; i < 16; i++){
		switch (CipherText[i])
		{
		case 0:
			Cipher[i][0] = 0;
			Cipher[i][1] = 0;
			Cipher[i][2] = 0;
			Cipher[i][3] = 0;
			break;
		case 1:
			Cipher[i][0] = 0;
			Cipher[i][1] = 0;
			Cipher[i][2] = 0;
			Cipher[i][3] = 1;
			break;
		case 2:
			Cipher[i][0] = 0;
			Cipher[i][1] = 0;
			Cipher[i][2] = 1;
			Cipher[i][3] = 0;
			break;
		case 3:
			Cipher[i][0] = 0;
			Cipher[i][1] = 0;
			Cipher[i][2] = 1;
			Cipher[i][3] = 1;
			break;
		case 4:
			Cipher[i][0] = 0;
			Cipher[i][1] = 1;
			Cipher[i][2] = 0;
			Cipher[i][3] = 0;
			break;
		case 5:
			Cipher[i][0] = 0;
			Cipher[i][1] = 1;
			Cipher[i][2] = 0;
			Cipher[i][3] = 1;
			break;
		case 6:
			Cipher[i][0] = 0;
			Cipher[i][1] = 1;
			Cipher[i][2] = 1;
			Cipher[i][3] = 0;
			break;
		case 7:
			Cipher[i][0] = 0;
			Cipher[i][1] = 1;
			Cipher[i][2] = 1;
			Cipher[i][3] = 1;
			break;
		case 8:
			Cipher[i][0] = 1;
			Cipher[i][1] = 0;
			Cipher[i][2] = 0;
			Cipher[i][3] = 0;
			break;
		case 9:
			Cipher[i][0] = 1;
			Cipher[i][1] = 0;
			Cipher[i][2] = 0;
			Cipher[i][3] = 1;
			break;
		case 10:
			Cipher[i][0] = 1;
			Cipher[i][1] = 0;
			Cipher[i][2] = 1;
			Cipher[i][3] = 0;
			break;
		case 11:
			Cipher[i][0] = 1;
			Cipher[i][1] = 0;
			Cipher[i][2] = 1;
			Cipher[i][3] = 1;
			break;
		case 12:
			Cipher[i][0] = 1;
			Cipher[i][1] = 1;
			Cipher[i][2] = 0;
			Cipher[i][3] = 0;
			break;
		case 13:
			Cipher[i][0] = 1;
			Cipher[i][1] = 1;
			Cipher[i][2] = 0;
			Cipher[i][3] = 1;
			break;
		case 14:
			Cipher[i][0] = 1;
			Cipher[i][1] = 1;
			Cipher[i][2] = 1;
			Cipher[i][3] = 0;
			break;
		case 15:
			Cipher[i][0] = 1;
			Cipher[i][1] = 1;
			Cipher[i][2] = 1;
			Cipher[i][3] = 1;
			break;

		default:
			break;
		}
	}
	
	return 0;
}


int OutputText(){
	//printf("@#############@");
	int MiLast[16][4] = { 0 };
	for (int i = 0; i < 16; i++){
		for (int j = 0; j < 4; j++){
			MiLast[i][j] = Mi_last[i * 4 + j];
		}
	}
	int MiLAST[16] = { 0 };
	for (int i = 0; i < 16; i++){
		int t = 0;
		t = MiLast[i][0] * 8 + MiLast[i][1] * 4 + MiLast[i][2] * 2 + MiLast[i][3];
		MiLAST[i] = t;
	}
	printf("得到的64位密文，用16进制表示： \n");
	for (int i = 0; i < 16; i++){
		printf("%0x", MiLAST[i]);		
	}
	printf("\n");
	/*printf("\n得到的结果用二进制表示： ");
	for (int i = 0; i < 16; i++){
		for (int j = 0; j < 4; j++){
			printf("%d", MiLast[i][j]);
		}
		putchar(' ');
	}
	putchar('\n');*/
	return 0;
}