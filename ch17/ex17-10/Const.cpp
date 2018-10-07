/*
�d���ɦW�Gconst.cpp
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
	const long index;
public:
    //�ŧi�غc�l
    Book(long i_index):index(i_index) //�B�Φ����_�l�ǦC�_�l�`���ݩ�
    {
        strcpy(name, "none"); //name�ݩʪ��w�]��Ȭ�none
    }

    //�ŧi��k
	void show_data() const //��X������
	{	cout << "name : " << name << " index : " << index << endl; }

	void set_name(char * i_name) //�]�windex�ݩ�
 	{
        strcpy(name, i_name); //�� strcpy ��ƱN i_name �ƻs�� name
    }

	void set_index(long i_index) //�]�windex�ݩ�
 	{
       //index = i_index;
       //�W�@��b�sĶ�ɡA�N���Ϳ��~�A�]��index���`���ݩʤ��i�ק�
    }
};

int main()    //�D�{���}�l
{
	Book A_Book(1245); //�ŧiBook����

    A_Book.set_name("The C++ Bible"); //�]�wname�ݩ�
	A_Book.show_data();	

    const Book B_Book(1235); //�ŧiconst����

    //B_Book.set_name(""The C++ Bible, 2nd");
    //�W�@��b�sĶ�ɡA�N���Ϳ��~�A�]��B_Book���`�ƪ���A
    //�L�k�I�s���Oconst������ƪ�set_name�������

    B_Book.show_data();
    //�i�I�sconst����const�������

    system("PAUSE");
    return 0;
} //�D�{������
