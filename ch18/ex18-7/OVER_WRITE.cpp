/*
�d���ɦW�Gover_write.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class library_object //�}�l�ŧi���O
{
protected:       //�ŧi�ݩ�
	char name[30];
	long index;
public:        //�ŧi��k
	void set_data(const char * i_name)
	{
		strcpy(name, i_name);
		index = 1;
	}	
};

//�Hpublic��k�~��library_object
class Reader : public library_object
{
private:
	char name[10];
public:
	void show_data()	//��X������
	{
		cout << "Reader's name : " << name;
       	//��XReader�w�q��name

		cout << "  index : " << index << endl;
		cout << "library_object's name : "
             << library_object::name << endl;
		//��Xlibrary_object�w�q��name
	}
};

int main()    //�D�{���}�l
{
	Reader A_Reader;	//�ŧiReader����

	A_Reader.set_data("John");
 	//set_name�N�]�wlibrary_object��name�ݩ�

	A_Reader.show_data();

    system("PAUSE");
    return 0;
} //�D�{������
