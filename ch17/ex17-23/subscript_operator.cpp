/*
�d���ɦW�Gsubscript_operator.cpp
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
	String(const char *);
	void show_string();	
	char operator[] (int offset);	//�h�� [] �B��l
};

String::String(const char * i_string)	//�غc�l
{
	len = strlen(i_string);		//���o�ǤJ�r�ꪺ����
	string = new char [len + 1];	//�t�m�O����
	strcpy(string,i_string);	//�ƻs�r��
}

void String::show_string()	//��ܪ��󤺮e
{
	cout << "string : " << string << "  length : " << len << endl;
}

char String::operator[] (int offset)
{ 
    if (offset >= len){
        offset = len - 1;
        //�Yoffset�W�L�r����סA�h�Noffset�]�w��len -1
    }
    else if ( offset < 0){
        offset = 0;
        //�Yoffset�p��0�A�h�Noffset�]�w��0
    }

 	return string[offset];	//�Ǧ^���o���r��
}

int main()    //�D�{���}�l
{
	String A_String("The C++ Bible");	//�ŧi�r�ꪫ��

    A_String.show_string();	//���C_String���e

 	cout << "A_String[4] = " << A_String[4] << endl;
    //�I�s�h���� [] �B��l

    system("PAUSE");
    return 0;
} //�D�{������


