/*
範例檔名：class_convert.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Base	//開始宣告類別
{
public:
    Base() : pub_att(1){ }
    int pub_att;
};

//以public方法繼承Base類別
class Derived1 : public Base
{
public:
    Derived1(): att(2) { }
    int att;
};

//以private方法繼承Base類別
class Derived2 : private Base
{
public:
    Derived2(): att(3) { }
    int att;
};

void class_con(Base & A_Base)
{
    cout << "class_con is called!" << endl;
    cout << "Base::pub_att = " << A_Base.pub_att << endl;
}

int main()    //主程式開始
{
    Derived1 A_Derived1; //宣告物件
    Derived2 A_Derived2;
    
    Base A_Base1, A_Base2;

    A_Base1 = A_Derived1;
    //將衍生類別物件自動轉型為基礎類別物件

    //A_Base2 = (Base)A_Derived2;
    //衍生類別物件無法自動轉型或強制轉型為基礎類別物件

    Base * base_ptr1 = &A_Derived1;
    //Base類別的物件指標可指向Derived1類別的物件

    Base * base_ptr2 = (Base *)&A_Derived2;
    //以強制型別轉換的方式
    //，將Derived類別物件的參考轉換為Base類別的指標

    class_con(A_Derived1);
    //傳入的A_Derived1物件將自動轉換為Base型別

    class_con((Base &) A_Derived2);
    //傳入的A_Derived2物件無法自動轉換為Base型別

    system("PAUSE");
    return 0;
} //主程式結束
