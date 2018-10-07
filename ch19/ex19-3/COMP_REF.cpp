/*
範例檔名：comp_ref.cpp
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
	Composition_2() //Composition_2的建構子
	{ cout << "Composition_2's constructor is called!" << endl; }
	void show()
	{ cout << "Composition_2::show() is called!" << endl;}
};

class Derived : public Base //以public成員函數繼承Base類別
{
public:
	Composition_2 * com_2; //以物件指標建立組合關係
	Composition_1 & com_1; //以物件參考建立組合關係

	//Derived的建構子，以成員起始序列設定com_1與com_2資料成員
	Derived(Composition_1 & com_1_ref, Composition_2 * com_2_ptr)
		:  com_1(com_1_ref), com_2(com_2_ptr)
	{ cout << "Derived's constructor is called!" << endl; }

	//Derived的建構子，以成員起始序列設定com_1資料成員
	Derived(Composition_1 & com_1_ref) : com_1(com_1_ref)
	{ cout << "Derived's constructor is called!" << endl; }
};

int main() //主程式開始
{
	Composition_1 com_1; //宣告物件
	Composition_2 com_2;

	Derived derived_object1(com_1, &com_2); //宣告Derive物件

	Derived derived_object2(com_1); //宣告Derive物件

	cout << endl;

	derived_object1.com_1.show();
	//透過組合物件呼叫被包含物件的成員函數

	cout << endl;

	derived_object1.com_2->show();
	//透過組合物件呼叫被包含物件的成員函數

	system("PAUSE");
	return 0;
} //主程式結束
