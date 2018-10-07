/*
�d���ɦW�Gdyna_cast.cpp
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
	object(char * o_type, char * o_color)	//�غc�l
	{
		strcpy(type, o_type);
		strcpy(color, o_color);
	}
	object() {}
	virtual void set_object(person & a_person)	//�������
	{
        cout << "The set_object(person & a_person) of"
             << " object is called!" << endl;
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
	void wear(object *);
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
		cout << "The set_object() of shoe is called!" << endl << endl;
		a_person.my_shoe = this;
		//�N�ۤv�]�w���ǻ��L�Ӫ�person����my_clothes�ݩ�
    }
};

class clothes : public object
{
private:
	friend class person;	//�ŧiperson���O��friend���O
public:
	//�غc�l
	clothes(char * type, char * color) : object (type, color){}
	void set_object(person & a_person)	//�������
	{
		cout << "The set_object() of clothes is called!" << endl << endl;
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
		cout << "The set_object() of pants is called!" << endl << endl;
		a_person.my_pants = this;
	    //�N�ۤv�]�w���ǻ��L�Ӫ�person����my_clothes�ݩ�
    }
};

void person::wear(object * object_ptr)
{
	clothes * clothes_ptr;
	pants * pants_ptr;
	shoe * shoe_ptr;

	clothes_ptr = dynamic_cast<clothes*>(object_ptr);
	//�Q��dynamic_cast�Nobject_ptr�����A�ഫ��clothes *

	if(clothes_ptr != 0){	//�ˬd�૬�O�_���\
		clothes_ptr->set_object(*this);
    }
	else{
		pants_ptr = dynamic_cast<pants*>(object_ptr);
		//�Q��dynamic_cast�Nobject_ptr�����A�ഫ��clothes *

		if(pants_ptr != 0){	//�ˬd�૬�O�_���\
			pants_ptr->set_object(*this);
        }
		else{
			shoe_ptr = dynamic_cast<shoe*>(object_ptr);
			if(shoe_ptr != 0){	//�ˬd�૬�O�_���\
				shoe_ptr->set_object(*this);
            }
			else{
				object_ptr->set_object(*this);
            }
		}
	}
}

//���person���󪺩m�W�P���
//�]���ϥ�clothes�Bshoe�Ppants����A�ҥH�����b���B�ŧi
void person::show_data()
{
	cout << endl << "My name is " << first_name << " ";
    cout << last_name << "." << endl;
	cout << "I wear " << my_clothes->color << " " << my_clothes->type;
	cout << ", " << my_pants->color << " " << my_pants->type;
	cout << " and " << my_shoe->color << " ";
    cout << my_shoe->type << "." << endl;
}

int main()    //�D�{���}�l
{
	person John("John","Kuo");	//�ŧi����
	object a_object;
	clothes a_clothes ("T shirt","white");
	pants a_pants ("short","green");
	shoe a_shoe ("gymshoe","blue");

 	//�Ĥ@�Ӵ���
	cout << "The first testing......." << endl;
	John.wear(&a_object);	//�I�s���

 	//�ĤG�Ӵ���
	cout << endl << endl << "The second testing......." << endl;
	John.wear(&a_clothes);	//�I�s���
	John.wear(&a_pants);
	John.wear(&a_shoe);

	John.show_data();
 
    system("PAUSE");
    return 0;
} //�D�{������
