/*
範例檔名：class_type_con.cpp
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
	friend void call_by_value(String);	//宣告friend函數
public:        //宣告成員函數原型
	String(const char *);
	operator char * ()	//多載型態轉換運算子
	{
		cout << "Type convert operator is called!" << endl;
		return string;
	}
};

String::String(const char * i_string)	//建構子
{
	cout << "Type convert constructor is called!" << endl;
	len = strlen(i_string);		//取得傳入字串的長度
	string = new char [len + 1];	//配置記憶體
	strcpy(string,i_string);	//複製字串
}

void call_by_value(String str)	//用於測試型別轉換建構子的函數
{ cout << str.string << endl; }

void type_con (char * str)	//用於測試型別轉換運算子的函數
{ cout << str << endl; }

int main()    //主程式開始
{
	String A_String("My String");	//第一種：建立物件

	call_by_value("test");	//第二種：物件的傳值呼叫

	type_con(A_String);	//呼叫型別轉換運算子

    system("PAUSE");
    return 0;
} //主程式結束
