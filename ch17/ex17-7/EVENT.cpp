/*
�d���ɦW�Gevent.cpp
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
	long index;
	bool on_shelf;	//bool��ƫ��A���Ȭ� true �� false
public:
	Book(char * name) : index(-1), on_shelf(true) //�@��غc�l
	{	set_name(name); }

	//�ŧi��k
	void set_name( char * i_name) { strcpy(name, i_name); }
	void show_data();		//��X������
	bool lend_out();	//�ɥX
};

//�w�q�������
void Book::show_data()		//��X������
{
	cout << "name : " << name;
	cout << "  index : " << index;

	if (on_shelf == true)
		cout << "  On sehlf" << endl;
	else
		cout << "  Not on sehlf" << endl;
}

bool Book::lend_out()
{
	if ( on_shelf == true ){ //�p�Gon_shelf��true�~��ɥX
		on_shelf = false; //�ɥXBook�����A�Non_shelf���ܬ�false
		return true; //Book����Q�ɥX�A�Ǧ^true
	}
	else
		return false; //Book���󤣦b�[�W�L�k�ɥX�A�Ǧ^false
}

int main()    //�D�{���}�l
{
	char name[30] = "The C++ Bible";	
	Book A_Book(name);	//�I�s���A�ഫ�غc�l�A�N 1 �ഫ�� long ���A
	
	cout << "Before lend out..." << endl;
	A_Book.show_data();	//��ܪ�����

	A_Book.lend_out();	//A_Book�Q�ɥX�F

	cout << "After lend out..." << endl;
	A_Book.show_data();	

    system("PAUSE");
    return 0;
} //�D�{������
