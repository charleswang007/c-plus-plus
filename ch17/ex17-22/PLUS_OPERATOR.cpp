/*
�d���ɦW�Gplus_operator.cpp
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
	String & operator= (const String &);	//�L�� = �B��l
	String operator+ (String );	//�h�� + �B��l
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

String & String::operator= (const String &str)
{ 
	delete [] string;//����string�ݩʪ��O����Ŷ�

	len = str.len;
	string = new char [len + 1];	//���s�t�m�O����Ŷ�
	strcpy(string, str.string);	//�ƻs�r���

	return * this;	//�N����ۤv�^��
}

String String::operator+ (String str)
{ 
	char * strbuf = new char [len + str.len + 1];
    //�ʺA�t�m�}�C�j�p

	strcpy(strbuf, string);	//�ƻs�r���
	strcat(strbuf, str.string);	//�X�֦r��

	String retstr(strbuf);	//�H strbuf �r���ܼƫإߦr�ꪫ��
	delete [] strbuf;	//���� strbuf �r�ꪺ�Ŷ�

	return retstr;	//�Ǧ^�r�ꪫ��
}

int main()    //�D�{���}�l
{
	String A_String("My ");	//�ŧi�r�ꪫ��
	String B_String("string"), C_String;

	C_String = A_String + B_String;
    //�I�s�h���� = �B��l�P + �B��l

	C_String.show_string();	//���C_String���e

    system("PAUSE");
    return 0;
} //�D�{������


