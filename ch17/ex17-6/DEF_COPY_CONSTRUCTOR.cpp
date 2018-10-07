/*
�d���ɦW�Gdef_copy_constructor.cpp
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
	String();		//�w�]�غc�l
	String(const char * i_string);	//�غc�l
	String(String & a_string);	//�ƻs�غc�l
	void show_string();	
};

void String::show_string()	//��ܦr�ꤺ�e
{ cout << "string : " << string << "  length : " << len << endl; }

String::String()	//�w�]�غc�l
{   cout << "Define constructor is called !" << endl;   }

//�@��غc�l
String::String(const char * i_string) : len (strlen(i_string))
{
	cout << "Constructor is called !" << endl;
	string = new char [len + 1];	//�t�m�O����
	strcpy(string,i_string);	//�ƻs�r��
}

//�ƻs�غc�l
String::String(String & a_string) : len (a_string.len)
{
	cout << "Copy constructor is called !" << endl;
	string = new char [len + 1];	
	strcpy(string,a_string.string);
}

int main()    //�D�{���}�l
{
	String A_String("My string");	//�ŧi�r�ꪫ��A�I�s�@��غc�l
	String B_String(A_String);	//�I�s�ƻs�غc�l
	String C_String;	//�I�s�w�]�غc�l
	
	cout << "---------------------------------" << endl;
	cout << "A_String : " << endl;
	A_String.show_string();
    //�I�sA_Stirng��show_string������ơA��ܦr�ꤺ�e

	cout << "B_String : " << endl;
	B_String.show_string();
    //�I�sB_Stirng��show_string������ơA��ܦr�ꤺ�e

    system("PAUSE");
    return 0;
} //�D�{������
