/*
範例檔名：namespace.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

namespace John	//宣告John的namespace
{
	class Printer  //宣告Printer類別
	{
	public:
		void Hello ()  //宣告Printer類別的方法
		{ 
			cout << "Hello C++ ! " << endl; //印出Hello C++ !
		}
	};    //完成Printer類別的宣告
}		//完成John namespace的宣告

namespace Tom	//宣告Tom的namespace
{
	class Printer  //宣告Printer類別
	{
	public:
		void Hello ()  //宣告Printer類別的方法
		{ 
			cout << "Hello World ! " << endl; //印出Hello C++ !
		}
	};    //完成Printer類別的宣告
}	//完成Tom namespace的宣告

int main()  //主程式開始
{
	using namespace John; //宣告使用John namespace定義的類別
	Printer Printer_1;	//使用由John namespace定義的Printer類別
	Printer_1.Hello();	//輸出Hello C++ !

	Tom::Printer Printer_2;	//使用由Tom namespace定義的Printer類別
	Printer_2.Hello(); //輸出Hello World !

    system("PAUSE");
    return 0;
} //主程式結束
