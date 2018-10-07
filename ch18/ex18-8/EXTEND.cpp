/*
範例檔名：extend.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class library_object //開始宣告類別
{
protected: //宣告屬性
	char name[30];
	long index;
public: //宣告方法
	void set_data(const char * i_name)
	{
		strcpy(name, i_name);
		index = 1;
	}
	void show_data() //輸出物件資料
	{
		cout << "name : " << name;
		cout << "  index : " << index;
	}
};

//以public方法繼承library_object
class Book : public library_object
{
private:
	bool on_shelf;
public:
	void set_data(const char * name)
	{
		library_object::set_data(name);
        //呼叫library_object的set_data成員函數
		on_shelf = true;
	}
	void show_data()	//輸出物件資料
	{
		library_object::show_data();
        //呼叫library_object的show_data成員函數

		if (on_shelf == true)
			cout << "  On sehlf" << endl;
		else
			cout << "  Not on sehlf" << endl;
	}
};

int main()    //主程式開始
{
	Book A_Book;	//宣告Book物件

	A_Book.set_data("The C++ Bible");
	A_Book.show_data();

    system("PAUSE");
    return 0;
} //主程式結束
