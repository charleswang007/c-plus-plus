/*
�d���ɦW�Ginh_friend.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Base	//�}�l�ŧi���O
{
protected:   //�ŧi�ݩ�
	int a;
	friend class Friend;	//�ŧiFriend��Base��friend���O
public:        //�ŧi��k
	Base(int i) : a(i) {}	//�غc�l
};

class Derived: public Base	//Derived�Hpublic��k�~�ө�Base
{
private:
	int b;
public:
	Derived(int i) : Base(i), b(1) {}	//�غc�l
};

class Friend
{
public:
	void get_data()
	{
		Derived derived(2);
		cout << "access Derived's a : " << derived.a << endl;
        //�s���~�ө�Base��a�ݩ�

		//cout << "access Derived's b : "<< derived.b << endl;
		//���~�I�L�k�s��Derived��b�ݩ�
	}
};

int main() //�D�{���}�l
{
	Friend A_Friend; //�ŧi����

	A_Friend.get_data(); //�I�sget_data�������

    system("PAUSE");
    return 0;
} //�D�{������
