/*
�d���ɦW�Gstr_destructor.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class String     //�}�l�ŧi���O
{
private:       //�ŧi�ݩ�
	char * string;
	long len;
public:        //�ŧi������ƭ쫬
	String(const char * i_string);	//�غc�l
	~String();	//�Ѻc�l
	void show_string();		
};

void String::show_string()	//��ܦr�ꤺ�e
{
	cout << "string : " << string
         << "  length : " << len << endl;
}

String::String(const char * i_string)	//�غc�l
{
	cout << "Constructor is called!\n";
	len = strlen(i_string);		//���o�ǤJ�r�ꪺ����
	string = new char [len + 1];	//�t�m�O����
	strcpy(string,i_string);	//�ƻs�r��
}

String::~String()	//�Ѻc�l
{
	cout << "Destructor is called !" << endl;
	delete [] string;
}

int main()    //�D�{���}�l
{
   	String * A_String = new String("My string");
    //�ŧistring���СA�ëإ�String����

    A_String->show_string();
    //�I�sA_Stirng��show_string������ơA��ܦr�ꤺ�e

    delete A_String; //�R��String

    system("PAUSE");
    return 0;
} //�D�{������
