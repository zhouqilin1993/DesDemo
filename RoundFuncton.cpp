#include "stdafx.h"


int RoundFunction(int n){
	int MingT[64] = { 0 };
	int Mi_temp[64] = { 0 };

	int L_temp[32] = { 0 };
	int R_temp[32] = { 0 };
	int TEMP_Mi[64] = { 0 };

	//≥ı º÷√ªª
	for (int i = 0; i < 64; i++){
		MingT[i] = MingText[IP[i / 8][i % 8]-1];
		Mi_temp[i] = MingT[i];
	}
	//n¬÷¬÷∫Ø ˝◊˜”√	
	for (int i = 0; i < n; i++){
		int temp[32] = { 0 };
		int R1[48] = { 0 };
		int R2[48] = { 0 };

		int R4[32] = { 0 };
		if (i == 0){
			for (int j = 0; j < 32; j++){
				L_temp[j] = Mi_temp[j];
			}
			for (int j = 0; j < 32; j++){
				R_temp[j] = Mi_temp[32 + j];
			}
		}
		
		for (int j = 0; j < 32; j++){
			temp[j] = R_temp[j];
		}
		for (int t = 0; t < 48; t++){
			R1[t] = temp[E[t / 6][t % 6]-1];
		}
		for (int m = 0; m < 48; m++){
			R2[m] = (R1[m] ^ KEY[N_Key[i]][m]);
		}
		for (int a = 0; a < 8; a++){
			for (int b = 0; b < 6; b++){
				R3[a][b] = R2[a * 6 + b];
			}
		}
		//S-BOX—°‘Ò
		for (int j = 0; j < 8; j++){
			S_Box(j);
		}
		for (int m = 0; m < 8; m++){
			for (int n = 0; n < 4; n++){
				R4[m * 4 + n] = S[m][n];
			}
		}
		//P-÷√ªª
		int R5[32] = { 0 };
		for (int m = 0; m < 32; m++){
			R5[m] = R4[P[m / 8][m % 8]-1];
		}
		int R_TEMP[32] = { 0 };
		for (int j = 0; j < 32; j++){
			R_TEMP[j] = (R5[j] ^ L_temp[j]);
		}
		
		for (int j = 0; j < 32; j++){
			TEMP_Mi[j] = R_temp[j];
		}
		for (int j = 32; j < 64; j++){
			TEMP_Mi[j] = R_TEMP[j-32];
		}


		//16¬÷÷µµ√ ‰≥ˆ
		/*for (int i = 0; i < 32; i++){
			printf("%d", L_temp[i]);
		}
		printf(" ");
		for (int i = 0; i < 32; i++){
			printf("%d", R_temp[i]);
		}
		printf("\n");*/
		//*****************
		for (int j = 0; j < 32; j++){
			L_temp[j] = TEMP_Mi[j];
		}
		for (int j = 32; j < 64; j++){
			R_temp[j-32] = TEMP_Mi[j];
		}
			
				
	}	
	//32Œªª•ªª
	for (int i = 0; i < 32; i++){
		int temp;
		temp = TEMP_Mi[i];
		TEMP_Mi[i] = TEMP_Mi[32 + i];
		TEMP_Mi[32 + i] = temp;
	}
	
	//≥ı º÷√ªªµƒƒÊ÷√ªª
	for (int i = 0; i < 64; i++){
		Mi_last[i] = TEMP_Mi[IP_I[i/8][i%8]-1];
	}
	/*for (int i = 0; i < 16; i++){
		for (int j = 0; j < 48; j++){
			printf("%d", KEY[i][j]); 
		}
		printf("\n");
	}*/

	return 0;
}