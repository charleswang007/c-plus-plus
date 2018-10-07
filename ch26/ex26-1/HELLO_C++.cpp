/*
範例檔名：Hello_c++.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include "Printer.h"

using namespace std; //使用std名稱空間

int main()
{
	Printer My_Printer;  //依據Printer類別建立My_Printer物件

	My_Printer.Hello();  //呼叫My_Printer物件的方法

    system("PAUSE");
    return 0;
} //主程式結束
