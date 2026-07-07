#include<iostream>
#include"20260707_Prac1_kaimei.h"
using namespace std;

int main()
{
	//配列
	int arry[INDEX] = {};
	//配列に追加する
	cout << "10個の数値入力\n";
	//配列へ入力する関数を呼びだし
	AddArray(arry, INDEX);
	//偶数と奇数で振り分ける
	cout << "偶数：" << endl;

	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2 == 0)
		{
			cout << arry[i] << "\n";
		}
	}
	cout << "奇数：" << endl;
	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2 != 0)
		{
			cout << arry[i] << "\n";
		}
	}
	return 0;
}