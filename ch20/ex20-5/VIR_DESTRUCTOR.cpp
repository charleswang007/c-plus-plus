/*
範例檔名：vir_destructor.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Base //定義Base類別
{
public:
  //建構子
  Base() { cout << "Base's constructor is called!" << endl; }
  virtual ~Base()	//多載的虛擬解構子
  { cout << "Base's destructor is called!" << endl; }
};

//定義Derived類別以public方式繼承Base類別
class Derived : public Base
{
public:
  Derived() { cout << "Derived's constructor is called!" << endl; }
  ~Derived() { cout << "Derived's destructor is called!" << endl; }
};

int main()	//主程式開始
{
  Base* A_Base = new Derived;
  delete A_Base;	//刪除動態配置的A_Base物件記憶體空間

  system("PAUSE");
  return 0;
} //主程式結束
