/*
範例檔名：inh_ini.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class library_object	//開始宣告類別
{
protected: //宣告屬性
	char name[30];
	long index;
public: //宣告方法
	library_object() //預設建構子
	{
		cout << "library_object's default constructor" << endl;
	}

	library_object(const char * i_name)	//一個參數的建構子
	{
		cout << "library_object's 1-parament constructor" << endl;
		strcpy(name, i_name);
		index = 1;
	}
};

//以public方法繼承library_object
class Book : public library_object
{
private:
	bool on_shelf;
public:
	Book()	//預設建構子
	{
		cout << "Book's default constructor" << endl;
	}

 	//呼叫library_object的建構子
	Book(const char * name) : library_object(name)
	{
		cout << "Book's 1-parameter constructor" << endl;
		on_shelf = true;	//設定Book特有的on_shelf屬性
	}
};

int main()    //主程式開始
{
	Book A_Book("The C++ Bible");	//宣告Book物件
	Book B_Book;

    system("PAUSE");
    return 0;
} //主程式結束
