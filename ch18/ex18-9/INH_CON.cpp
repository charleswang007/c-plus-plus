/*
�d���ɦW�Ginh_con.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Base	//�}�l�ŧi���O
{
public:
	Base()	//Base���غc�l
	{
		cout << "Based's constructor!" << endl;
	}
};

class Derived : public Base	//�Hpublic��k�~��Base
{
public:
	Derived()	//Derived���غc�l
	{
		cout << "Derived's constructor!" << endl;
	}
};

int main()    //�D�{���}�l
{
	Derived derived_object;	//�ŧiDerived����

    system("PAUSE");
    return 0;
} //�D�{������
