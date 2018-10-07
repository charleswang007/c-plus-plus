/*
範例檔名：out_fun.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

#define size 10

int main()			//主程式開始
{
	char ch, str[size];

	cout << "Please input a char : " << endl;
	cin.get(ch); //讀入一個字元
	cout << "Getting a char with cin.get() : " << endl;
    cout << ch << endl;
	
	cout << "Please input a string : " << endl;
	cin >> str;	//讀入一個字串
	cout << "Getting a string with operator >> : " << endl;
    cout << str << endl;

	cin.get(str, size);	//讀入大小為size的字串
	cout << "Getting a string with cin.get() : " << endl;
    cout << str << endl;

	cin.ignore(10, '\n');	//忽略資料流中\n之前，至多10個字元
	cout << "Please input a string : " << endl;
	cin.getline(str, size, '\n');
  	//讀取\n之前，至多size個字元，進入str陣列

	cout << "Getting a string with cin.getline() :" << endl;
    cout << str << endl;
	cout << cin.gcount() << " chars in string." << endl;
	//輸出前一次getline所讀取的字元數

    system("PAUSE");
    return 0;
} //主程式結束
