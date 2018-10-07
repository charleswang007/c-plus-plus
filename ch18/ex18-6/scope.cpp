/*
範例檔名：scope.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Base	//開始宣告類別
{
public: //宣告public等級的成員
    int att; //宣告屬性

    Base() : att(3){} //定義建構子，並將att屬性起始設定為3

    void show() //輸出Base類別的att屬性
    {
        cout << "Base::show() is called!" << endl;
        cout << "Base::att = " << att << endl;
    }
};

//以public方法繼承Base類別
class Derived : public Base
{
private: //宣告private等級的成員
    int att; //宣告與Base類別同名的屬性
public: //宣告成員函數
    Derived() : att(5) {} //宣告建構子

    //輸出Derived類別的att屬性，以及繼承自Base類別的att屬性
    void show()
    {
        cout << "Derived::show() is called!" << endl;
        cout << "Derived::att = " << att << endl;
        cout << "Base::att = " << Base::att << endl;
    }

    //在Derived類別的成員函數呼叫Base::show成員函數
    void call_Base_show()
    { Base::show(); }
};

int main()    //主程式開始
{
    Derived A_Derived; //宣告Derived類別物件

    A_Derived.show();
    //呼叫Derived類別重新定義的show成員函數

    //cout << "Derived::att = " << A_Derived.att << endl;
    //無法存取Derived類別private等級的att屬性，
    //雖然Derived類別將從Base類別繼承public等級的att屬性，
    //但將被Derived類別內private等級的att屬性覆蓋，
    //將導致無法存取

    cout << endl;

    A_Derived.call_Base_show();
    //透過Derived類別的call_Base_show成員函數
    //，呼叫Base::show成員函數


    system("PAUSE");
    return 0;
} //主程式結束
