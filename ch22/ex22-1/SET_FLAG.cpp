/*
範例檔名：set_flag.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int main()	//主程式開始
{
	double d = 24.546;
	int n = 24;

	cout.setf(ios::fixed);	//設定fixed旗標，使浮點數以fixed方式顯示
	cout << "Showing number by fixed-point notation...";
    cout << endl << d << endl;

	cout.unsetf(ios::fixed);	//清除fixed旗標
	cout.setf(ios::scientific);	//設定scientific旗標
	cout << "Showing number by scientific notation...";
    cout << endl << d << endl;

	cout.setf(ios::showpos);	//設定showpos旗標
	cout << "Showing positive and negative sign before number...";
	cout  << endl << d << endl;

	cout.setf(ios::oct);	//設定oct旗標，以8進制顯示數字
	cout << "Showing 24 in octal..." << endl << n << endl;

	cout.setf(ios::hex, ios::basefield);
	//清除進制控制旗標，然後設定hex旗標以16進制顯示數字
	cout << "Showing 24 in hexadecimal..." << endl << n << endl;

    system("PAUSE");
    return 0;
} //主程式結束
