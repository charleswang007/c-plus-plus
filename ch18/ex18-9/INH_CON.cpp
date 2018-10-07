/*
範例檔名：inh_con.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Base	//開始宣告類別
{
public:
	Base()	//Base的建構子
	{
		cout << "Based's constructor!" << endl;
	}
};

class Derived : public Base	//以public方法繼承Base
{
public:
	Derived()	//Derived的建構子
	{
		cout << "Derived's constructor!" << endl;
	}
};

int main()    //主程式開始
{
	Derived derived_object;	//宣告Derived物件

    system("PAUSE");
    return 0;
} //主程式結束
