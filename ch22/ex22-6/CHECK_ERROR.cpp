/*
�d���ɦW�Gcheck_error.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int main()	//�D�{���}�l
{
	int i;

	cout << "Please input a integer : " << endl;
	cin >> i;	//Ū���@�Ӿ��

	//��X��Ƭy���~�ˬd��ƪ��ˬd���G
	cout << "good() = " << cin.good() << endl;
	cout << "eof() = " << cin.eof() << endl;
	cout << "fail() = " << cin.fail() << endl;
	cout << "bad() = " << cin.bad() << endl << endl;

	cin.clear();	//���]���~���A�줸

	cout << "Reset error state ..." << endl;
	cout << "good() = " << cin.good() << endl;
	cout << "eof() = " << cin.eof() << endl;
	cout << "fail() = " << cin.fail() << endl;
	cout << "bad() = " << cin.bad() << endl;

    system("PAUSE");
    return 0;
} //�D�{������
