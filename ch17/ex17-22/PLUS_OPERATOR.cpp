/*
範例檔名：plus_operator.cpp
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
	String();
	String(const char *);
	void show_string();	
	String & operator= (const String &);	//過載 = 運算子
	String operator+ (String );	//多載 + 運算子
};

void String::show_string()	//顯示物件內容
{
	cout << "string : " << string << "  string address : ";
	cout << (void *)string;	//將字串指標轉型為指向void型態的值
										//，將可輸出string指標的位址值
	cout << "  length : " << len << endl;
}

String::String()
{
	len = 0;
	string = new char [len + 1];
	string[0] = '\0';
}

String::String(const char * i_string)	//建構子
{
	len = strlen(i_string);		//取得傳入字串的長度
	string = new char [len + 1];	//配置記憶體
	strcpy(string,i_string);	//複製字串
}

String & String::operator= (const String &str)
{ 
	delete [] string;//釋放string屬性的記憶體空間

	len = str.len;
	string = new char [len + 1];	//重新配置記憶體空間
	strcpy(string, str.string);	//複製字串值

	return * this;	//將物件自己回傳
}

String String::operator+ (String str)
{ 
	char * strbuf = new char [len + str.len + 1];
    //動態配置陣列大小

	strcpy(strbuf, string);	//複製字串值
	strcat(strbuf, str.string);	//合併字串

	String retstr(strbuf);	//以 strbuf 字串變數建立字串物件
	delete [] strbuf;	//釋放 strbuf 字串的空間

	return retstr;	//傳回字串物件
}

int main()    //主程式開始
{
	String A_String("My ");	//宣告字串物件
	String B_String("string"), C_String;

	C_String = A_String + B_String;
    //呼叫多載的 = 運算子與 + 運算子

	C_String.show_string();	//顯示C_String內容

    system("PAUSE");
    return 0;
} //主程式結束


