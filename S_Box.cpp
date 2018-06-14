#include "stdafx.h"

int S_Box(int i)
{
	int a = 0;
	int b = 0;
	//S1
	a = 2 * R3[i][0] + R3[i][5];
	b = 8 * R3[i][1] + 4 * R3[i][2] + 2 * R3[i][3] + R3[i][4];

	int N = 0;
	switch (i)
	{
	case 0: N = S1[a][b]; break;
	case 1: N = S2[a][b]; break;
	case 2: N = S3[a][b]; break;
	case 3: N = S4[a][b]; break;
	case 4: N = S5[a][b]; break;
	case 5: N = S6[a][b]; break;
	case 6: N = S7[a][b]; break;
	case 7: N = S8[a][b]; break;
	default:
		break;
	}

	switch (N)
	{
	case 0:
		S[i][0] = 0;
		S[i][1] = 0;
		S[i][2] = 0;
		S[i][3] = 0;
		break;
	case 1:
		S[i][0] = 0;
		S[i][1] = 0;
		S[i][2] = 0;
		S[i][3] = 1;
		break;
	case 2:
		S[i][0] = 0;
		S[i][1] = 0;
		S[i][2] = 1;
		S[i][3] = 0;
		break;
	case 3:
		S[i][0] = 0;
		S[i][1] = 0;
		S[i][2] = 1;
		S[i][3] = 1;
		break;
	case 4:
		S[i][0] = 0;
		S[i][1] = 1;
		S[i][2] = 0;
		S[i][3] = 0;
		break;
	case 5:
		S[i][0] = 0;
		S[i][1] = 1;
		S[i][2] = 0;
		S[i][3] = 1;
		break;
	case 6:
		S[i][0] = 0;
		S[i][1] = 1;
		S[i][2] = 1;
		S[i][3] = 0;
		break;
	case 7:
		S[i][0] = 0;
		S[i][1] = 1;
		S[i][2] = 1;
		S[i][3] = 1;
		break;
	case 8:
		S[i][0] = 1;
		S[i][1] = 0;
		S[i][2] = 0;
		S[i][3] = 0;
		break;
	case 9:
		S[i][0] = 1;
		S[i][1] = 0;
		S[i][2] = 0;
		S[i][3] = 1;
		break;
	case 10:
		S[i][0] = 1;
		S[i][1] = 0;
		S[i][2] = 1;
		S[i][3] = 0;
		break;
	case 11:
		S[i][0] = 1;
		S[i][1] = 0;
		S[i][2] = 1;
		S[i][3] = 1;
		break;
	case 12:
		S[i][0] = 1;
		S[i][1] = 1;
		S[i][2] = 0;
		S[i][3] = 0;
		break;
	case 13:
		S[i][0] = 1;
		S[i][1] = 1;
		S[i][2] = 0;
		S[i][3] = 1;
		break;
	case 14:
		S[i][0] = 1;
		S[i][1] = 1;
	    S[i][2] = 1;
		S[i][3] = 0;
		break;
	case 15:
		S[i][0] = 1;
		S[i][1] = 1;
		S[i][2] = 1;
		S[i][3] = 1;
		break;
	default:
		break;
	}
	
	return 0;
}