/*
範例檔名：use_this.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class this_ptr //開始宣告類別
{
private:       //宣告屬性
	long index;
public:        //宣告方法
	void show_index()	//輸出index屬性
	{ cout << "index : " << index << endl; }

    //設定index屬性，並傳回一個物件的指標
	this_ptr * set_index(long i_index)
 	{
		index = i_index;
		return this; //傳回物件本身
	}
};

int main() //主程式開始
{
	this_ptr object, * object_ptr;
	
	object_ptr = object.set_index(1);
    //設定index屬性，並設定object_ptr

	cout << "object address : " << &object << endl;
 	//輸出物件的位址
	cout << "pointer : " << object_ptr << endl;
 	//輸出指標指向的位址值

	object.set_index(2)->show_index();
    //設定index屬性，並顯示index屬性

    system("PAUSE");
    return 0;
} //主程式結束
