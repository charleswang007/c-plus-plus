/*
範例檔名：const.cpp
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
	const long index;
public:
    //宣告建構子
    Book(long i_index):index(i_index) //運用成員起始序列起始常數屬性
    {
        strcpy(name, "none"); //name屬性的預設初值為none
    }

    //宣告方法
	void show_data() const //輸出物件資料
	{	cout << "name : " << name << " index : " << index << endl; }

	void set_name(char * i_name) //設定index屬性
 	{
        strcpy(name, i_name); //用 strcpy 函數將 i_name 複製給 name
    }

	void set_index(long i_index) //設定index屬性
 	{
       //index = i_index;
       //上一行在編譯時，將產生錯誤，因為index為常數屬性不可修改
    }
};

int main()    //主程式開始
{
	Book A_Book(1245); //宣告Book物件

    A_Book.set_name("The C++ Bible"); //設定name屬性
	A_Book.show_data();	

    const Book B_Book(1235); //宣告const物件

    //B_Book.set_name(""The C++ Bible, 2nd");
    //上一行在編譯時，將產生錯誤，因為B_Book為常數物件，
    //無法呼叫不是const成員函數的set_name成員函數

    B_Book.show_data();
    //可呼叫const物件的const成員函數

    system("PAUSE");
    return 0;
} //主程式結束
