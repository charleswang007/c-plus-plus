/*
�d���ɦW�Gstream_fun.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int main()			//�D�{���}�l
{
	double d = 24.5467865;
	int n = 24;

	cout << "Using ios's member function [width and setf()]...";
    cout << endl;
	cout.width(10);	//�ϥ�width�]�w���e�׬�10
	cout.setf(ios::oct | ios::right);	//�]�woct�Pright�X��
	cout << n << endl;

	cout << "Using ios's member function [precision]..." << endl;
	cout.precision(4);	//�]�w��T�׬��p���I��4��
	cout.setf(ios::scientific);
	cout << d << endl;
	cout.unsetf(ios::scientific);	//�M���B�I�ƥH��ǰO����X���]�w
	cout << d << endl;

    system("PAUSE");
    return 0;
} //�D�{������
