/*
�d���ɦW�Gclass_type_con.cpp
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
	friend void call_by_value(String);	//�ŧifriend���
public:        //�ŧi������ƭ쫬
	String(const char *);
	operator char * ()	//�h�����A�ഫ�B��l
	{
		cout << "Type convert operator is called!" << endl;
		return string;
	}
};

String::String(const char * i_string)	//�غc�l
{
	cout << "Type convert constructor is called!" << endl;
	len = strlen(i_string);		//���o�ǤJ�r�ꪺ����
	string = new char [len + 1];	//�t�m�O����
	strcpy(string,i_string);	//�ƻs�r��
}

void call_by_value(String str)	//�Ω���ի��O�ഫ�غc�l�����
{ cout << str.string << endl; }

void type_con (char * str)	//�Ω���ի��O�ഫ�B��l�����
{ cout << str << endl; }

int main()    //�D�{���}�l
{
	String A_String("My String");	//�Ĥ@�ءG�إߪ���

	call_by_value("test");	//�ĤG�ءG���󪺶ǭȩI�s

	type_con(A_String);	//�I�s���O�ഫ�B��l

    system("PAUSE");
    return 0;
} //�D�{������
