/*
範例檔名：over_write.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class library_object //開始宣告類別
{
protected:       //宣告屬性
	char name[30];
	long index;
public:        //宣告方法
	void set_data(const char * i_name)
	{
		strcpy(name, i_name);
		index = 1;
	}	
};

//以public方法繼承library_object
class Reader : public library_object
{
private:
	char name[10];
public:
	void show_data()	//輸出物件資料
	{
		cout << "Reader's name : " << name;
       	//輸出Reader定義的name

		cout << "  index : " << index << endl;
		cout << "library_object's name : "
             << library_object::name << endl;
		//輸出library_object定義的name
	}
};

int main()    //主程式開始
{
	Reader A_Reader;	//宣告Reader物件

	A_Reader.set_data("John");
 	//set_name將設定library_object的name屬性

	A_Reader.show_data();

    system("PAUSE");
    return 0;
} //主程式結束
