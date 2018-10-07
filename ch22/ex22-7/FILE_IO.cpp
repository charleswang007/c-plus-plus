/*
範例檔名：file_io.cpp
程式開發：郭尚君
*/
#include <fstream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <iostream>

using namespace std; //使用std名稱空間

#define size 10
#define filepath "C:\\C_C++\\ch22\\ex22-7\\Reader.txt"
//定義代表檔案名稱與路徑的filepath常數

int main()
{
	fstream file;	//宣告fstream物件
	char str[size] = "string", str1[size];

	file.open(filepath, ios::out | ios::trunc);
	//開啟檔案為寫入狀態，若檔案已存在則清除檔案內容重新寫入
	file.write(str, size);	//將str寫入檔案
	file.close();	//關閉檔案

	file.open(filepath, ios::in);	//開啟檔案為讀取狀態
	
	file.read(str1, size);	//從檔案讀取內容給str1
	file.close();	//關閉檔案
	
	cout << "Reading data from file..." << endl << str1 << endl;

    system("PAUSE");
    return 0;
} //主程式結束
