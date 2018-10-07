/*
範例檔名：inh_friend.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Base	//開始宣告類別
{
protected:   //宣告屬性
	int a;
	friend class Friend;	//宣告Friend為Base的friend類別
public:        //宣告方法
	Base(int i) : a(i) {}	//建構子
};

class Derived: public Base	//Derived以public方法繼承於Base
{
private:
	int b;
public:
	Derived(int i) : Base(i), b(1) {}	//建構子
};

class Friend
{
public:
	void get_data()
	{
		Derived derived(2);
		cout << "access Derived's a : " << derived.a << endl;
        //存取繼承於Base的a屬性

		//cout << "access Derived's b : "<< derived.b << endl;
		//錯誤！無法存取Derived的b屬性
	}
};

int main() //主程式開始
{
	Friend A_Friend; //宣告物件

	A_Friend.get_data(); //呼叫get_data成員函數

    system("PAUSE");
    return 0;
} //主程式結束
