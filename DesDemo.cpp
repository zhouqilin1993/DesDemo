// DesDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "请输入64位二进制的明文，用16进制表示：" << endl;
	PlainTextIn();
	cout << "请输入64位二进制的密钥，用16进制表示：" << endl;
	CipherTextIn(); 
	//扩展密钥,获得16轮密钥
	KeyExt();

	////加密的密钥使用顺序
	//for (int i = 0; i < 16; i++){
	//	N_Key[i] = i;
	//}
	//解密的密钥使用顺序
	for (int i = 0; i < 16; i++){
		N_Key[i] = 15-i;
	}

	int n = 16;  //加密轮数
	RoundFunction(n);

	OutputText();
	//明文：  02468aceeca86420    密钥：  0f1571c947d9e859
	return 0;
}

