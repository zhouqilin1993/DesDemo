// DesDemo.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "������64λ�����Ƶ����ģ���16���Ʊ�ʾ��" << endl;
	PlainTextIn();
	cout << "������64λ�����Ƶ���Կ����16���Ʊ�ʾ��" << endl;
	CipherTextIn(); 
	//��չ��Կ,���16����Կ
	KeyExt();

	////���ܵ���Կʹ��˳��
	//for (int i = 0; i < 16; i++){
	//	N_Key[i] = i;
	//}
	//���ܵ���Կʹ��˳��
	for (int i = 0; i < 16; i++){
		N_Key[i] = 15-i;
	}

	int n = 16;  //��������
	RoundFunction(n);

	OutputText();
	//���ģ�  02468aceeca86420    ��Կ��  0f1571c947d9e859
	return 0;
}

