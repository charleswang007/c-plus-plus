/*
�d���ɦW�Gcomp_value.cpp
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
	Composition_2(int i) //Composition_2���غc�l
	{ cout << "Composition_2's constructor is called!" << endl; }
};

class Derived : public Base //�Hpublic��������~��Base���O
{
public:
	Composition_2 com_2; //�H�����ܼƪ�F�զX���Y
	Composition_1 com_1;

	//Derived���غc�l�A�H�����_�l�ǦC�I�sComposition_2���O���غc�l
	Derived() : com_2(1)
	{ cout << "Derived's constructor is called!" << endl; }
};

int main() //�D�{���}�l
{
	Derived derived_object; //�ŧiDerived����

	cout << endl;

	derived_object.com_1.show();
	//�z�L�զX����I�s�Q�]�t���󪺦������

	system("PAUSE");
	return 0;
} //�D�{������
