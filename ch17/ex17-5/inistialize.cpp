/*
�d���ɦW�Ginistialize.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Reader	//�}�l�ŧi���O
{
private:       //�ŧi�ݩ�
	char * name;
	long index;
    int age;
    char sex;
    int name_len;

public:
    //�ŧi�غc�l
	Reader(char * i_name, char i_sex, int i_age);
    //�غc�l���ŧi�B�A�����C�X�����_�l�ǦC

    //�ŧi��k
    void show_data()  //���Ū�̪��򥻸��
    {
        cout << "Reader's Data...." << endl;
        cout << "name : " << name << endl;
        cout << "sex : " << sex << endl;
        cout << "age : " << age << endl;
        cout << "index number : " << index << endl;
    }
};		//���O�ŧi����

Reader::Reader(char * i_name, char i_sex, int i_age)
    :name_len(strlen(name)), index(2), sex(i_sex), age(i_age)
{
    name = new char [name_len + 1];	//�t�m�O����

    strcpy(name, i_name); //�� strcpy ��ƱN i_name �ƻs�� name
}

int main()    //�D�{���}�l
{
	char name[10] = "John";

	Reader A_Reader(name, 'M', 10);
    //�ŧi A_Reader �� Reader ���O������A�غc�l�N�Q�I�s

 	A_Reader.show_data();
    //�I�s A_Reader ����show_date()��k��XŪ�̪��򥻸��

    system("PAUSE");
    return 0;
} //�D�{������
