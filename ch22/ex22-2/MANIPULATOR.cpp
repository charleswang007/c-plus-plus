/*
�d���ɦW�Gmanipulator.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <iomanip>	//���Jiomanip���Y��

using namespace std; //�ϥ�std�W�٪Ŷ�

int main() //�D�{���}�l
{
	double d = 24.5467865;
	int n = 24;

	cout << "Using manipulator oct , setw() and setiosflags...";
    cout << endl;
	cout << oct << setw(10) << right << n << endl;
	//�N�ƭ��ഫ��8�i����X, �Hsetw�]�w���e�׬�10�A�B�a�k���

	cout << "Using manipulator setprecision and resetiosflags...";
    cout << endl;
	cout << setiosflags(ios::scientific) << setprecision(4) << d;
	//�B��setiosflags�榡����l�]�w�B�I�ƥH��ǰO����X�A
	//�B��T�׬��p���I��4��

    cout << endl;

	cout << resetiosflags(ios::scientific) << d << endl;
	//�B��resetiosflags�榡����l
    //�M���B�I�ƥH��ǰO����X�B�I�ƪ��]�w

    system("PAUSE");
    return 0;
} //�D�{������
