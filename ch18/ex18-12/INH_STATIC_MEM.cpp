/*
範例檔名：inh_static_mem.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class library_object	//開始宣告類別
{
protected:       //宣告屬性
	char name[30];
	long index;
	static char File_Name[20];	//類別成員屬性
public:        //宣告方法
	library_object(const char * i_name)
	{
		strcpy(name, i_name);
		index = 1;
	}

	void show_data()
	{
		cout << "name : " << name;
		cout << "  index : " << index;
		cout << "  File_Name : " << File_Name << endl;
	}
};

char library_object::File_Name[20];

//以public方法繼承library_object
class Book : public library_object
{
private:
	bool on_shelf;
public:
	Book(const char * name) : library_object(name)	//建構子
	{
		on_shelf = true;
		strcpy(File_Name,"book.txt");	//定義File_Name為book.txt
	}
};

//以public方法繼承library_object
class Reader : public library_object
{
public:
	Reader(const char * name) : library_object(name)	//建構子
	{strcpy(File_Name,"reader.txt"); }	//定義File_Name為reader.txt
};

int main()    //主程式開始
{
	Reader A_Reader("John");
 	//宣告Reader物件，並定義File_Name

	A_Reader.show_data();
 	//顯示A_Reader物件的內容

	Book A_Book("The C++ Bible");
    //宣告Book物件，並重新定義File_Name

	A_Reader.show_data();
 	//再次顯示A_Reader物件的內容

    system("PAUSE");
    return 0;
} //主程式結束
