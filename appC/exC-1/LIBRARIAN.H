/*
範例檔名：Librarian.h
程式開發：郭尚君
*/
#include <iostream>

using namespace std;

#include "LibraryObject.h"

//定義Librarian繼承於LibraryObject
class Librarian : public LibraryObject
{
public:
	void CheckOut();	//借書作業
	void BookData();	//維護書籍資料
	void ReaderData();	//維護讀者資料
};


