/*
範例檔名：check_error.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int main()	//主程式開始
{
	int i;

	cout << "Please input a integer : " << endl;
	cin >> i;	//讀取一個整數

	//輸出資料流錯誤檢查函數的檢查結果
	cout << "good() = " << cin.good() << endl;
	cout << "eof() = " << cin.eof() << endl;
	cout << "fail() = " << cin.fail() << endl;
	cout << "bad() = " << cin.bad() << endl << endl;

	cin.clear();	//重設錯誤狀態位元

	cout << "Reset error state ..." << endl;
	cout << "good() = " << cin.good() << endl;
	cout << "eof() = " << cin.eof() << endl;
	cout << "fail() = " << cin.fail() << endl;
	cout << "bad() = " << cin.bad() << endl;

    system("PAUSE");
    return 0;
} //主程式結束
