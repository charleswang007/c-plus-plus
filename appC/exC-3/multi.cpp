/*
範例檔名：multi.cpp
程式開發：楊青長、郭尚君
*/

#include <iostream> //載入的標頭檔
using namespace std; //定義使用std命名空間

int main(void)
{
	int i, j; //宣告變數，乘法表之乘數i與被乘數j

	for(i=1;i<=9;i++){ //控制乘法表中乘數的迴圈
		for(j=1;j<=9;j++){ //控制乘法表中被乘數的迴圈
			cout << i << "*" << j << "=" << (i*j) << "\t";
			//乘法表之單項
		}
		cout << endl; //乘法表每一列之換行
	}

	system("PAUSE"); //暫停程式執行
	return 0; //程式正常結束，傳回0
}