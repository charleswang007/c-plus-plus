/*
範例檔名：exp_con.cpp
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
	String(const char * i_string);
	explicit String(int = 0);	//被宣告為explicit的建構子
	~String() { delete [] string; }
};

String::String(const char * i_string)
{
	len = strlen(i_string);		//取得傳入字串的長度
	string = new char [len + 1];	//配置記憶體
	strcpy(string, i_string);	//複製字串
}

String::String(int size)	//被宣告為explicit的建構子
{
	cout << "Explicit Constructor!" << endl;
 	//被呼叫時，將輸出Explicit constructor字樣
	string = new char [size];
}

void convert(String a_string) { cout << "Test " << endl; }

int main()	//主程式開始
{
	String a_string(12);	//此時將呼叫explicit建構子

	//convert(12);
	//將整數傳入convert函數，此時需要型態轉換，
    //但接受整數為傳入參數的建構子，卻被宣告為explicit建構子，
    //程式將無法自動呼叫執行型態轉換

   	convert((String)12);
	//呼叫explicit建構子執行強制型態轉換

    system("PAUSE");
    return 0;
} //主程式結束
