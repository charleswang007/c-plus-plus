/*
範例檔名：manipulator.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <iomanip>	//載入iomanip標頭檔

using namespace std; //使用std名稱空間

int main() //主程式開始
{
	double d = 24.5467865;
	int n = 24;

	cout << "Using manipulator oct , setw() and setiosflags...";
    cout << endl;
	cout << oct << setw(10) << right << n << endl;
	//將數值轉換為8進位制輸出, 以setw設定欄位寬度為10，且靠右對齊

	cout << "Using manipulator setprecision and resetiosflags...";
    cout << endl;
	cout << setiosflags(ios::scientific) << setprecision(4) << d;
	//運用setiosflags格式控制子設定浮點數以科學記號輸出，
	//且精確度為小數點後4位

    cout << endl;

	cout << resetiosflags(ios::scientific) << d << endl;
	//運用resetiosflags格式控制子
    //清除浮點數以科學記號輸出浮點數的設定

    system("PAUSE");
    return 0;
} //主程式結束
