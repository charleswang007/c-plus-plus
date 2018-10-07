/*
�d���ɦW�Gexp_con.cpp
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
	String(const char * i_string);
	explicit String(int = 0);	//�Q�ŧi��explicit���غc�l
	~String() { delete [] string; }
};

String::String(const char * i_string)
{
	len = strlen(i_string);		//���o�ǤJ�r�ꪺ����
	string = new char [len + 1];	//�t�m�O����
	strcpy(string, i_string);	//�ƻs�r��
}

String::String(int size)	//�Q�ŧi��explicit���غc�l
{
	cout << "Explicit Constructor!" << endl;
 	//�Q�I�s�ɡA�N��XExplicit constructor�r��
	string = new char [size];
}

void convert(String a_string) { cout << "Test " << endl; }

int main()	//�D�{���}�l
{
	String a_string(12);	//���ɱN�I�sexplicit�غc�l

	//convert(12);
	//�N��ƶǤJconvert��ơA���ɻݭn���A�ഫ�A
    //��������Ƭ��ǤJ�Ѽƪ��غc�l�A�o�Q�ŧi��explicit�غc�l�A
    //�{���N�L�k�۰ʩI�s���櫬�A�ഫ

   	convert((String)12);
	//�I�sexplicit�غc�l����j��A�ഫ

    system("PAUSE");
    return 0;
} //�D�{������
