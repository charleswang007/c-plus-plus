/*
範例檔名：fptr_out.cpp
程式開發：郭尚君
*/
#include <fstream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <iomanip>
#include <iostream>

using namespace std; //使用std名稱空間

#define FILEPATH "C:\\C_C++\\ch22\\ex22-12\\Reader.txt"
//定義代表檔案名稱與路徑的filepath常數

void output_file(fstream &); //將檔案內的資料輸出

int main() //主程式開始
{
	fstream file;
	int record_size = sizeof(int) + 8 * sizeof(char);
 	//計算記錄的大小

	file.open(FILEPATH, ios::out | ios::in | ios::binary);
	//開啟檔案為2進制輸出/入模式
	if(!file)	//檢查檔案是否成功開啟
	{
		cerr << "Can't open file!" << endl;
		exit(1);	//在不正常情形下，中斷程式的執行
	}

	file.seekg(0, ios::end);
	cout << "record size : " << record_size << "  file size : ";
    cout <<file.tellg() << endl;

	output_file(file);

	char str[8] = "Herry";

	file.seekp(record_size * 2 + sizeof(int), ios::beg);
	//將輸入指標移至第三筆記錄第二個欄位的起始處
	file.write(str, 8 * sizeof(char));	//將新資料寫入欄位

	cout << endl << "After updating..." << endl;
	output_file(file);

    system("PAUSE");
    return 0;
} //主程式結束

void output_file(fstream & file)
{
	char str[8];
	int id;

	file.seekg(0, ios::beg);	//重新設定檔案輸入指標至檔案開頭

	cout << setw(4) << setiosflags(ios::right) << "ID" 
			<< setw(8) << setiosflags(ios::right) << "Name" << endl;
	cout << "-------------------" << endl;

	file.read((char*) &id, sizeof(int));	//從檔案讀取資料
	file.read((char *) str, 8 * sizeof(char));
	while(!file.eof())	//讀取記錄，若讀取至檔案結尾!file.eof()為假
	{
		cout << setw(4) << setiosflags(ios::right) << id
		     << setw(8) << setiosflags(ios::right) << str << endl;
		file.read((char*) &id, sizeof(int));	//從檔案讀取資料
		file.read((char *) str, 8 * sizeof(char));
	};

	file.clear();	//重新設定資料流錯誤狀態
}
