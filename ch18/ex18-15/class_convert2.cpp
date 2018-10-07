/*
範例檔名：class_convert2.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Base	//開始宣告類別
{
public:
    Base() : pri_att(1) {} //宣告建構子
private:
    int pri_att; //宣告屬性
};

//以public方法繼承Base類別
class Derived : public Base
{
public:
    int Derived_att; //宣告屬性
    Derived() : Derived_att(2) { } //宣告建構子

};

//以傳指標方式將物件傳入函數
void class_cast_ptr(Derived * A_Derived)
{
    cout << "A_Derived->Derived_att = "
         << A_Derived->Derived_att << endl;
}

//以傳參考方式將物件傳入函數
void class_cast_ref(Derived & A_Derived)
{
    cout << "A_Derived.Derived_att = "
         << A_Derived.Derived_att << endl;
}

//以傳值方式將物件傳入函數
void class_cast_val(Derived A_Derived)
{
    cout << "A_Derived.Derived_att = "
         << A_Derived.Derived_att << endl;
}

int main()    //主程式開始
{
    Base * base_ptr = new Derived;
    //Base類別的物件指標可指向Derived類別的物件

    class_cast_ptr((Derived *)base_ptr);
    //將Base類別之指標強制轉換為Derived類別

    Base A_Base; //宣告Base類別的物件

    class_cast_ref((Derived &)A_Base);
    //將Base類別之參考轉換為Derived類別

    //class_cast_val((Derived)A_Base);
    //無法將Base類別物件轉換為Derived類別物件

    system("PAUSE");
    return 0;
} //主程式結束
