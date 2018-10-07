/*
範例檔名：file_out.cpp
程式開發：郭尚君
*/
#include <fstream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <iostream>

using namespace std; //使用std名稱空間

#define FILEPATH "C:\\C_C++\\ch22\\ex22-8\\Reader.txt"
//定義代表檔案名稱與路徑的FILEPATH常數

int main()	//主程式開始
{
	fstream file;
	char *str[4] = {"Mary","John","Judy","Joe"};	//宣告字串指標陣列
	int id[4] = {100,200,300,400};

	file.open(FILEPATH, ios::out);	//開啟檔案

	if(!file)	//檢查檔案是否成功開啟
	{
		cerr << "Can't open file!" << endl;
		exit(1);	//在不正常情形下，中斷程式的執行
	}

	for(int i = 0; i < 4; i++)
	{
		file << id[i] << " " << str[i] << endl;
	}	//將資料輸出至檔案

    system("PAUSE");
    return 0;
} //主程式結束
