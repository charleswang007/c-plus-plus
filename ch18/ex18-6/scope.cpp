/*
�d���ɦW�Gscope.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Base	//�}�l�ŧi���O
{
public: //�ŧipublic���Ū�����
    int att; //�ŧi�ݩ�

    Base() : att(3){} //�w�q�غc�l�A�ñNatt�ݩʰ_�l�]�w��3

    void show() //��XBase���O��att�ݩ�
    {
        cout << "Base::show() is called!" << endl;
        cout << "Base::att = " << att << endl;
    }
};

//�Hpublic��k�~��Base���O
class Derived : public Base
{
private: //�ŧiprivate���Ū�����
    int att; //�ŧi�PBase���O�P�W���ݩ�
public: //�ŧi�������
    Derived() : att(5) {} //�ŧi�غc�l

    //��XDerived���O��att�ݩʡA�H���~�Ӧ�Base���O��att�ݩ�
    void show()
    {
        cout << "Derived::show() is called!" << endl;
        cout << "Derived::att = " << att << endl;
        cout << "Base::att = " << Base::att << endl;
    }

    //�bDerived���O��������ƩI�sBase::show�������
    void call_Base_show()
    { Base::show(); }
};

int main()    //�D�{���}�l
{
    Derived A_Derived; //�ŧiDerived���O����

    A_Derived.show();
    //�I�sDerived���O���s�w�q��show�������

    //cout << "Derived::att = " << A_Derived.att << endl;
    //�L�k�s��Derived���Oprivate���Ū�att�ݩʡA
    //���MDerived���O�N�qBase���O�~��public���Ū�att�ݩʡA
    //���N�QDerived���O��private���Ū�att�ݩ��л\�A
    //�N�ɭP�L�k�s��

    cout << endl;

    A_Derived.call_Base_show();
    //�z�LDerived���O��call_Base_show�������
    //�A�I�sBase::show�������


    system("PAUSE");
    return 0;
} //�D�{������
