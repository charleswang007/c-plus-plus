/*
�d���ɦW�GDECLARE_STR_OBJECT.cpp
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
	int len;
public:        //�ŧi������ƭ쫬
	void show_string();
	void set_string(char * i_string);
};
//�w�q�r�����O���������
void String::show_string()	//��ܦr�ꤺ�e
{
	cout << "string : " << string << "  length : " << len << endl;
}

void String::set_string(char * i_string)	//�]�w�r���
{
	len = strlen(i_string);		//���o�ǤJ�r�ꪺ����
	string = new char [len + 1];	//�t�m�O����
	strcpy(string,i_string);	//�ƻs�r��
}

int main()    //�D�{���}�l
{
	String A_String;	//�ŧi�r��
	char i_string[10] = "My string";
	
	A_String.set_string(i_string);
 	//�I�sA_Stirng���������set_string�A�]�w�r���
	A_String.show_string();
 	//�I�sA_Stirng���������show_string�A��ܦr�ꤺ�e

    system("PAUSE");
    return 0;
}        //�D�{������
