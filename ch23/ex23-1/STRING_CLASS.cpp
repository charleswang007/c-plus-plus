/*
�d���ɦW�Gstring_class.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <string> //���J�w�qsring���O�����Y��
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int main() //�D�{���}�l
{
	char p[5] = "John";
	string s1("string"); //�Q�Φr��إߪ���
	string s2(s1);	//�Q��s1����إ�s3����
	string s3(s1, 2, 4);
    //�Q��s1�����2�Ӧr����4�Ӧr���]ring�^�إ�s4����

	string s4;	//�ŧi�@�ӨS����ƪ�s4�r��
	string s5(5, '*'); //�Q��5��*���إߦr��
	string s6(p +1, p+3); //�Q�� p �r���}�C�إߦr�ꪫ��
	string s7 = s1;	//�ƻss1����

	cout << " s1 = " << s1 << " s2 = " << s2 << " s3 = " << s3 << endl;
	cout << " s4 = " << s4 << " s5 = " << s5 << " s6 = " << s6 << endl;
	cout << " s7 = " << s7 << endl;

    system("PAUSE");
    return 0;
} //�D�{������
