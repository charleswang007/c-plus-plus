/*
範例檔名：comp_value.cpp
程式開發：郭尚君
*/
#include <iostream>
using namespace std; //使用std命名空間

class Base //開始定義類別
{
public:
	Base() //Base的建構子
	{ cout << "Base's constructr is called!" << endl; }
};

class Composition_1
{
public:
	Composition_1() //Composition_1的建構子
	{ cout << "Composition_1's constructor is called!" << endl; }
	void show()
	{ cout << "Composition_1::show() is called!" << endl;}
};

class Composition_2
{
public:
	Composition_2(int i) //Composition_2的建構子
	{ cout << "Composition_2's constructor is called!" << endl; }
};

class Derived : public Base //以public成員函數繼承Base類別
{
public:
	Composition_2 com_2; //以物件變數表達組合關係
	Composition_1 com_1;

	//Derived的建構子，以成員起始序列呼叫Composition_2類別的建構子
	Derived() : com_2(1)
	{ cout << "Derived's constructor is called!" << endl; }
};

int main() //主程式開始
{
	Derived derived_object; //宣告Derived物件

	cout << endl;

	derived_object.com_1.show();
	//透過組合物件呼叫被包含物件的成員函數

	system("PAUSE");
	return 0;
} //主程式結束
