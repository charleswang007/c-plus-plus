/*
�d���ɦW�Goverloading2.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Base	//�}�l�ŧi���O
{
public: //�ŧipublic���Ū�����
    void show()
    { cout << "Base::show() is called!" << endl; }
};

//�Hpublic��k�~��Base���O
class Derived : public Base
{
public: //�ŧi�������
    void show(int i)
    { cout << "Derived::show() is called!" << endl; }
    
    using Base::show; //�ŧi�ϥ�Base���O��show������� 

    //void show() { Base::show(); }
    //�Y�sĶ�����䴩 using Base::show �y�k�A
    //�h�i�B�Φ��覡�I�sBase���O��show�������
};

int main()    //�D�{���}�l
{
    Derived A_Derived;

    A_Derived.show();
    //�N�����I�s�~�Ӧ�Base���O��show�������

    system("PAUSE");
    return 0;
} //�D�{������
