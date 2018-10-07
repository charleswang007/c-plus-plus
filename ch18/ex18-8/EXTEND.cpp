/*
�d���ɦW�Gextend.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class library_object //�}�l�ŧi���O
{
protected: //�ŧi�ݩ�
	char name[30];
	long index;
public: //�ŧi��k
	void set_data(const char * i_name)
	{
		strcpy(name, i_name);
		index = 1;
	}
	void show_data() //��X������
	{
		cout << "name : " << name;
		cout << "  index : " << index;
	}
};

//�Hpublic��k�~��library_object
class Book : public library_object
{
private:
	bool on_shelf;
public:
	void set_data(const char * name)
	{
		library_object::set_data(name);
        //�I�slibrary_object��set_data�������
		on_shelf = true;
	}
	void show_data()	//��X������
	{
		library_object::show_data();
        //�I�slibrary_object��show_data�������

		if (on_shelf == true)
			cout << "  On sehlf" << endl;
		else
			cout << "  Not on sehlf" << endl;
	}
};

int main()    //�D�{���}�l
{
	Book A_Book;	//�ŧiBook����

	A_Book.set_data("The C++ Bible");
	A_Book.show_data();

    system("PAUSE");
    return 0;
} //�D�{������
