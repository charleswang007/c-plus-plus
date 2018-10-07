/*
�d���ɦW�Gcomposition.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�R�W�Ŷ������JC�y����string.h
using namespace std; //�ϥ�std�R�W�Ŷ�

class person
{
protected:
	char last_name[5]; //�m��
	char first_name[15]; //�W�r
public:
	//�غc�l�A�]�w����m�W
	person(const char * l_name, const char * f_name)
	{
		strcpy(last_name, l_name);
		strcpy(first_name, f_name);
	}
	person() { }

	//��X�m�W
	void show_data(){ cout << first_name << " " << last_name; }
};

//�Hpublic�覡�����~��person���O
class father : public virtual person
{
public:  
	//�غc�l�A�]�w����m�W
	father(const char * last_name, const char * first_name)
						: person(last_name, first_name) {}
	father() { }
	char * get_last_name() { return last_name;} //��X�m��
};

//�Hpublice�覡�����~��person���O
class mother : public virtual person
{
public:  
	//�غc�l�A�]�w����m�W
	mother(const char * last_name, const char * first_name)
							: person(last_name, first_name) {}
	mother() { }
};

//�w�q���O�Hpublic�覡�h���~�ө�father���O�Pmother���O
class child : public father, public mother
{
private: //�ŧi��Ʀ���
	father & my_father; //child����father����
	mother & my_mother; //child����mother����
public:      
	//�غc�l�A�]�wchild����m�W�P�����������
	child(father &, mother &, const char * );

	void show_data(); //��X�m�W�P�����˪����
};

child::child(father & a_father, mother & a_mother, const char * name)
				: my_father(a_father), my_mother(a_mother)
{
	strcpy(last_name, a_father.get_last_name());
	//�]�w�����~�Ӧ�person���O��last_name��Ʀ���

	strcpy(first_name, name);
	//�]�w�����~�Ӧ�person���O��first_name��Ʀ���
}

void child::show_data() //��X�m�W�P�����˪����
{
	person::show_data(); //�I�s�����~�Ӧ�person���O��show_data()�������
}

class family
{
private:
	father & a_father; //�x�sfather���󪺰Ѧ�
	mother & a_mother; //�x�smother���󪺰Ѧ�
	child ** child_list; //child���O��������а}�C
	int child_num; //���X�Ӥp��
public: //�غc�l
	family(father & a_father, mother & a_mother
                                    , child ** a_child_list, int num)
			: a_father(a_father), a_mother(a_mother), child_num(num)
	{
		child_list = new child * [child_num];
		//�t�m������а}�C�O����Ŷ�

		for (int i = 0; i < child_num; i++) //�]�w������а}�C
			child_list[i] = *(a_child_list + i);
	}

	void show_family_mem() //��ܮa�x���������
	{
		cout << "Father is ";
		a_father.show_data(); //��ܤ��˪��W�r
		cout << "." << endl << "Mother is ";
		a_mother.show_data(); //��ܥ��˪��W�r
		cout << "." << endl << "There are " << child_num
			 << " children." << endl << "They are ..." << endl;

		for (int i = 0; i < child_num; i++) //��ܤp�Ī����
		{
			child_list[i]->show_data();
			cout << endl;
		}
	}

	~family() { delete child_list; } //�Ѻc�l�A�R���ʺA�t�m���O����
};

int main() //�D�{���}�l
{
	father a_father("Kuo", "John");
	mother a_mother("Lin","Mary");
	child *  children[2]; //�ŧi������а}�C

	//�]�w������а}�C
	children[0] = new child(a_father, a_mother, "Joe");
	children[1] = new child(a_father, a_mother, "Mary");

	family a_family(a_father, a_mother, children,2);
	//�ŧifamily����

	a_family.show_family_mem(); //��ܮa�x���������

	system("PAUSE");
	return 0;
} //�D�{������
