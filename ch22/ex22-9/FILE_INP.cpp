/*
範例檔名：file_inp.cpp
程式開發：郭尚君
*/
#include <fstream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <iomanip>
#include <iostream>

using namespace std; //使用std名稱空間

#define FILEPATH "C:\\C_C++\\ch22\\ex22-9\\Reader.txt"
//定義代表檔案名稱與路徑的FILEPATH常數

int main()	//主程式開始
{
	fstream file;
	char str[8];
	int id;

	file.open(FILEPATH, ios::in);	//將檔案開啟為輸入狀態

	if(!file)	//檢查檔案是否成功開啟
	{
		cerr << "Can't open file!" << endl;
		exit(1);	//在不正常情形下，中斷程式的執行
	}

	cout << setw(4) << setiosflags(ios::right) << "ID" 
			<< setw(8) << setiosflags(ios::right) << "Name" << endl;
	cout << "-------------------" << endl;
	while(file >> id >> str)	//讀取記錄，若讀取至檔案結尾則傳回0
			cout << setw(4) << setiosflags(ios::right) << id
				 << setw(8) << setiosflags(ios::right) << str << endl;
	//從檔案讀取資料

    system("PAUSE");
    return 0;
} //主程式結束
