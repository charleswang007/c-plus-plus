/*
範例檔名：out_of_range.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <stdexcept> //載入stdexcept

using namespace std; //使用std名稱空間

int main() //主程式開始
{
	string * s;

	try{
		s = new string("John");
		s->substr(10, 2);
        //超出字串的大小，將丟出out_of_range物件
	}
	catch (out_of_range o)
    { cout << "Throw an exception (out_of_range) : " << o.what() << endl; }
	catch (bad_alloc ba)
    { cout << "Throw an exception (bad_alloc) : " << ba.what() << endl; }
	//輸出錯誤訊息

    system("PAUSE");
    return 0;
} //主程式結束
