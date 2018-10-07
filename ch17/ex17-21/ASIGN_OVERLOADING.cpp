/*
�d���ɦW�GASIGN_OVERLOADING.cpp
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
	String();
	String(const char *);
	void show_string();	
	String & operator= (const String &);	//�h�� = �B��l
};

void String::show_string()	//��ܪ��󤺮e
{
	cout << "string : " << string << "  string address : ";
	cout << (void *)string;	//�N�r������૬�����Vvoid���A����
										//�A�N�i��Xstring���Ъ���}��
	cout << "  length : " << len << endl;
}

String::String()
{
	len = 0;
	string = new char [len + 1];
	string[0] = '\0';
}

String::String(const char * i_string)	//�غc�l
{
	len = strlen(i_string);		//���o�ǤJ�r�ꪺ����
	string = new char [len + 1];	//�t�m�O����
	strcpy(string,i_string);	//�ƻs�r��
}

String & String::operator= (const String & str)
{ 
	cout << "overloading operator" << endl;
	delete string;//����string�ݩʪ��O����Ŷ�

	len = str.len;
	string = new char [len + 1];	//���s�t�m�O����Ŷ�
	strcpy(string, str.string);	//�ƻs�r���

	return * this;	//�N����ۤv�^��
}

int main() //�D�{���}�l
{
	String A_String("My string"); //�ŧi�r�ꪫ��
	String B_String;

	B_String = A_String; //�I�s�h���� = �B��l
	
	cout << "A_String..." << endl;
	A_String.show_string();

	cout << "B_String..." << endl;
	B_String.show_string();

    system("PAUSE");
    return 0;
} //�D�{������
