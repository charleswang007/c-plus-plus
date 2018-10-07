/*
�d���ɦW�Ginh_static_mem.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class library_object	//�}�l�ŧi���O
{
protected:       //�ŧi�ݩ�
	char name[30];
	long index;
	static char File_Name[20];	//���O�����ݩ�
public:        //�ŧi��k
	library_object(const char * i_name)
	{
		strcpy(name, i_name);
		index = 1;
	}

	void show_data()
	{
		cout << "name : " << name;
		cout << "  index : " << index;
		cout << "  File_Name : " << File_Name << endl;
	}
};

char library_object::File_Name[20];

//�Hpublic��k�~��library_object
class Book : public library_object
{
private:
	bool on_shelf;
public:
	Book(const char * name) : library_object(name)	//�غc�l
	{
		on_shelf = true;
		strcpy(File_Name,"book.txt");	//�w�qFile_Name��book.txt
	}
};

//�Hpublic��k�~��library_object
class Reader : public library_object
{
public:
	Reader(const char * name) : library_object(name)	//�غc�l
	{strcpy(File_Name,"reader.txt"); }	//�w�qFile_Name��reader.txt
};

int main()    //�D�{���}�l
{
	Reader A_Reader("John");
 	//�ŧiReader����A�éw�qFile_Name

	A_Reader.show_data();
 	//���A_Reader���󪺤��e

	Book A_Book("The C++ Bible");
    //�ŧiBook����A�í��s�w�qFile_Name

	A_Reader.show_data();
 	//�A�����A_Reader���󪺤��e

    system("PAUSE");
    return 0;
} //�D�{������
