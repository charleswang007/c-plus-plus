/*
範例檔名：library_tmp_db.cpp
程式開發：郭尚君
*/

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <string.h>
#include "LibraryObject.h"	//載入其他檔案
#include "Reader.h"
#include "Book.h"
#include "Database.h"
#include "Librarian.h"

using namespace std;

int main()			//主程式開始
{
	char choice = 'I';
	Librarian librarian;

	while( !(choice == 'E' || choice == 'e') )
	{
		cout << "check (O)ut, check (I)n, (B)ook's data,";
        cout << " (R)eader's data, (E)xit :" << endl;
		cin >> choice;	//選擇欲執行的功能

		switch(choice)
		{
		case 'o':		
		case 'O':	//借書作業
			librarian.CheckOut();	//呼叫Librarian的借書作業
			break;
		case 'i':		
		case 'I':	//還書作業，留給您練習
			cout << "Let you practice!" << endl;
			break;
		case 'b':		
		case 'B':	//維護書籍資料
			librarian.BookData();			
			break;
		case 'r':		
		case 'R':	//維護讀者資料
			librarian.ReaderData();
			break;
		case 'e':
		case 'E':	//離開系統
			break;
		default:
			cout << "Don't provide this function!" << endl;
		}
	};
}	//主程式結束
