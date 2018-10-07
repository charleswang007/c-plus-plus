/*
範例檔名：subscript_operator.cpp
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
	void show_string();	
	char operator[] (int offset);	//多載 [] 運算子
};

String::String(const char * i_string)	//建構子
{
	len = strlen(i_string);		//取得傳入字串的長度
	string = new char [len + 1];	//配置記憶體
	strcpy(string,i_string);	//複製字串
}

void String::show_string()	//顯示物件內容
{
	cout << "string : " << string << "  length : " << len << endl;
}

char String::operator[] (int offset)
{ 
    if (offset >= len){
        offset = len - 1;
        //若offset超過字串長度，則將offset設定為len -1
    }
    else if ( offset < 0){
        offset = 0;
        //若offset小於0，則將offset設定為0
    }

 	return string[offset];	//傳回取得的字元
}

int main()    //主程式開始
{
	String A_String("The C++ Bible");	//宣告字串物件

    A_String.show_string();	//顯示C_String內容

 	cout << "A_String[4] = " << A_String[4] << endl;
    //呼叫多載的 [] 運算子

    system("PAUSE");
    return 0;
} //主程式結束


