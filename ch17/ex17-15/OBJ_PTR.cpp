/*
範例檔名：obj_ptr.cpp
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
	long index;
public:        
	Book(char * i_name) : index(-1) //建構子
	{
        strcpy(name, i_name);
    }

	//宣告方法
 	void show_data()  //輸出物件資料
    {
	   cout << "name : " << name << "  index : " << index << endl;
    }
};

int main() //主程式開始
{
	Book A_Book("The C++ Bible");
	Book *book_ptr = &A_Book;   //宣告book_ptr為物件指標

	book_ptr->show_data();		//呼叫物件的show_data成員函數

    system("PAUSE");
    return 0;
} //主程式結束


