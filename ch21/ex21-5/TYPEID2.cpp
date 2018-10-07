/*
範例檔名：typeid2.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <typeinfo> //載入定義typeid運算子之標頭檔
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

template <class TYPE>	//宣告兩個參數的樣版函數
void Max(TYPE a, TYPE b)
{
	cout << "data type : ";
	cout << typeid(TYPE).name();	//顯示套用樣版的資料型態
	cout << endl;
}	//完成樣版函數宣告

int main()			//主程式開始
{
	int a = 2, b = 3;
	char c = 'A' , d = 'B';

	Max(a,b);	//將整數傳入樣版函數
	Max(c,d);	//將字元傳入樣版函數

    system("PAUSE");
    return 0;
} //主程式結束
