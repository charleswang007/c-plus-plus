/*
範例檔名：constructor.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Reader	//開始宣告類別
{
private:       //宣告屬性
	char name[10];
public:
	long index;		//將 index 屬性宣告為 public 等級

	Reader(char * name)		//建立建構子，傳入一個字元陣列
	{
		cout << "Reader's costructor is called!" << endl;
		set_name(name);	//呼叫set_name 方法，呼叫自己的方法不用指定物名稱
		index = 1;
	}

	char * get_name() { return name;}	//宣告方法
	void set_name(char * i_name);  //宣告get_name成員函數的原型
};		//類別宣告結束

void Reader::set_name(char * i_name)	//get_name成員函數的內容
{
	strcpy(name, i_name);		//用 strcpy 函數將 i_name 複製給 name
}

int main()    //主程式開始
{
	char name[10];	

	cout << "Please input your name ?";
	cin >> name;

	Reader A_Reader(name);	//宣告 A_Reader 為 Reader 類別的物件
				//建構子被呼叫
	cout << "Your name is ";
	cout << A_Reader.get_name();
    //呼叫 A_Reader 物件的get_name()方法

	cout << ".( index " << A_Reader.index;
    //輸出 A_Reader 物件的 index 屬性

	cout << ")" << endl;

    system("PAUSE");
    return 0;
} //主程式結束

