/*
範例檔名：str_con.cpp
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
	String(char * i_string);	//建構子
	void show_string();		
};

void String::show_string()	//顯示字串內容
{
	cout << "string : " << string << "  length : " << len << endl;
}

String::String(char * i_string)	//建構子
{
	cout << "Constructor is called!" << endl;
	len = strlen(i_string);		//取得傳入字串的長度
	string = new char [len + 1];	//配置記憶體
	strcpy(string,i_string);	//複製字串
}

int main()    //主程式開始
{
	char i_string[10] = "My string";
	String A_String(i_string);	//宣告字串物件

	A_String.show_string();
    //呼叫A_Stirng的成員函數show_string，顯示字串內容

    system("PAUSE");
    return 0;
}        //主程式結束
