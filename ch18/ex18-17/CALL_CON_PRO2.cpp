/*
範例檔名：call_con_pro2.cpp
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

class D
{
public:
	D() //建構子
    { cout << "D's constructor is called!" << endl;}
	D(int d) //一個參數的建構子
    { cout << "D's 1-parameter constructor is called!" << endl; }
	~D() //解構子
    { cout << "D's destructor is called!" << endl;}
};

class E : public A, public D //以public方式繼承於A、D
{
public:
	E() : D(1), A(1) //建構子
    { cout << "E's constructor is called!" << endl;}
	~E() //解構子
    { cout << "E's destructor is called!" << endl;}
};

int main()    //主程式開始
{
	cout << "To declare E_object......" << endl;
	E * E_object = new E; //依定義多重繼承的順序呼叫建構子

    cout << endl << "To delete E_object......" << endl;
	delete E_object; //依定義多重繼承的相反順序呼叫解構子

    system("PAUSE");
    return 0;
} //主程式結束
