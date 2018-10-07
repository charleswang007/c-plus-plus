/*
�d���ɦW�Gvir_destructor.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Base //�w�qBase���O
{
public:
  //�غc�l
  Base() { cout << "Base's constructor is called!" << endl; }
  virtual ~Base()	//�h���������Ѻc�l
  { cout << "Base's destructor is called!" << endl; }
};

//�w�qDerived���O�Hpublic�覡�~��Base���O
class Derived : public Base
{
public:
  Derived() { cout << "Derived's constructor is called!" << endl; }
  ~Derived() { cout << "Derived's destructor is called!" << endl; }
};

int main()	//�D�{���}�l
{
  Base* A_Base = new Derived;
  delete A_Base;	//�R���ʺA�t�m��A_Base����O����Ŷ�

  system("PAUSE");
  return 0;
} //�D�{������
