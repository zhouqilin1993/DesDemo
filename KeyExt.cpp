#include "stdafx.h"

int KeyExt()
{

	int Key_temp[64] = { 0 };
	//int Key1[56] = { 0 };
	for (int i = 0; i < 16; i++){
		for (int j = 0; j < 4; j++){
			Key_temp[i * 4 + j] = Cipher[i][j];
		}		
	}
	////64λ��Կ��ѡ��56λ
	//int t = 0;
	//for (int i = 0; i < 64; i++){
	//	if (((i+1) % 8) != 0){
	//		Key1[t++] = Key_temp[i];
	//	}
	//}
	
	//�û�ѡ��1
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 7; j++){
			Key[i * 7 + j] = Key_temp[PC1[i][j] - 1];
		}
	}

	/*for (int i = 0; i < 56; i++){
		cout << Key1[i];
		if ((i + 1) % 4 == 0)
			cout << ' ';
	}
	cout << endl;*/
	/*for (int i = 0; i < 56; i++){
		cout << Key[i];
		if ((i + 1) % 4 == 0)
			cout << ' ';
	}
*/
	
	//ѭ������
	int KeyLeft[16][56] = { 0 };
	int temp[28] = { 0 };
	//��28λ��0��
	for (int t = 0; t < 28; t++)
		temp[t] = Key[t];
	for (int j = LeftShift[0]; j < 28; j++){
		KeyLeft[0][j - LeftShift[0]] = Key[j];
	}
	for (int j = 28 - LeftShift[0]; j < 28; j++){
		KeyLeft[0][j] = temp[j - 28 + LeftShift[0]];
	}
	//��28λ��0��
	for (int t = 0; t < 28; t++)
		temp[t] = Key[28 + t];
	for (int j = 28 + LeftShift[0]; j < 56; j++){
		KeyLeft[0][j - LeftShift[0]] = Key[j];
	}
	for (int j = 56 - LeftShift[0]; j < 56; j++){
		KeyLeft[0][j] = temp[j - 56 + LeftShift[0]];
	}
	//��28λ��1~15��
	for (int i = 1; i < 16; i++){
		for (int t = 0; t < 28; t++)
			temp[t] = KeyLeft[i-1][t];

		for (int j = LeftShift[i]; j < 28; j++){
			KeyLeft[i][j - LeftShift[i]] = KeyLeft[i-1][j];
		}
		for (int j = 28 - LeftShift[i]; j < 28; j++){
			KeyLeft[i][j] = temp[j - 28 + LeftShift[i]];
		}
	}
	
	//��28λ��1~15��
	for (int i = 1; i < 16; i++){
		for (int t = 0; t < 28; t++)
			temp[t] = KeyLeft[i - 1][28+t];

		for (int j = 28+LeftShift[i]; j < 56; j++){
			KeyLeft[i][j - LeftShift[i]] = KeyLeft[i - 1][j];
		}
		for (int j = 56 - LeftShift[i]; j < 56; j++){
			KeyLeft[i][j] = temp[j - 56 + LeftShift[i]];
		}
	}
	//ѡ���û�2
	
	for (int i = 0; i < 16; i++){
		for (int t = 0; t < 48; t++){
			int m = t / 8;
			int n = t % 8;
			KEY[i][t] = KeyLeft[i][PC2[m][n]-1];
		}		
	}
	//16����Կ��չ��ʾ
	/*for (int i = 0; i < 16; i++){
		for (int t = 0; t < 48; t++){
			cout << KEY[i][t];
		}
		cout << endl;
	}*/


	return 0;
}

