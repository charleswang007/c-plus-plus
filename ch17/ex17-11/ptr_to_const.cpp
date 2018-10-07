/*
�d���ɦW�Gptr_to_const.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Reader //�}�l�ŧi���O
{
private:
	char name[10];
public:
    //�ŧi�غc�l
    Reader(char * i_name)
    { strcpy(name, i_name); }

    //�ŧi��k
    const char * get_const_name( ) //get_name��Ƥ��i�H���
    { return name; }

    char * get_name( ) //get_name��Ƥ��i�H���
    { return name; }

    void show_name() const	//��X������
    {	cout << "name : " << name << endl; }
};

int main()    //�D�{���}�l
{
	Reader A_Reader("John");
    const char * const_reader_name; //���V�`�Ʀr�����A��ƪ�����
    char * reader_name; //���V�r�����A��ƪ�����

    const_reader_name = A_Reader.get_const_name();
    //�H���V�`�ƫ��A��Ƥ����Ш��o�x�sname�ݩʤ��r���}�C���_�l��}

    //*(conat_reader_name + 2) = 'c';
    //���~�I�L�k�z�Lget_name������ƶǦ^����
    //�A�ק�name�ݩʩҫ��V��}���x�s���

    A_Reader.show_name(); //���Reader����name�ݩ�

    reader_name = A_Reader.get_name();
    //���o�x�sname�ݩʤ��r���}�C���_�l��}

    *(reader_name + 2) = 'c';
    //�z�L��get_name������ƨ��o
    //�A���VReader����name�ݩʤ���}�����Эק��ݩʭ�

    A_Reader.show_name(); //���Reader����name�ݩ�

    system("PAUSE");
    return 0;
} //�D�{������
