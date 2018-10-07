/*
範例檔名：default_assign.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class String     //開始宣告類別
{
private:       //宣告屬性
	char * string;
	long len;
public:        //宣告成員函數原型
	String(const char *);	//建構子
	void show_string();	
};

void String::show_string()	//顯示物件內容
{
	cout << "string : " << string << "  string address : ";
	cout << (void *)string;	//將字串指標轉型為指向void型態的值
										//，將可輸出string指標的位址值
	cout << "  length : " << len << endl;
}

String::String(const char * i_string)	//建構子
{
	len = strlen(i_string);		//取得傳入字串的長度
	string = new char [len + 1];	//配置記憶體
	strcpy(string,i_string);	//複製字串
}

int main()    //主程式開始
{
	String A_String("The C++ Bible");	//宣告字串物件
	String * B_String = new String ("C++ Explained");
 	//動態配置String物件

    A_String = *B_String;		//運用預設的 = 運算子

	cout << "A_String..." << endl;	//輸出字串物件的內容
	A_String.show_string();

	cout << "B_String..." << endl;
	B_String->show_string();

    system("PAUSE");
    return 0;
} //主程式結束
