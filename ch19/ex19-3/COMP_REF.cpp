/*
�d���ɦW�Gcomp_ref.cpp
�{���}�o�G���|�g
*/
#include <iostream>
using namespace std; //�ϥ�std�R�W�Ŷ�

class Base //�}�l�w�q���O
{
public:
	Base() //Base���غc�l
	{ cout << "Base's constructr is called!" << endl; }
};

class Composition_1
{
public:
	Composition_1() //Composition_1���غc�l
	{ cout << "Composition_1's constructor is called!" << endl; }
	void show()
	{ cout << "Composition_1::show() is called!" << endl;}
};

class Composition_2
{
public:
	Composition_2() //Composition_2���غc�l
	{ cout << "Composition_2's constructor is called!" << endl; }
	void show()
	{ cout << "Composition_2::show() is called!" << endl;}
};

class Derived : public Base //�Hpublic��������~��Base���O
{
public:
	Composition_2 * com_2; //�H������Ыإ߲զX���Y
	Composition_1 & com_1; //�H����Ѧҫإ߲զX���Y

	//Derived���غc�l�A�H�����_�l�ǦC�]�wcom_1�Pcom_2��Ʀ���
	Derived(Composition_1 & com_1_ref, Composition_2 * com_2_ptr)
		:  com_1(com_1_ref), com_2(com_2_ptr)
	{ cout << "Derived's constructor is called!" << endl; }

	//Derived���غc�l�A�H�����_�l�ǦC�]�wcom_1��Ʀ���
	Derived(Composition_1 & com_1_ref) : com_1(com_1_ref)
	{ cout << "Derived's constructor is called!" << endl; }
};

int main() //�D�{���}�l
{
	Composition_1 com_1; //�ŧi����
	Composition_2 com_2;

	Derived derived_object1(com_1, &com_2); //�ŧiDerive����

	Derived derived_object2(com_1); //�ŧiDerive����

	cout << endl;

	derived_object1.com_1.show();
	//�z�L�զX����I�s�Q�]�t���󪺦������

	cout << endl;

	derived_object1.com_2->show();
	//�z�L�զX����I�s�Q�]�t���󪺦������

	system("PAUSE");
	return 0;
} //�D�{������
