/*
範例檔名：Book.h
程式開發：郭尚君
*/
#include "LibraryObject.h"

//Book繼承於LibraryObject
class Book : public LibraryObject
{
private:
	char name[40];	//書名
	bool OnShelf;	//是否在架上
	static char FileName[40];	//儲存Book物件的檔案名稱
public:	//成員函數
	//建構子
	Book(const char * i_name) : OnShelf(true)
    { strcpy(Book::name, i_name); }
	Book( ) {}
	void CheckOut();	//被借出
	const char * GetName ( ) { return name; }	//取得書名
	void ShowData(); //輸出書的資料
	void SetName(const char * i_name) //設定書名
    { strcpy(name, i_name); }
	static char * GetFileName ( ) //輸出儲存Book物件的檔案名稱
    { return FileName;}
};


