/*
�d���ɦW�Ginh_ini.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class library_object	//�}�l�ŧi���O
{
protected: //�ŧi�ݩ�
	char name[30];
	long index;
public: //�ŧi��k
	library_object() //�w�]�غc�l
	{
		cout << "library_object's default constructor" << endl;
	}

	library_object(const char * i_name)	//�@�ӰѼƪ��غc�l
	{
		cout << "library_object's 1-parament constructor" << endl;
		strcpy(name, i_name);
		index = 1;
	}
};

//�Hpublic��k�~��library_object
class Book : public library_object
{
private:
	bool on_shelf;
public:
	Book()	//�w�]�غc�l
	{
		cout << "Book's default constructor" << endl;
	}

 	//�I�slibrary_object���غc�l
	Book(const char * name) : library_object(name)
	{
		cout << "Book's 1-parameter constructor" << endl;
		on_shelf = true;	//�]�wBook�S����on_shelf�ݩ�
	}
};

int main()    //�D�{���}�l
{
	Book A_Book("The C++ Bible");	//�ŧiBook����
	Book B_Book;

    system("PAUSE");
    return 0;
} //�D�{������
