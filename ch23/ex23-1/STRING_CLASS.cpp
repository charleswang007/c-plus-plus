/*
範例檔名：string_class.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <string> //載入定義sring類別的標頭檔
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int main() //主程式開始
{
	char p[5] = "John";
	string s1("string"); //利用字串建立物件
	string s2(s1);	//利用s1物件建立s3物件
	string s3(s1, 2, 4);
    //利用s1物件第2個字元後4個字元（ring）建立s4物件

	string s4;	//宣告一個沒有資料的s4字串
	string s5(5, '*'); //利用5個*號建立字串
	string s6(p +1, p+3); //利用 p 字元陣列建立字串物件
	string s7 = s1;	//複製s1物件

	cout << " s1 = " << s1 << " s2 = " << s2 << " s3 = " << s3 << endl;
	cout << " s4 = " << s4 << " s5 = " << s5 << " s6 = " << s6 << endl;
	cout << " s7 = " << s7 << endl;

    system("PAUSE");
    return 0;
} //主程式結束
