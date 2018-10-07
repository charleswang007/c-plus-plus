/*
範例檔名：event.cpp
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
	bool on_shelf;	//bool資料型態的值為 true 或 false
public:
	Book(char * name) : index(-1), on_shelf(true) //一般建構子
	{	set_name(name); }

	//宣告方法
	void set_name( char * i_name) { strcpy(name, i_name); }
	void show_data();		//輸出物件資料
	bool lend_out();	//借出
};

//定義成員函數
void Book::show_data()		//輸出物件資料
{
	cout << "name : " << name;
	cout << "  index : " << index;

	if (on_shelf == true)
		cout << "  On sehlf" << endl;
	else
		cout << "  Not on sehlf" << endl;
}

bool Book::lend_out()
{
	if ( on_shelf == true ){ //如果on_shelf為true才能借出
		on_shelf = false; //借出Book物件後，將on_shelf改變為false
		return true; //Book物件被借出，傳回true
	}
	else
		return false; //Book物件不在架上無法借出，傳回false
}

int main()    //主程式開始
{
	char name[30] = "The C++ Bible";	
	Book A_Book(name);	//呼叫型態轉換建構子，將 1 轉換為 long 型態
	
	cout << "Before lend out..." << endl;
	A_Book.show_data();	//顯示物件資料

	A_Book.lend_out();	//A_Book被借出了

	cout << "After lend out..." << endl;
	A_Book.show_data();	

    system("PAUSE");
    return 0;
} //主程式結束
