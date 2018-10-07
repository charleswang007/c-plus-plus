/*
�d���ɦW�Gtypeid.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <typeinfo>  //���J�w�qtypeid�B��l�����Y��
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Base	//�}�l�ŧi���O
{
public: //�ŧipublic���Ū�����
    virtual void show()
    { cout << "Base::show() is called!" << endl; }
};

//�Hpublic��k�~��Base���O
class Derived : public Base
{
public: //�ŧi�������
    void show()
    { cout << "Derived::show() is called!" << endl; }
};

int main()    //�D�{���}�l
{
    Base *base_ptr = new Derived;

    //�P�_base_ptr���Ы��V���󪺫��A�O�_��Derived���O
    if (typeid(*base_ptr) == typeid(Derived)){
        cout << typeid(*base_ptr).name() << endl;
        //�I�stype_info���O��name�������
        //���obase_ptr���Ы��V���󤧦W��
    }

    system("PAUSE");
    return 0;
} //�D�{������
