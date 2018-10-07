/*
範例檔名：equality.cpp
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
	String(const char *);
	bool operator==(String & str)	//多載相等運算子
	{
        return !strcmp(string, str.string);
        //比對傳入之String物件string屬性值是否相同
	}
};

String::String(const char * i_string)	//建構子
{
 	len = strlen(i_string);		//取得傳入字串的長度
	string = new char [len + 1];	//配置記憶體
	strcpy(string,i_string);	//複製字串
}

int main()    //主程式開始
{
	String A_String("The C++ Bible");
    String B_String("C++ Explained");

    if(A_String == B_String)
        cout << "A_String == B_String" << endl;
    else
        cout << "A_String != B_String" << endl;

    system("PAUSE");
    return 0;
} //主程式結束
