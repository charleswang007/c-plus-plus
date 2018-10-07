/*
範例檔名：def_copy_constructor.cpp
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
	String();		//預設建構子
	String(const char * i_string);	//建構子
	String(String & a_string);	//複製建構子
	void show_string();	
};

void String::show_string()	//顯示字串內容
{ cout << "string : " << string << "  length : " << len << endl; }

String::String()	//預設建構子
{   cout << "Define constructor is called !" << endl;   }

//一般建構子
String::String(const char * i_string) : len (strlen(i_string))
{
	cout << "Constructor is called !" << endl;
	string = new char [len + 1];	//配置記憶體
	strcpy(string,i_string);	//複製字串
}

//複製建構子
String::String(String & a_string) : len (a_string.len)
{
	cout << "Copy constructor is called !" << endl;
	string = new char [len + 1];	
	strcpy(string,a_string.string);
}

int main()    //主程式開始
{
	String A_String("My string");	//宣告字串物件，呼叫一般建構子
	String B_String(A_String);	//呼叫複製建構子
	String C_String;	//呼叫預設建構子
	
	cout << "---------------------------------" << endl;
	cout << "A_String : " << endl;
	A_String.show_string();
    //呼叫A_Stirng的show_string成員函數，顯示字串內容

	cout << "B_String : " << endl;
	B_String.show_string();
    //呼叫B_Stirng的show_string成員函數，顯示字串內容

    system("PAUSE");
    return 0;
} //主程式結束
