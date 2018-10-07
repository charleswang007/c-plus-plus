/*
範例檔名：Reader.h
程式開發：郭尚君
*/
#include <iostream>
#include "LibraryObject.h"

using namespace std;

//Reader繼承於LibraryObject
class Reader : public LibraryObject
{
private:
	int BorBookList[10];	//借書記錄
	static const char FileName[40];
    //儲存Reader物件的檔案名稱
public:	//成員函數
	Reader(const char *) ;//建構子
	Reader( ) {}

	void BorrowBook(int);	//借書
	static const char * GetFileName( )	//輸出儲存資料的檔案
    { return FileName;}
	void ShowData();	//顯示資料
};


