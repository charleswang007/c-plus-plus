/*
範例檔名：access_protected.cpp
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

//以protected方法繼承Base類別
class Derived : protected Base
{
public: //宣告成員函數
    void call_fun();
    void show();
    void access_protected(Base & aBase);
};

//呼叫繼承自Base類別的成員函數
void Derived::call_fun()
{
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

void Derived::access_protected(Base & aBase)
{
    cout << "Derived::access_protected() is called!" << endl;
    //cout << aBase.pro_att << endl;
    //測試存取protected等級的pro_att屬性

    //aBase.pro_show();
    //測試呼叫protected等級的pro_att屬性
}

int main()    //主程式開始
{
    Derived A_Derived;
    Base A_Base;

    A_Derived.call_fun();
    //呼叫Derived物件的call_fun成員函數，
    //測試Derived類別之成員函數是否可呼叫繼承自Base類別的成員函數

    A_Derived.show();
    //呼叫Derived物件的show成員函數，
    //測試Derived類別之成員函數是否可存取繼承自Base類別的屬性

    A_Derived.access_protected(A_Base);
    //呼叫Derived物件的show成員函數，
    //測試Derived類別之成員函數是否可存取繼承自Base類別的屬性

    system("PAUSE");
    return 0;
} //主程式結束
