/*
�d���ɦW�Gdefault_assign.cpp
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
	String(const char *);	//�غc�l
	void show_string();	
};

void String::show_string()	//��ܪ��󤺮e
{
	cout << "string : " << string << "  string address : ";
	cout << (void *)string;	//�N�r������૬�����Vvoid���A����
										//�A�N�i��Xstring���Ъ���}��
	cout << "  length : " << len << endl;
}

String::String(const char * i_string)	//�غc�l
{
	len = strlen(i_string);		//���o�ǤJ�r�ꪺ����
	string = new char [len + 1];	//�t�m�O����
	strcpy(string,i_string);	//�ƻs�r��
}

int main()    //�D�{���}�l
{
	String A_String("The C++ Bible");	//�ŧi�r�ꪫ��
	String * B_String = new String ("C++ Explained");
 	//�ʺA�t�mString����

    A_String = *B_String;		//�B�ιw�]�� = �B��l

	cout << "A_String..." << endl;	//��X�r�ꪫ�󪺤��e
	A_String.show_string();

	cout << "B_String..." << endl;
	B_String->show_string();

    system("PAUSE");
    return 0;
} //�D�{������
