/*
範例檔名：str_destructor.cpp
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
	String(const char * i_string);	//建構子
	~String();	//解構子
	void show_string();		
};

void String::show_string()	//顯示字串內容
{
	cout << "string : " << string
         << "  length : " << len << endl;
}

String::String(const char * i_string)	//建構子
{
	cout << "Constructor is called!\n";
	len = strlen(i_string);		//取得傳入字串的長度
	string = new char [len + 1];	//配置記憶體
	strcpy(string,i_string);	//複製字串
}

String::~String()	//解構子
{
	cout << "Destructor is called !" << endl;
	delete [] string;
}

int main()    //主程式開始
{
   	String * A_String = new String("My string");
    //宣告string指標，並建立String物件

    A_String->show_string();
    //呼叫A_Stirng的show_string成員函數，顯示字串內容

    delete A_String; //刪除String

    system("PAUSE");
    return 0;
} //主程式結束
