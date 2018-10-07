/*
範例檔名：file_obj.cpp
程式開發：郭尚君
*/
#include <fstream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <iostream>

using namespace std; //使用std名稱空間

class Reader	//開始宣告類別
{
private:	//宣告屬性
	int id;
	char name[10];
	static char file_name[50];
public:	//宣告成員函數
	Reader(const int id, char * r_name) : id(id)
    { strcpy(name, r_name); }
	Reader() { }
	static const char * get_file_name() { return file_name;}
	friend ostream & operator<< (ostream & s, Reader & r);
	friend istream & operator>> (istream & s, Reader & r);
};

char Reader::file_name[50] = "C:\\C_C++\\ch22\\ex22-13\\Reader.txt";

//多載cout物件的'<<'運算子
ostream & operator<< (ostream & s, Reader & r)
{
	cout << r.id << " " << r.name;
	return s;
}

//多載cin物件的'>>'運算子
istream & operator>> (istream & s, Reader & r)
{
	cin >> r.id >> r.name;
	return s;
}

int main()	//主程式開始
{
	Reader * reader[4];	//宣告一個物件指標陣列
	char str[4][8] = {"Mary","John","Judy","Joe"};	//宣告二維字元陣列
    int i;

	for (i = 0; i < 4; i++)
		reader[i] = new Reader((i+1) *100, str[i]);
        //設定物件指標陣列的初值

	fstream obj_file;

	obj_file.open(Reader::get_file_name()
                      , ios::in | ios::out | ios::binary | ios::trunc);

	if(!obj_file)	//檢查檔案是否成功開啟
	{
		cerr << "Can't open file!" << endl;
		exit(1);	//在不正常情形下，中斷程式的執行
	}

	for(i = 0; i < 4; i++)
		obj_file.write((char *) reader[i], sizeof(*reader[i]));
     	//將物件寫入檔案
    Reader a_reader;

	obj_file.seekg(0, ios::beg);	//將檔案讀取指標移至檔案開頭

	obj_file.read((char *) &a_reader, sizeof(Reader));
 	//從檔案中讀取物件

	cout << "Output object from file..." << endl;

	while(!obj_file.eof())	//判斷是否到達檔案結尾
	{
		cout << a_reader << endl;	//輸出Reader物件
		obj_file.read((char *) &a_reader, sizeof(Reader));
	}

    system("PAUSE");
    return 0;
} //主程式結束
