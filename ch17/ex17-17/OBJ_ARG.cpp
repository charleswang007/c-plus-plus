/*
範例檔名：obj_arg.cpp
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
public:   
	String(const char * i_string);	//建構子
	String (String &);
	~String();	//解構子
	void show_string();		
};

void String::show_string()	//顯示字串內容
{ cout << "string : " << string << "  length : " << len << endl; }

String::String(const char * i_string)	//建構子
{
	cout << "Constructor is called!" << endl;
	len = strlen(i_string);		//取得傳入字串的長度
	string = new char [len + 1];	//配置記憶體
	strcpy(string,i_string);	//複製字串
}

String::String(String & a_string):len (a_string.len) //複製建構子
{
	cout << "Copy constructor is called !" << endl;
	string = new char [len + 1];	
	strcpy(string,a_string.string);
}

String::~String()	//解構子
{
	cout << "Destructor is called !" << endl;
	delete [] string;
}

int main()    //主程式開始
{
	void call_by_val(String);
 	//函數原型宣告，以傳值方式傳遞物件參數
	void call_by_ref(String &);
 	//函數原型宣告，以傳參考方式傳遞物件參數
	String A_String("My string");	//宣告字串物件

	cout << endl << "*******call by reference******" << endl;
	cout << "Before executing function..." << endl;
	call_by_ref (A_String);		//呼叫函數
	cout << endl << "After executing function..." << endl;

	cout << endl << "*********call by value********" << endl;
	cout << "Before executing function..." << endl;
	call_by_val(A_String);		//呼叫函數

	cout << endl << "******************************" << endl;
	cout << endl << "After executing function..." << endl;

    return 0;
} //主程式結束

void call_by_ref(String & aString) //函數宣告
{ cout << endl << "Executing call_by_ref function..." << endl; }

void call_by_val(String aString) //函數宣告
{ cout << endl << "Executing call_by_val function..." << endl; }
