/*
�d���ɦW�Gmutable.cpp
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
    mutable int cursor;
public:        //�ŧi������ƭ쫬
	String(char * i_string);	//�غc�l
    char get_current_char() const;
    int get_cursor() const;
	void show_string();
};

String::String(char * i_string)	//�غc�l
   :len(strlen(i_string)), cursor(1)
{
	string = new char [len];	//�t�m�O����
	strcpy(string, i_string);	//�ƻs�r��
}

char String::get_current_char() const
{
    int cur_cursor = cursor; //���o�ثe���Ц�m

    cursor ++; //���ЦV�Ჾ��
    //���Mget_current_char������Ƭ�const������ơA
    //�����i�H�ק�Hmutable�w�q��current�ݩ�

    if(cursor > len)
        cursor = 1; //����в��ܦr���A�N�����k����1�Ӧr��

    return *(string + cur_cursor - 1); //�ǥX�ثe���Ы��V���r��
}

int String::get_cursor() const
{
    return cursor;
}

int main()    //�D�{���}�l
{
    String A_String("The C++ Bible");	//�ŧi�r�ꪫ��
    const String B_String("C++ Explained"); //�ŧi�r��`�ƪ���
    int i;

    //�B�Ϋ��п�XString���󤺪��r��
    for (i=1 ; i<=3 ; i++){
       cout << "A_String[" << A_String.get_cursor() << "]=";
       cout << A_String.get_current_char() << endl;
    }

    cout << endl;

    //�B�Ϋ��п�XString���󤺪��r��
    for (i=1 ; i<=3 ; i++){
       cout << "B_String[" << B_String.get_cursor() << "]=";
       cout << B_String.get_current_char() << endl;
       //���MB_String���󬰱`�ƪ���A���Oget_current_char������ơA
       //���M�i�H�ק�cursor�ݩ�
    }

    system("PAUSE");
    return 0;
}        //�D�{������
