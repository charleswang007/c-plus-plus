/*
�d���ɦW�Gobj_arg.cpp
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
public:   
	String(const char * i_string);	//�غc�l
	String (String &);
	~String();	//�Ѻc�l
	void show_string();		
};

void String::show_string()	//��ܦr�ꤺ�e
{ cout << "string : " << string << "  length : " << len << endl; }

String::String(const char * i_string)	//�غc�l
{
	cout << "Constructor is called!" << endl;
	len = strlen(i_string);		//���o�ǤJ�r�ꪺ����
	string = new char [len + 1];	//�t�m�O����
	strcpy(string,i_string);	//�ƻs�r��
}

String::String(String & a_string):len (a_string.len) //�ƻs�غc�l
{
	cout << "Copy constructor is called !" << endl;
	string = new char [len + 1];	
	strcpy(string,a_string.string);
}

String::~String()	//�Ѻc�l
{
	cout << "Destructor is called !" << endl;
	delete [] string;
}

int main()    //�D�{���}�l
{
	void call_by_val(String);
 	//��ƭ쫬�ŧi�A�H�ǭȤ覡�ǻ�����Ѽ�
	void call_by_ref(String &);
 	//��ƭ쫬�ŧi�A�H�ǰѦҤ覡�ǻ�����Ѽ�
	String A_String("My string");	//�ŧi�r�ꪫ��

	cout << endl << "*******call by reference******" << endl;
	cout << "Before executing function..." << endl;
	call_by_ref (A_String);		//�I�s���
	cout << endl << "After executing function..." << endl;

	cout << endl << "*********call by value********" << endl;
	cout << "Before executing function..." << endl;
	call_by_val(A_String);		//�I�s���

	cout << endl << "******************************" << endl;
	cout << endl << "After executing function..." << endl;

    return 0;
} //�D�{������

void call_by_ref(String & aString) //��ƫŧi
{ cout << endl << "Executing call_by_ref function..." << endl; }

void call_by_val(String aString) //��ƫŧi
{ cout << endl << "Executing call_by_val function..." << endl; }
