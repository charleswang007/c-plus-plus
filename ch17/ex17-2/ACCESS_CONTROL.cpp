/*
�d���ɦW�Gaccess_control.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Reader	//�}�l�ŧi���O
{
private:       //�ŧi�ݩ�
	char name[10];
public:        
	long index;		//�N index �ݩʫŧi�� public ����

	char * get_name() { return name;}	//�ŧi��k
	void set_name(char * i_name);		//�ŧiset_name������ƪ��쫬
};		//���O�ŧi����

void Reader::set_name(char * i_name)	//set_name������ƪ����e
{
	strcpy(name, i_name);		//�� strcpy ��ƱN i_name �ƻs�� name
}

int main()    //�D�{���}�l
{
	Reader A_Reader;	//�ŧi A_Reader �� Reader ���O������
	char name[10];	

	cout << "Please input your name ?";
	cin >> name;;

	A_Reader.index = 1;		//�s�� A_Reader ���� index �ݩ�

	A_Reader.set_name(name);	//�I�s A_Reader ���� set_name() ��k

	cout << "Your name is ";
	cout << A_Reader.get_name();
 	//�I�s A_Reader ���� get_name() ��k
	cout << ".( index " << A_Reader.index;
    //��X A_Reader ���� index �ݩ�
	cout << ")" << endl;

    system("PAUSE");
    return 0;
}        //�D�{������


