/*
範例檔名：fptr_in.cpp
程式開發：郭尚君
*/
#include <fstream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <iomanip>
#include <iostream>

using namespace std; //使用std名稱空間

#define FILEPATH "C:\\C_C++\\ch22\\ex22-11\\Reader.txt"
//定義代表檔案名稱與路徑的FILEPATH常數

int main()	//主程式開始
{
	fstream file;
	char str[4][8] = {"Mary","John","Judy","Joe"};
 	//宣告二維字元陣列

	int id[4] = {100,200,300,400};

	file.open("Reader.txt", ios::out | ios::in | ios::binary | ios::trunc);
	//開啟檔案為2進制輸出模式

	if(!file)	//檢查檔案是否成功開啟
	{
		cerr << "Can't open file!" << endl;
		exit(1);	//在不正常情形下，中斷程式的執行
	}

	for(int i = 0; i < 4; i++)
	{
		file.write((char *) &id[i], sizeof(int)); //將資料輸出至檔案
		file.write(str[i], 8 * sizeof(char));
	}

	char str1[8];
	int id1;
	int record_size = sizeof(int) + 8 * sizeof(char); //計算記錄的大小

	file.seekg(0, ios::end);	//將輸入指標移至檔案尾端
	cout << "record size : " << record_size
         << "  file size : " << file.tellg() << endl;
	//檔案尾端的指標

	cout << setw(4) << setiosflags(ios::right) << "ID" 
			<< setw(8) << setiosflags(ios::right) << "Name" << endl;
	cout << "-------------------" << endl;

	file.seekg(record_size * 2, ios::beg);
    //將輸入指標移至第三筆資料起始處

	file.read((char*) &id1, sizeof(int)); //讀取資料
	file.read(str1, 8 * sizeof(char));

	cout << setw(4) << setiosflags(ios::right) << id1
		<< setw(8) << setiosflags(ios::right) << str1 << endl;

    system("PAUSE");
    return 0;
} //主程式結束
