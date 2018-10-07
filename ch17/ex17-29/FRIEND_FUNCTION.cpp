/*
�d���ɦW�Gfriend_function.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Book           //�}�l�ŧi���O
{
private:       //�ŧi�ݩ�
	char name[30];
	long index;	//�R�A�ݩ�
	bool on_shelf;	//bool��ƫ��A���Ȭ� true �� false
	friend void insert_book(const char *, long);
 	//�ŧi insert_book ��Ƭ��B�ͨ��
public:
	void show_data();		//��X������
};

void Book::show_data()		//��X������
{
	cout << "name : " << name;
	cout << "  index : " << index;
	if (on_shelf == true)
		cout << "  On sehlf\n";
	else
		cout << "  Not on sehlf\n";
}

int main()    //�D�{���}�l
{	
	insert_book("The C++ Bible",1);	//�I�sinsert_book���

    system("PAUSE");
    return 0;
} //�D�{������

void insert_book(const char *name, long index)
{
	Book A_Book;	//�ŧi�@��Book����

	A_Book.index = index;	//�]�w Book ���� index
	strcpy(A_Book.name, name);	//�]�w Book ���� name
	A_Book.on_shelf = true;	//�]�w Book ���� on_shelf

	A_Book.show_data();	//���A_Book������
}

