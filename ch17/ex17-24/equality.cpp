/*
�d���ɦW�Gequality.cpp
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
	bool operator==(String & str)	//�h���۵��B��l
	{
        return !strcmp(string, str.string);
        //���ǤJ��String����string�ݩʭȬO�_�ۦP
	}
};

String::String(const char * i_string)	//�غc�l
{
 	len = strlen(i_string);		//���o�ǤJ�r�ꪺ����
	string = new char [len + 1];	//�t�m�O����
	strcpy(string,i_string);	//�ƻs�r��
}

int main()    //�D�{���}�l
{
	String A_String("The C++ Bible");
    String B_String("C++ Explained");

    if(A_String == B_String)
        cout << "A_String == B_String" << endl;
    else
        cout << "A_String != B_String" << endl;

    system("PAUSE");
    return 0;
} //�D�{������
