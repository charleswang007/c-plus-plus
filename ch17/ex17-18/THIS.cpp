/*
範例檔名：this.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class this_ptr           //開始宣告類別
{
private:       //宣告屬性
	long index;
public:        //宣告方法
	void show_address()		//輸出this指標
	{ cout << "The address of 'this' pointer : " << this <<endl;}
};

int main()    //主程式開始
{
	this_ptr object;

	cout << "The address of object : " << &object << endl;
 	//輸出物件的位址
	object.show_address();		//顯示this指標指向的位址

    system("PAUSE");
    return 0;
} //主程式結束
