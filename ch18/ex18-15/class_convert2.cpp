/*
�d���ɦW�Gclass_convert2.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Base	//�}�l�ŧi���O
{
public:
    Base() : pri_att(1) {} //�ŧi�غc�l
private:
    int pri_att; //�ŧi�ݩ�
};

//�Hpublic��k�~��Base���O
class Derived : public Base
{
public:
    int Derived_att; //�ŧi�ݩ�
    Derived() : Derived_att(2) { } //�ŧi�غc�l

};

//�H�ǫ��Ф覡�N����ǤJ���
void class_cast_ptr(Derived * A_Derived)
{
    cout << "A_Derived->Derived_att = "
         << A_Derived->Derived_att << endl;
}

//�H�ǰѦҤ覡�N����ǤJ���
void class_cast_ref(Derived & A_Derived)
{
    cout << "A_Derived.Derived_att = "
         << A_Derived.Derived_att << endl;
}

//�H�ǭȤ覡�N����ǤJ���
void class_cast_val(Derived A_Derived)
{
    cout << "A_Derived.Derived_att = "
         << A_Derived.Derived_att << endl;
}

int main()    //�D�{���}�l
{
    Base * base_ptr = new Derived;
    //Base���O��������Хi���VDerived���O������

    class_cast_ptr((Derived *)base_ptr);
    //�NBase���O�����бj���ഫ��Derived���O

    Base A_Base; //�ŧiBase���O������

    class_cast_ref((Derived &)A_Base);
    //�NBase���O���Ѧ��ഫ��Derived���O

    //class_cast_val((Derived)A_Base);
    //�L�k�NBase���O�����ഫ��Derived���O����

    system("PAUSE");
    return 0;
} //�D�{������
