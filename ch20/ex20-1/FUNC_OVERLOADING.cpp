/*
�d���ɦW�Gfunc_overloading.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class object
{
protected:
	char color[10];
	char type[10];
public:
	object(char * o_type, char * o_color) //�غc�l
	{
		strcpy(type, o_type);
		strcpy(color, o_color);
	}
};

class shoe : public object
{
private:
	friend class person; //�ŧiperson���O��friend���O
public:
    //�غc�l
	shoe(char * type, char * color) : object (type, color){}
};

class clothes : public object
{
private:
	friend class person; //�ŧiperson���O��friend���O
public:
	//�غc�l
	clothes(char * type, char * color) : object (type, color){}
};

class pants : public object
{
private:
	friend class person; //�ŧiperson���O��friend���O
public:
    //�غc�l
	pants(char * type, char * color) : object (type, color){}
};

class person
{
protected:
	char last_name[5]; //�m��
	char first_name[15]; //�W�r
	clothes * my_clothes;
	shoe * my_shoe;
	pants * my_pants;
public:
    //�غc�l�A�]�w����m�W
	person(const char * l_name, const char * f_name)
	{
		strcpy(last_name, l_name);
		strcpy(first_name, f_name);
	}
	void wear(shoe & a_shoe) //��c�l
	{
		cout << "The wear(shoe & a_shoe) is called." << endl;
		my_shoe = &a_shoe;
	}
	void wear(clothes & a_clothes)	//���A
	{
		cout << "The wear(clothes & a_clothes) is called." << endl;
		my_clothes = &a_clothes;
	}
	void wear(pants & a_pants)	//��Ǥl
	{
		cout << "The wear(pants & a_pants) is called." << endl;
		my_pants = &a_pants;
	}
	void show_data()	//���person���󪺩m�W�P���
	{
		cout << endl << "My name is " << first_name << " "
             << last_name << "." << endl;
		cout << "I wear " << my_clothes->color
             << " " << my_clothes->type;
		cout << ", " << my_pants->color << " "
             << my_pants->type;
		cout << " and " << my_shoe->color << " "
             << my_shoe->type << "." << endl;
	}
};

int main()    //�D�{���}�l
{
	person John("John","Kuo");	//�ŧi����
	clothes a_clothes ("T shirt","white");
	pants a_pants ("short","green");
	shoe a_shoe ("gymshoe","blue");

	John.wear(a_clothes);	//�I�s���
	John.wear(a_pants);
	John.wear(a_shoe);

	John.show_data();

    system("PAUSE");
    return 0;
} //�D�{������
