/*
範例檔名：call_con_pro.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class  A //開始宣告類別
{
public:
	A() //建構子
    { cout << "A's constructor is called!" << endl; }
	A(int a) //一個參數的建構子
    { cout << "A's 1-parameter constructor is called!" << endl; }
    ~A() //解構子
    { cout << "A's destructor is called!!" << endl;}
};

class B : public A	//以public方式繼承於A
{
public:
	B()	//建構子
    { cout << "B's constructor is called!" << endl; }
	~B() //解構子
    { cout << "B's destructor is called!" << endl;}
};

class C : public B	//以public方式繼承於B
{
public:
	C() //建構子
    { cout << "C's constructor is called!" << endl; }
	~C() //解構子
    { cout << "C's destructor is called!" << endl;}
};

int main()    //主程式開始
{
	cout << "To declare C_object......" << endl;
	C * C_object = new C;	//依繼承的順序呼叫建構子

    cout << endl << "To delete C_object......" << endl;
	delete C_object;	//依繼承的相反順序呼叫解構子

    system("PAUSE");
    return 0;
} //主程式結束
