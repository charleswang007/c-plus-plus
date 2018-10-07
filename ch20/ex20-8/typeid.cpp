/*
範例檔名：typeid.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <typeinfo>  //載入定義typeid運算子之標頭檔
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Base	//開始宣告類別
{
public: //宣告public等級的成員
    virtual void show()
    { cout << "Base::show() is called!" << endl; }
};

//以public方法繼承Base類別
class Derived : public Base
{
public: //宣告成員函數
    void show()
    { cout << "Derived::show() is called!" << endl; }
};

int main()    //主程式開始
{
    Base *base_ptr = new Derived;

    //判斷base_ptr指標指向物件的型態是否為Derived類別
    if (typeid(*base_ptr) == typeid(Derived)){
        cout << typeid(*base_ptr).name() << endl;
        //呼叫type_info類別的name成員函數
        //取得base_ptr指標指向物件之名稱
    }

    system("PAUSE");
    return 0;
} //主程式結束
