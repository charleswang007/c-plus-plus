/*
�d���ɦW�Gtry_catch.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int main() //�D�{���}�l
{
	int x, y;

	cout << "Please input two integer for finding"
         << " modulus...(x % y)" << endl;
	cin >> x >> y;

	try{	//���~���հ϶�
		if(y == 0)	//�ˬd���ƬO�_���s�A�O�h��X�ҥ~
			throw("The y cann't be a zero!\n");
			
		cout << "Modulus is " << x % y << " ." << endl;	//�D�X�l��
	}
	catch (char * s) {cerr << s;} //���~�B�z�϶�

    system("PAUSE");
    return 0;
} //�D�{������
