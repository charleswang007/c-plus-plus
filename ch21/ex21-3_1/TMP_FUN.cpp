/*
範例檔名：tmp_fun.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

//定義兩個型別參數的樣版函數
template <typename TYPE> void Max(TYPE a, TYPE b)
{
	cout << "Maxium is ";

	if( a > b)
		cout << a;	
	else
		cout << b;

	cout << "." << endl;
}	//完成樣版函數宣告

int main() //主程式開始
{
	int a = 2, b = 3; //宣告整數陣列
	char c = 'A' , d = 'B';	//宣告字元陣列

	Max(a,b); //將整數傳入樣版函數
	Max(c,d); //將字元傳入樣版函數

    system("PAUSE");
    return 0;
} //主程式結束
