/*
範例檔名：public_inh.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Base	//開始宣告類別
{
private: //宣告private等級的成員
    int pri_att;
    void pri_show()
    { cout << "Base::pri_show() is called!" << endl; }
protected: //宣告protected等級的成員
	int pro_att;
    void pro_show()
    { cout << "Base::pro_show() is called!" << endl; }
public: //宣告public等級的成員
    Base()
    : pri_att(1), pro_att(2), pub_att(3){}
    int pub_att;
    void pub_show()
    { cout << "Base::pub_show() is called!" << endl; }
};

//以public方法繼承Base類別
class Derived : public Base
{
public: //宣告成員函數
    void call_fun();
    void show();
};

//呼叫繼承自Base類別的成員函數
void Derived::call_fun()
{
    cout << endl;
    cout << "Derived::call_fun is called!" << endl;
    pub_show();
    pro_show();
    //pri_show();
}

//存取繼承自Base類別的屬性
void Derived::show()
{
    cout << endl;
    cout << "Derived::show() is called!" << endl;
    cout << "Base::pub_att = " << pub_att << endl;
    cout << "Base::pro_att = " << pro_att << endl;
    //cout << "Base::pri_att = " << pri_att << endl;
}

int main()    //主程式開始
{
    Derived A_Derived;

    //透過Dervied物件存取繼承自Base類別的屬性
    cout << "Accessing Derived's data members"
         << " inherited form Base..." << endl;
    cout << "Derived::pub_att = " << A_Derived.pub_att << endl;
    //cout << "Derived::pro_att = " << A_Derived.pro_att << endl;
    //cout << "Derived::pri_att = " << A_Derived.pri_att << endl;

    cout << endl;

    //透過Dervied物件呼叫繼承自Base類別的方法
    cout << "Call Derived's member functions"
         << " inherited form Base..." << endl;
    A_Derived.pub_show();
    //A_Derived.pro_show();
    //A_Derived.pri_show();

    A_Derived.call_fun();
    //呼叫Dervied物件的call_fun成員函數，
    //測試Dervied類別之成員函數是否可呼叫繼承自Base類別的成員函數

    A_Derived.show();
    //呼叫Dervied物件的show成員函數，
    //測試Dervied類別之成員函數是否可存取繼承自Base類別的屬性

    system("PAUSE");
    return 0;
} //主程式結束
