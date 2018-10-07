/*
範例檔名：friend_function.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Book           //開始宣告類別
{
private:       //宣告屬性
	char name[30];
	long index;	//靜態屬性
	bool on_shelf;	//bool資料型態的值為 true 或 false
	friend void insert_book(const char *, long);
 	//宣告 insert_book 函數為朋友函數
public:
	void show_data();		//輸出物件資料
};

void Book::show_data()		//輸出物件資料
{
	cout << "name : " << name;
	cout << "  index : " << index;
	if (on_shelf == true)
		cout << "  On sehlf\n";
	else
		cout << "  Not on sehlf\n";
}

int main()    //主程式開始
{	
	insert_book("The C++ Bible",1);	//呼叫insert_book函數

    system("PAUSE");
    return 0;
} //主程式結束

void insert_book(const char *name, long index)
{
	Book A_Book;	//宣告一個Book物件

	A_Book.index = index;	//設定 Book 物件的 index
	strcpy(A_Book.name, name);	//設定 Book 物件的 name
	A_Book.on_shelf = true;	//設定 Book 物件的 on_shelf

	A_Book.show_data();	//顯示A_Book物件資料
}

