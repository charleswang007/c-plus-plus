/*
�d���ɦW�Gconstructor.cpp
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

	Reader(char * name)		//�إ߫غc�l�A�ǤJ�@�Ӧr���}�C
	{
		cout << "Reader's costructor is called!" << endl;
		set_name(name);	//�I�sset_name ��k�A�I�s�ۤv����k���Ϋ��w���W��
		index = 1;
	}

	char * get_name() { return name;}	//�ŧi��k
	void set_name(char * i_name);  //�ŧiget_name������ƪ��쫬
};		//���O�ŧi����

void Reader::set_name(char * i_name)	//get_name������ƪ����e
{
	strcpy(name, i_name);		//�� strcpy ��ƱN i_name �ƻs�� name
}

int main()    //�D�{���}�l
{
	char name[10];	

	cout << "Please input your name ?";
	cin >> name;

	Reader A_Reader(name);	//�ŧi A_Reader �� Reader ���O������
				//�غc�l�Q�I�s
	cout << "Your name is ";
	cout << A_Reader.get_name();
    //�I�s A_Reader ����get_name()��k

	cout << ".( index " << A_Reader.index;
    //��X A_Reader ���� index �ݩ�

	cout << ")" << endl;

    system("PAUSE");
    return 0;
} //�D�{������

