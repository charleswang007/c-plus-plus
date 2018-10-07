/*
範例檔名：Book.cpp
程式開發：郭尚君
*/

#include "Book.h"

char Book::FileName[40] = "C:\\VC++\\ch24\\Library\\Book.txt";
//儲存Book物件的檔案為Book.txt

void Book::CheckOut()	//被借出
{	//如果書不在架上，則丟出例外
	if(OnShelf == false)
		throw("Book is not on shelf!\n");
	
	OnShelf = false;	//設定被借出
}

void Book::ShowData()	//輸出書的資料
{
	cout << index << "  " << name << "  ";

	if(OnShelf == false)
		cout << "  Not on shelf" << endl;
	else
		cout << "  On shelf" << endl;
}
