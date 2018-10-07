/*
範例檔名：overloading2.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Base	//開始宣告類別
{
public: //宣告public等級的成員
    void show()
    { cout << "Base::show() is called!" << endl; }
};

//以public方法繼承Base類別
class Derived : public Base
{
public: //宣告成員函數
    void show(int i)
    { cout << "Derived::show() is called!" << endl; }
    
    using Base::show; //宣告使用Base類別的show成員函數 

    //void show() { Base::show(); }
    //若編譯器不支援 using Base::show 語法，
    //則可運用此方式呼叫Base類別的show成員函數
};

int main()    //主程式開始
{
    Derived A_Derived;

    A_Derived.show();
    //將直接呼叫繼承自Base類別的show成員函數

    system("PAUSE");
    return 0;
} //主程式結束
