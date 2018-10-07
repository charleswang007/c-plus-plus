/*
範例檔名：binary_mode.cpp
程式開發：郭尚君
*/
#include <fstream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <iomanip>
#include <iostream>

using namespace std; //使用std名稱空間

#define FILEPATH "C:\\C_C++\\ch22\\ex22-10\\Reader.txt"
//定義代表檔案名稱與路徑的FILEPATH常數

int main() //主程式開始
{
	fstream file;
	char str[4][8] = {"Mary","John","Judy","Joe"};	//宣告二維字元陣列
	int id[4] = {100,200,300,400};

	file.open(FILEPATH, ios::out | ios::binary | ios::trunc);
			//開啟檔案為2進制輸出模式
	if(!file)	//檢查檔案是否成功開啟
	{
		cerr << "Can't open file!" << endl;
		exit(1); //在不正常情形下，中斷程式的執行
	}

	for(int i = 0; i < 4; i++)
	{
		file.write((char *) &id[i], sizeof(int)); //將資料輸出至檔案
		file.write(str[i], 8 * sizeof(char));
	}

	char str1[8];
	int id1;

	file.close();
	file.open(FILEPATH, ios::in | ios::binary);
 	//將檔案開啟為2進制輸入模式

	if(!file)	//檢查檔案是否成功開啟
	{
		cerr << "Can't open file!" << endl;
		exit(1);	//在不正常情形下，中斷程式的執行
	}

	cout << setw(4) << setiosflags(ios::right) << "ID" 
			<< setw(8) << setiosflags(ios::right) << "Name" << endl;
	cout << "-------------------" << endl;

	file.read((char*) &id1, sizeof(int));
	file.read(str1, 8 * sizeof(char));

	while(!file.eof())	//讀取記錄，若讀取至檔案結尾!file.eof()為假
	{
		cout << setw(4) << setiosflags(ios::right) << id1
				<< setw(8) << setiosflags(ios::right) << str1 << endl;
		file.read((char*) &id1, sizeof(int));	//從檔案讀取資料
		file.read((char *) str1, 8 * sizeof(char));
	}

    system("PAUSE");
    return 0;
} //主程式結束
