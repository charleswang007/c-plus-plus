/*
�d���ɦW�Grein_cast.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int main() //�D�{���}�l
{
	char aChar = 'A', * cp = &aChar; //�ŧi�r���ܼƥH�Φr���ܼƫ���
	void *vp;	//�ŧivoid����

	vp = cp;	//�Ncp�]�w��vp
	cout << "Casting void * to char * : ";
	cout << *(reinterpret_cast<char*>(vp));
    //��X�ɡA�Nvoid*�ഫ��char*
    //�A�Y���ഫ��char*�A�N�L�k��Xvp���V�O����Ŷ��x�s����
	cout << endl;

    system("PAUSE");
    return 0;
} //�D�{������
