/*
�d���ɦW�Gcall_con_pro.cpp
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

class B : public A	//�Hpublic�覡�~�ө�A
{
public:
	B()	//�غc�l
    { cout << "B's constructor is called!" << endl; }
	~B() //�Ѻc�l
    { cout << "B's destructor is called!" << endl;}
};

class C : public B	//�Hpublic�覡�~�ө�B
{
public:
	C() //�غc�l
    { cout << "C's constructor is called!" << endl; }
	~C() //�Ѻc�l
    { cout << "C's destructor is called!" << endl;}
};

int main()    //�D�{���}�l
{
	cout << "To declare C_object......" << endl;
	C * C_object = new C;	//���~�Ӫ����ǩI�s�غc�l

    cout << endl << "To delete C_object......" << endl;
	delete C_object;	//���~�Ӫ��ۤ϶��ǩI�s�Ѻc�l

    system("PAUSE");
    return 0;
} //�D�{������
