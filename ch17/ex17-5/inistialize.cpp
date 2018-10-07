/*
範例檔名：inistialize.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Reader	//開始宣告類別
{
private:       //宣告屬性
	char * name;
	long index;
    int age;
    char sex;
    int name_len;

public:
    //宣告建構子
	Reader(char * i_name, char i_sex, int i_age);
    //建構子的宣告處，不必列出成員起始序列

    //宣告方法
    void show_data()  //顯示讀者的基本資料
    {
        cout << "Reader's Data...." << endl;
        cout << "name : " << name << endl;
        cout << "sex : " << sex << endl;
        cout << "age : " << age << endl;
        cout << "index number : " << index << endl;
    }
};		//類別宣告結束

Reader::Reader(char * i_name, char i_sex, int i_age)
    :name_len(strlen(name)), index(2), sex(i_sex), age(i_age)
{
    name = new char [name_len + 1];	//配置記憶體

    strcpy(name, i_name); //用 strcpy 函數將 i_name 複製給 name
}

int main()    //主程式開始
{
	char name[10] = "John";

	Reader A_Reader(name, 'M', 10);
    //宣告 A_Reader 為 Reader 類別的物件，建構子將被呼叫

 	A_Reader.show_data();
    //呼叫 A_Reader 物件的show_date()方法輸出讀者的基本資料

    system("PAUSE");
    return 0;
} //主程式結束
