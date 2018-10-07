/*
�d���ɦW�Gdyna_bending.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class person;	//���O���e�m�ŧi�@

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
	object() {}
	virtual void set_object(person & a_person)	//�������
	{
        cout << "The set_object(person & a_person)"
             << " of object is called!" << endl;
    }
};

class clothes;	//���O���e�m�ŧi�G
class pants;
class shoe;

class person
{
protected:
	char last_name[5]; //�m��
	char first_name[15]; //�W�r
	clothes * my_clothes; //�H������Ыإ�person����P��L�������Y
	shoe * my_shoe;
	pants * my_pants;
	friend class clothes;	//�ŧi�B�ͨ��
	friend class shoe;
	friend class pants;
public:
    //�غc�l�A�]�w����m�W
	person(const char * l_name, const char * f_name)
	{
		strcpy(last_name, l_name);
		strcpy(first_name, f_name);
	}
	void wear(object & object)
	{
		cout << "The wear(object & object) of person is called!";
        cout << endl;
		object.set_object(*this);	//�I�s�������
	}
	void show_data();	//���person���󪺩m�W�P���
};

class shoe : public object
{
private:
	friend class person;	//�ŧiperson���O��friend���O
public:
	//�غc�l
	shoe(char * type, char * color) : object (type, color){}
	void set_object(person & a_person)	//�������
	{
		cout << "The set_object() of shoe is called!";
        cout << endl << endl;

		a_person.my_shoe = this;
	    //�N�ۤv�]�w���ǻ��L�Ӫ�person����my_clothes�ݩ�
    }
};

class clothes : public object
{
private:
	friend class person; //�ŧiperson���O��friend���O
public:
	//�غc�l
	clothes(char * type, char * color) : object (type, color){}
	void set_object(person & a_person)	//�������
	{
		cout << "The set_object() of clothes is called!";
        cout << endl << endl;
		a_person.my_clothes = this;	
		//�N�ۤv�]�w���ǻ��L�Ӫ�person����my_clothes�ݩ�
    }
};

class pants : public object
{
private:
	friend class person;	//�ŧiperson���O��friend���O
public:
	//�غc�l
	pants(char * type, char * color) : object (type, color){}

	void set_object(person & a_person)	//�������
	{
		cout << "The set_object() of pants is called!";
        cout << endl << endl;
		a_person.my_pants = this;
	}				//�N�ۤv�]�w���ǻ��L�Ӫ�person����my_clothes�ݩ�
};

//���person���󪺩m�W�P���
//�]���ϥ�clothes�Bshoe�Ppants����A�ҥH�����b���B�ŧi
void person::show_data()
{
	cout << endl << "My name is " << first_name
         << " " << last_name << "." << endl;
	cout << "I wear " << my_clothes->color << " " << my_clothes->type;
	cout << ", " << my_pants->color << " " << my_pants->type;
	cout << " and " << my_shoe->color << " "
         << my_shoe->type << "." << endl;
}

int main()    //�D�{���}�l
{
	person John("John","Kuo");	//�ŧi����
	object a_object;
	clothes a_clothes ("T shirt","white");
	pants a_pants ("short","green");
	shoe a_shoe ("gymshoe","blue");

	cout << "The first testing......." << endl;	//�Ĥ@�Ӵ���
	John.wear(a_object);	//�I�s���
	cout << endl << endl;
    cout << "The second testing......." << endl; //�ĤG�Ӵ���
	John.wear(a_clothes);	//�I�s���
	John.wear(a_pants);
	John.wear(a_shoe);

	John.show_data();

    system("PAUSE");
    return 0;
} //�D�{������
