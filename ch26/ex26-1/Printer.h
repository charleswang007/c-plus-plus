/*
範例檔名：Printer.h
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Printer  //宣告Printer類別
{
private: 
	int Serial_Number;  //宣告Printer類別的屬性
public:
	void Hello()  //宣告Printer類別的方法
	{
	    cout << "Hello C++ ! " << endl;  //印出Hello C++ !
	}
};    //完成Printer類別的宣告

