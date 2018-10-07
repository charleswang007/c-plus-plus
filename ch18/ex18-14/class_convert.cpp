/*
�d���ɦW�Gclass_convert.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Base	//�}�l�ŧi���O
{
public:
    Base() : pub_att(1){ }
    int pub_att;
};

//�Hpublic��k�~��Base���O
class Derived1 : public Base
{
public:
    Derived1(): att(2) { }
    int att;
};

//�Hprivate��k�~��Base���O
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

int main()    //�D�{���}�l
{
    Derived1 A_Derived1; //�ŧi����
    Derived2 A_Derived2;
    
    Base A_Base1, A_Base2;

    A_Base1 = A_Derived1;
    //�N�l�����O����۰��૬����¦���O����

    //A_Base2 = (Base)A_Derived2;
    //�l�����O����L�k�۰��૬�αj���૬����¦���O����

    Base * base_ptr1 = &A_Derived1;
    //Base���O��������Хi���VDerived1���O������

    Base * base_ptr2 = (Base *)&A_Derived2;
    //�H�j��O�ഫ���覡
    //�A�NDerived���O���󪺰Ѧ��ഫ��Base���O������

    class_con(A_Derived1);
    //�ǤJ��A_Derived1����N�۰��ഫ��Base���O

    class_con((Base &) A_Derived2);
    //�ǤJ��A_Derived2����L�k�۰��ഫ��Base���O

    system("PAUSE");
    return 0;
} //�D�{������
