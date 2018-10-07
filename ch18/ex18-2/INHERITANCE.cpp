/*
�d���ɦW�GInheritance.cpp
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
	void set_data(const char * i_name)
	{
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
	void show_data()	//��X������
	{
		cout << "name : " << name;
		cout << "  index : " << index;
		if (on_shelf == true)
			cout << "  On sehlf\n";
		else
			cout << "  Not on sehlf\n";
	}
};

//�Hpublic��k�~��library_object
class Reader : public library_object
{
public:
	void show_data()	//��X������
	{
		cout << "name : " << name;
		cout << "  index : " << index << endl;
	}
};

int main()    //�D�{���}�l
{
	Reader A_Reader; //�ŧiReader����
	Book A_Book; //�ŧiBook����

	A_Reader.set_data("John");	//�I�s�������
	A_Reader.show_data();
	A_Book.set_data("The C++ Bible");
	A_Book.show_data();

    system("PAUSE");
    return 0;
} //�D�{������
