/*
範例檔名：mutable.cpp
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
	int len;
    mutable int cursor;
public:        //宣告成員函數原型
	String(char * i_string);	//建構子
    char get_current_char() const;
    int get_cursor() const;
	void show_string();
};

String::String(char * i_string)	//建構子
   :len(strlen(i_string)), cursor(1)
{
	string = new char [len];	//配置記憶體
	strcpy(string, i_string);	//複製字串
}

char String::get_current_char() const
{
    int cur_cursor = cursor; //取得目前指標位置

    cursor ++; //指標向後移動
    //雖然get_current_char成員函數為const成員函數，
    //但仍可以修改以mutable定義的current屬性

    if(cursor > len)
        cursor = 1; //當指標移至字串後，將指標歸位到第1個字元

    return *(string + cur_cursor - 1); //傳出目前指標指向的字元
}

int String::get_cursor() const
{
    return cursor;
}

int main()    //主程式開始
{
    String A_String("The C++ Bible");	//宣告字串物件
    const String B_String("C++ Explained"); //宣告字串常數物件
    int i;

    //運用指標輸出String物件內的字元
    for (i=1 ; i<=3 ; i++){
       cout << "A_String[" << A_String.get_cursor() << "]=";
       cout << A_String.get_current_char() << endl;
    }

    cout << endl;

    //運用指標輸出String物件內的字元
    for (i=1 ; i<=3 ; i++){
       cout << "B_String[" << B_String.get_cursor() << "]=";
       cout << B_String.get_current_char() << endl;
       //雖然B_String物件為常數物件，但是get_current_char成員函數，
       //仍然可以修改cursor屬性
    }

    system("PAUSE");
    return 0;
}        //主程式結束
