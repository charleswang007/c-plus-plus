/*
�d���ɦW�Gset_flag.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int main()	//�D�{���}�l
{
	double d = 24.546;
	int n = 24;

	cout.setf(ios::fixed);	//�]�wfixed�X�СA�ϯB�I�ƥHfixed�覡���
	cout << "Showing number by fixed-point notation...";
    cout << endl << d << endl;

	cout.unsetf(ios::fixed);	//�M��fixed�X��
	cout.setf(ios::scientific);	//�]�wscientific�X��
	cout << "Showing number by scientific notation...";
    cout << endl << d << endl;

	cout.setf(ios::showpos);	//�]�wshowpos�X��
	cout << "Showing positive and negative sign before number...";
	cout  << endl << d << endl;

	cout.setf(ios::oct);	//�]�woct�X�СA�H8�i����ܼƦr
	cout << "Showing 24 in octal..." << endl << n << endl;

	cout.setf(ios::hex, ios::basefield);
	//�M���i���X�СA�M��]�whex�X�ХH16�i����ܼƦr
	cout << "Showing 24 in hexadecimal..." << endl << n << endl;

    system("PAUSE");
    return 0;
} //�D�{������
