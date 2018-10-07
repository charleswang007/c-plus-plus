/*
�d���ɦW�Gvirtual_inh.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class person
{
protected:
	char last_name[5];	//�m��
	char first_name[15];	//�W�r
public:
	//�غc�l�A�]�w����m�W
	person(const char * l_name, const char * f_name)
	{
		strcpy(last_name, l_name);
		strcpy(first_name, f_name);
	}
	person() { } //�w�]�غc�l

	void show_data() //��X�m�W
    { cout << first_name << " " << last_name ; }
};

//�H�����~�Ӫ��覡�~��person���O
class father : public virtual person
{
public:
	//�غc�l�A�]�w����m�W
	father(const char * last_name, const char * first_name)
						: person(last_name, first_name) {}
	father() { }
	char * get_last_name() { return last_name;}	//��X�m��

};

//�H�����~�Ӫ��覡�~��person���O
class mother : public virtual person
{
public:  
	//�غc�l�A�]�w����m�W
	mother(const char * last_name, const char * first_name)
							: person(last_name, first_name) {}
	mother() { }
};

//�}�l�ŧi���O
class child : public father, public mother
{
private: //�ŧi�ݩ�
	father * my_father;	//child����father����
	mother * my_mother;	//child����mother����
public:      
	//�غc�l�A�]�wchild����m�W�P�����������
	child(father &, mother &, const char * );
	void show_data();	//��X�m�W�P�����˪����
};

child::child(father & a_father, mother & a_mother, const char * name)
				: my_father( &a_father), my_mother( &a_mother)
{
	strcpy(last_name, a_father.get_last_name());
	//�]�w�����~�Ӧ�person��last_name

	strcpy(first_name, name);
 	//�]�w�����~�Ӧ�person��first_name
}

void child::show_data()	//��X�m�W�P�����˪����
{
	cout << "My name is ";
	person::show_data();	//�I�s�~�Ӧ�person���O��show_data��k
	cout << endl;
	cout << "My father is ";
	my_father->show_data();	//�I�sfather����show_data��k
	cout << endl;
	cout << "My mother is ";
	my_mother->show_data();	//�I�smother����show_data��k
	cout << endl;
}

int main()    //�D�{���}�l
{
	father a_father("Kuo", "John"); //�ŧi����
	mother a_mother("Lin","Mary");
	child a_child(a_father, a_mother, "Joe");

	a_child.show_data(); //��Xchild���󪺤��e

    system("PAUSE");
    return 0;
} //�D�{������
