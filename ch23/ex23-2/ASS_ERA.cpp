/*
�d���ɦW�Gass_era.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <string> //���J�w�qsring���O�����Y��
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int main()
{
	string s1, s2;

	s1 = "string";	//�N�r��������r�ꪫ��

	s2.assign(s1);	//�Ns1������s2�A��i�g��s2 = s1
	cout << "Assign string..." << endl << "s1 : ";
    cout << s1 << "  s2 : " << s2 << endl;

	s2.insert(0,"This isn't a ");	//�N"This is a "���Js2��
	cout << "Insert string to s2..." << endl;
    cout << "s2 : " << s2 << endl;

	s2.swap(s1);	//����s1�Ps2
	cout << "Swap s1 and s2.." << endl;
    cout << "s1 : " << s1 << "  s2 : " << s2 << endl;

	s1.erase(7, 3);	//�Ns1�r���8�Ӧr�����᪺3�Ӧr������
	cout << "Erase 'This is a ' form s1..." << endl;
    cout << "s1 : " << s1 << endl;

	s1[2] = 'I';	//�]�w�r�ꪺ�ĤT�Ӧr��
	cout << "s1 : " << s1 << endl;

	cout << "Get substring..." << endl;
	cout << "s[4-5] : "<< s1.substr(5, 2) << endl;
 	//�^����6�Ӧr���᪺2�Ӧr��

    system("PAUSE");
    return 0;
} //�D�{������
