/*
�d���ɦW�Gstr_con.cpp
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
	String(char * i_string);	//�غc�l
	void show_string();		
};

void String::show_string()	//��ܦr�ꤺ�e
{
	cout << "string : " << string << "  length : " << len << endl;
}

String::String(char * i_string)	//�غc�l
{
	cout << "Constructor is called!" << endl;
	len = strlen(i_string);		//���o�ǤJ�r�ꪺ����
	string = new char [len + 1];	//�t�m�O����
	strcpy(string,i_string);	//�ƻs�r��
}

int main()    //�D�{���}�l
{
	char i_string[10] = "My string";
	String A_String(i_string);	//�ŧi�r�ꪫ��

	A_String.show_string();
    //�I�sA_Stirng���������show_string�A��ܦr�ꤺ�e

    system("PAUSE");
    return 0;
}        //�D�{������
