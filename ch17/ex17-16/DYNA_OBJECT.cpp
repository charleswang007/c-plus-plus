/*
�d���ɦW�Gdyna_object.cpp
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
public:        
	Book(char * i_name) : index(-1) //�غc�l
	{
        strcpy(name, i_name);
    }

	//�ŧi��k
 	void show_data()  //��X������
    {
	   cout << "name : " << name << "  index : " << index << endl;
    }
};

int main() //�D�{���}�l
{
	Book *book_ptr = new Book("The C++ Bible");
    //�ŧibook_ptr���������

	book_ptr->show_data();	//�I�s����show_data�������

    delete book_ptr;

    system("PAUSE");
    return 0;
} //�D�{������


