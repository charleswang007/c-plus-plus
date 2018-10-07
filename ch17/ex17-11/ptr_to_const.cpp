/*
範例檔名：ptr_to_const.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Reader //開始宣告類別
{
private:
	char name[10];
public:
    //宣告建構子
    Reader(char * i_name)
    { strcpy(name, i_name); }

    //宣告方法
    const char * get_const_name( ) //get_name函數不可以更改
    { return name; }

    char * get_name( ) //get_name函數不可以更改
    { return name; }

    void show_name() const	//輸出物件資料
    {	cout << "name : " << name << endl; }
};

int main()    //主程式開始
{
	Reader A_Reader("John");
    const char * const_reader_name; //指向常數字元型態資料的指標
    char * reader_name; //指向字元型態資料的指標

    const_reader_name = A_Reader.get_const_name();
    //以指向常數型態資料之指標取得儲存name屬性之字元陣列的起始位址

    //*(conat_reader_name + 2) = 'c';
    //錯誤！無法透過get_name成員函數傳回指標
    //，修改name屬性所指向位址的儲存資料

    A_Reader.show_name(); //顯示Reader物件的name屬性

    reader_name = A_Reader.get_name();
    //取得儲存name屬性之字元陣列的起始位址

    *(reader_name + 2) = 'c';
    //透過由get_name成員函數取得
    //，指向Reader物件name屬性之位址的指標修改屬性值

    A_Reader.show_name(); //顯示Reader物件的name屬性

    system("PAUSE");
    return 0;
} //主程式結束
