/*
範例檔名：stream_fun.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int main()			//主程式開始
{
	double d = 24.5467865;
	int n = 24;

	cout << "Using ios's member function [width and setf()]...";
    cout << endl;
	cout.width(10);	//使用width設定欄位寬度為10
	cout.setf(ios::oct | ios::right);	//設定oct與right旗標
	cout << n << endl;

	cout << "Using ios's member function [precision]..." << endl;
	cout.precision(4);	//設定精確度為小數點後4位
	cout.setf(ios::scientific);
	cout << d << endl;
	cout.unsetf(ios::scientific);	//清除浮點數以科學記號輸出的設定
	cout << d << endl;

    system("PAUSE");
    return 0;
} //主程式結束
