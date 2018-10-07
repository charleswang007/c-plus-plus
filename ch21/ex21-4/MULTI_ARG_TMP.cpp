/*
範例檔名：multi_arg_tmp.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

//定義兩個型別參數的樣版函數
template <class TYPE_1, class TYPE_2> void Max(TYPE_1 a, TYPE_2 b)
{
	cout << "Maxium is ";

	if( a > b)
		cout << a;	
	else
		cout << b;

	cout << "." << endl;
}	//完成樣版函數宣告

int main()	//主程式開始
{
	double a = 5.1;
	int b = 2;

	Max(a,b); //呼叫樣版函數

    system("PAUSE");
    return 0;
} //主程式結束
