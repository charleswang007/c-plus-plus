/*
範例檔名：Librarian.cpp
程式開發：郭尚君
*/
#include <iostream>
#include "Librarian.h"
#include "Database.h"
#include "Reader.h"
#include "Book.h"

using namespace std;

void Librarian::CheckOut()	//借書作業
{
	char r_name[20], b_name[40];
	Database<Reader> ReaderDB;
	Database<Book> BookDB;
	try{
		cout << "Please input Reader's name :" << endl;
		cin >> r_name;
		Reader * reader = ReaderDB.Query(r_name);
     	//尋找欲借書的讀者資料

		cout << "Please input Book's name :" << endl;
		cin.ignore(1);
		cin.get(b_name, 40, '\n') ;
		Book * book = BookDB.Query(b_name);	//欲借出的書籍資料
		book->CheckOut();	//設定該書被借出
		reader->BorrowBook(book->GetIndex());	//增加讀者的借書記錄
	}
	catch(string s) { cerr << s;}
}

void Librarian::BookData()	//維護書籍資料
{
	char choice = 'I';
	char b_name[40];
	Database<Book> BookDB; //宣告一個操作Book檔案的Database物件
	Book * book;

	while ( !(choice == 'E' || choice == 'e') )
	{
		cout << "Maintain Book Database" << endl;
		cout << "(I)nsert new data, (U)pdate data, (D)elete data,"
			 <<	" (Q)uery data, (S)how all data, (E)xit  : " << endl;
		cin >> choice;	//選擇欲執行的動作
		
		try{
			switch(choice)
			{
			case 'i':
			case 'I':	//新增書籍資料
				cout << "Please input a Book's name : " << endl;
				cin.ignore(1);
				cin.get(b_name, 40, '\n');
				book = new Book(b_name);
				BookDB.Insert(*book);	//將書籍資料插入
				break;
			case 'u':
			case 'U':	//更改書籍資料
				cout << "Please input Book's name : " << endl;
				cin.ignore(1);
				cin.get(b_name, 40, '\n');

				book = BookDB.Query(b_name); //尋找欲更改的書籍資料

				cout << "Please input Book's new name :" << endl;
				cin.ignore(1);
				cin.get(b_name, 40, '\n');
				book->SetName(b_name);	//重新設定該書籍的名稱
				break;
			case 'd':
			case 'D':	//刪除書籍資料
				cout << "Please input Book's name : " << endl;
				cin.ignore(1);
				cin.get(b_name, 40, '\n');
				BookDB.Delete(b_name);	//刪除書籍資料
				break;
			case 'q':
			case 'Q':	//查詢書籍資料，這個功能留給您練習
				cout << "Let you practice!" << endl;
				break;
			case 's':
			case 'S':	//顯示Database中所有書籍資料
				BookDB.ShowAllData();
				break;
			case 'e':
			case 'E':	//離開系統
				break;
			default:
				cout << "Don't provide this function !" << endl;
			}
		}
		catch(string s) { cerr << s;}
	};
}

void Librarian::ReaderData()	//維護讀者資料
{
	char choice = 'I' , r_name[40];		
	Database<Reader> ReaderDB;
    //宣告一個操作Reader檔案的Database物件
	Reader * reader;
		
	while ( !(choice == 'E' || choice == 'e') )
	{
		cout << "Maintain Reader Database" << endl;
		cout << "(I)nsert new data, (U)pdate data, (D)elete data,"
  			 << " (Q)uery data, (S)how all data, (E)xit  : " << endl;
		cin >> choice;	//選擇欲執行的動作

		try{
			switch(choice)
			{
			case 'i':
			case 'I':	//新增讀者資料
				cout << "Please input a Reader's name : " << endl;
				cin >> r_name;
				reader = new Reader(r_name);
				ReaderDB.Insert(*reader);
				break;
			case 'u':
			case 'U':	//更改讀者資料
				cout << "Please input Reader's name : " << endl;
				cin >> r_name;
				reader = ReaderDB.Query(r_name);
      	        //尋找欲更改的讀者資料
			
				cout << "Please input Reader's new name :" << endl;
				cin >> r_name;
				reader->SetName(r_name);	//重新設定該讀者的姓名
				break;
			case 'd':
			case 'D':	//刪除讀者資料
				cout << "Please input Reader's name : " << endl;
				cin >> r_name;
	
				ReaderDB.Delete(r_name);	//刪除讀者資料
				break;
			case 'q':
			case 'Q':	//查詢讀者資料，這個功能留給您練習
				cout << "Let you practice!" << endl;
				break;
			case 's':
			case 'S':	//顯示Database中所有讀者資料
				ReaderDB.ShowAllData();
				break;
			case 'e':
			case 'E':	//離開系統
				break;
			default:
				cout << "Don't provide this function !" << endl;
			}
		}
		catch(string s) { cerr << s;}
	};
}
