/*
�d���ɦW�Gprivate_inh.cpp
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

//�Hprivate��k�~��Base���O
class Derived : private Base
{
public: //�ŧi�������
    void call_fun();
    void show();
};

//�I�s�~�Ӧ�Base���O���������
void Derived::call_fun()
{
    cout << endl;
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

//�Hpublic��k�~��Derived���O
class Second_Derived : public Derived
{
public: //�ŧi�������
    void call_fun();
    void show();
};

//�I�s�~�Ӧ�Derived���O���������
void Second_Derived::call_fun()
{
    cout << endl;
    cout << "Second_Derived::call_fun is called!" << endl;
    //pub_show();
    //pro_show();
    //pri_show();
}

//�s���~�Ӧ�Dervied���O���ݩ�
void Second_Derived::show()
{
    cout << endl;
    cout << "Second_Derived::show() is called!" << endl;
    //cout << "Base::pub_att = " << pub_att << endl;
    //cout << "Base::pro_att = " << pro_att << endl;
    //cout << "Base::pri_att = " << pri_att << endl;
}

int main()    //�D�{���}�l
{
    Derived A_Derived;

    //�z�LDerived����s���~�Ӧ�Base���O���ݩ�
    cout << "Accessing Derived's data members"
         << " inherited form Base..." << endl;
    //cout << "Derived::pub_att = " << A_Derived.pub_att << endl;
    //cout << "Derived::pro_att = " << A_Derived.pro_att << endl;
    //cout << "Derived::pri_att = " << A_Derived.pri_att << endl;

    cout << endl;

    //�z�LDerived����I�s�~�Ӧ�Base���O����k
    cout << "Call Derived's member functions"
         << " inherited form Base..." << endl;
    //A_Derived.pub_show();
    //A_Derived.pro_show();
    //A_Derived.pri_show();

    A_Derived.call_fun();
    //�I�sDerived����call_fun������ơA
    //����Derived���O��������ƬO�_�i�I�s�~�Ӧ�Base���O���������

    A_Derived.show();
    //�I�sDerived����show������ơA
    //����Derived���O��������ƬO�_�i�s���~�Ӧ�Base���O���ݩ�

    Second_Derived A_Second_Derived;

    A_Second_Derived.call_fun();
    //�I�sSecond_Derived����call_fun������ơA
    //����Second_Derived���O���������
    //�O�_�i�I�s�~�Ӧ�Derived���O���������

    A_Second_Derived.show();
    //�I�sSecond_Derived����show������ơA
    //����Second_Derived���O���������
    //�O�_�i�s���~�Ӧ�Derived���O���ݩ�

    system("PAUSE");
    return 0;
} //�D�{������
