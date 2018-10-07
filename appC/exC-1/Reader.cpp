/*
範例檔名：Reader.cpp
程式開發：郭尚君
*/
#include <iostream>
#include "Reader.h"
using namespace std;

const char Reader::FileName[40] = "C:\\VC++Ex\\ch24\\Library\\Reader.txt";

Reader::Reader(const char * name) : LibraryObject(name)
{
	for(int i = 0; i < 10; ++i)	//起始設定借書記錄
		BorBookList[i] = 0;
}

void Reader::BorrowBook(int BookID)	//借書
{
	for(int i = 0; i < 10; ++i)
	{
		if (BorBookList[i] == 0)
		{
			BorBookList[i] = BookID;	//設定借書記錄
			return;
		}
	}
}

void Reader::ShowData()	//顯示資料
{
	LibraryObject::ShowData();

	cout << endl << "Brorow book's index list : [ ";

	for (int i = 0 ; i < 10; i++)
		cout << BorBookList[i] << " | ";

	cout << "]" << endl;
}
