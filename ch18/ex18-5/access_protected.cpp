/*
�d���ɦW�Gaccess_protected.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Base	//�}�l�ŧi���O
{
private: //�ŧiprivate���Ū�����
    int pri_att;
    void pri_show()
    { cout << "Base::pri_show() is called!" << endl; }
protected: //�ŧiprotected���Ū�����
	int pro_att;
    void pro_show()
    { cout << "Base::pro_show() is called!" << endl; }
public: //�ŧipublic���Ū�����
    Base()
    : pri_att(1), pro_att(2), pub_att(3){}
    int pub_att;
    void pub_show()
    { cout << "Base::pub_show() is called!" << endl; }
};

//�Hprotected��k�~��Base���O
class Derived : protected Base
{
public: //�ŧi�������
    void call_fun();
    void show();
    void access_protected(Base & aBase);
};

//�I�s�~�Ӧ�Base���O���������
void Derived::call_fun()
{
    cout << "Derived::call_fun is called!" << endl;
    pub_show();
    pro_show();
    //pri_show();
}

//�s���~�Ӧ�Base���O���ݩ�
void Derived::show()
{
    cout << endl;
    cout << "Derived::show() is called!" << endl;
    cout << "Base::pub_att = " << pub_att << endl;
    cout << "Base::pro_att = " << pro_att << endl;
    //cout << "Base::pri_att = " << pri_att << endl;
}

void Derived::access_protected(Base & aBase)
{
    cout << "Derived::access_protected() is called!" << endl;
    //cout << aBase.pro_att << endl;
    //���զs��protected���Ū�pro_att�ݩ�

    //aBase.pro_show();
    //���թI�sprotected���Ū�pro_att�ݩ�
}

int main()    //�D�{���}�l
{
    Derived A_Derived;
    Base A_Base;

    A_Derived.call_fun();
    //�I�sDerived����call_fun������ơA
    //����Derived���O��������ƬO�_�i�I�s�~�Ӧ�Base���O���������

    A_Derived.show();
    //�I�sDerived����show������ơA
    //����Derived���O��������ƬO�_�i�s���~�Ӧ�Base���O���ݩ�

    A_Derived.access_protected(A_Base);
    //�I�sDerived����show������ơA
    //����Derived���O��������ƬO�_�i�s���~�Ӧ�Base���O���ݩ�

    system("PAUSE");
    return 0;
} //�D�{������
