/*
�d���ɦW�Gcall_con_pro2.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class  A //�}�l�ŧi���O
{
public:
	A() //�غc�l
    { cout << "A's constructor is called!" << endl; }
	A(int a) //�@�ӰѼƪ��غc�l
    { cout << "A's 1-parameter constructor is called!" << endl; }
    ~A() //�Ѻc�l
    { cout << "A's destructor is called!!" << endl;}
};

class D
{
public:
	D() //�غc�l
    { cout << "D's constructor is called!" << endl;}
	D(int d) //�@�ӰѼƪ��غc�l
    { cout << "D's 1-parameter constructor is called!" << endl; }
	~D() //�Ѻc�l
    { cout << "D's destructor is called!" << endl;}
};

class E : public A, public D //�Hpublic�覡�~�ө�A�BD
{
public:
	E() : D(1), A(1) //�غc�l
    { cout << "E's constructor is called!" << endl;}
	~E() //�Ѻc�l
    { cout << "E's destructor is called!" << endl;}
};

int main()    //�D�{���}�l
{
	cout << "To declare E_object......" << endl;
	E * E_object = new E; //�̩w�q�h���~�Ӫ����ǩI�s�غc�l

    cout << endl << "To delete E_object......" << endl;
	delete E_object; //�̩w�q�h���~�Ӫ��ۤ϶��ǩI�s�Ѻc�l

    system("PAUSE");
    return 0;
} //�D�{������
