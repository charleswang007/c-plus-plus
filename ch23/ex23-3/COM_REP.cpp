/*
�d���ɦW�Gcom_rep.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <string> //���J�w�qsring���O�����Y��
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

void com_res(int);	//��X�r�������G

int main()			//�D�{���}�l
{
	string s1("string"), s2("String");

	cout << "Using comparsion operator..." << endl;
	if (s1 > s2)	//�ϥΤ���B��l����j�p
		cout << "s1 is after s2!" << endl;
	else if(s1 > s2)
		cout << "s1 is before s2!" << endl;
	else
		cout << "s1 and s2 are the same!" << endl;

	cout << "Compare s1 and s2..." << endl;
	int c = s1.compare(s2);	//���s1�Ps2
	com_res(c);

    cout << endl << "Find postion of 'ing' substring in s1 : ";
    cout << s1.find("ing") << endl;
	//�M��r�ꤤing�l�r�ꪺ��m

	s2.replace(s2.find("tring"), 5, "TRING");
	//�Ns2��tring���Ӧr���m����TRING
	cout << endl << "Replace s2's substring(tring) by 'TRING'...";
	cout << endl << "s2 : " << s2 << endl;

    system("PAUSE");
    return 0;
} //�D�{������

void com_res(int result)	//��X������G
{
	if(result == 0)
		cout << "Two strings are the same !" << endl;
	else if(result < 0)
		cout << "s1 is before s2 !" << endl;
	else
		cout << "s1 is after s2 !" << endl;
}
