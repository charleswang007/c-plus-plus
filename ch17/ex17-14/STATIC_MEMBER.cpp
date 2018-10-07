/*
範例檔名：static_member.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Book //開始宣告類別
{
private: //宣告屬性
	static int book_num; //將book_num宣告為靜態屬性
 	char name[30];
public:
	Book(const char * i_name)	//建構子
	{
		book_num += 1;	//將book_num加1
		strcpy(name, i_name);
	}

    ~Book()
    {
        book_num -= 1;
    }

    static int get_book_num_static()
    {
        return book_num;
    }

    int get_book_num()
    {
        return book_num;
    }
};

int Book::book_num = 0;		//定義靜態屬性

int main()    //主程式開始
{
	Book A_Book("The C++ Bible");

    cout << "A_Book.get_book_num() : " ;
    cout << A_Book.get_book_num() << endl;
    //透過成員函數取得靜態資料成員

    cout << "A_Book.get_book_num_static() : "
         << A_Book.get_book_num_static() << endl;
    //透過靜態成員函數取得靜態資料成員

    cout << "Book::get_book_num_static() : "
         << Book::get_book_num_static() << endl;
    //運用::運算子，運用類別名稱呼叫靜態成員函數

    system("PAUSE");
    return 0;
} //主程式結束
