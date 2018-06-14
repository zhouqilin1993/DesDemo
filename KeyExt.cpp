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
	////64位密钥挑选出56位
	//int t = 0;
	//for (int i = 0; i < 64; i++){
	//	if (((i+1) % 8) != 0){
	//		Key1[t++] = Key_temp[i];
	//	}
	//}
	
	//置换选择1
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
	
	//循环左移
	int KeyLeft[16][56] = { 0 };
	int temp[28] = { 0 };
	//左28位第0次
	for (int t = 0; t < 28; t++)
		temp[t] = Key[t];
	for (int j = LeftShift[0]; j < 28; j++){
		KeyLeft[0][j - LeftShift[0]] = Key[j];
	}
	for (int j = 28 - LeftShift[0]; j < 28; j++){
		KeyLeft[0][j] = temp[j - 28 + LeftShift[0]];
	}
	//右28位第0次
	for (int t = 0; t < 28; t++)
		temp[t] = Key[28 + t];
	for (int j = 28 + LeftShift[0]; j < 56; j++){
		KeyLeft[0][j - LeftShift[0]] = Key[j];
	}
	for (int j = 56 - LeftShift[0]; j < 56; j++){
		KeyLeft[0][j] = temp[j - 56 + LeftShift[0]];
	}
	//左28位第1~15次
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
	
	//右28位第1~15次
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
	//选择置换2
	
	for (int i = 0; i < 16; i++){
		for (int t = 0; t < 48; t++){
			int m = t / 8;
			int n = t % 8;
			KEY[i][t] = KeyLeft[i][PC2[m][n]-1];
		}		
	}
	//16轮密钥扩展显示
	/*for (int i = 0; i < 16; i++){
		for (int t = 0; t < 48; t++){
			cout << KEY[i][t];
		}
		cout << endl;
	}*/


	return 0;
}

