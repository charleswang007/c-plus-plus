/*
�d���ɦW�Gnew_delete.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int main() //�D�{���}�l
{
	int *ptr = new int (20); //�ŧi���СA�ðt�m���ШϥΪ��O����

	cout << " name  |  address    |  value " << endl;
	cout << "----------------------------------" << endl;
    //��X���D

	cout << " ptr   |  " << ptr << "   |  " << *ptr << endl;
    //��X�����ܼƪ���}�P��

	delete ptr; //����t�m�� ptr ���O����Ŷ�

    system("PAUSE");
    return 0;
} //�D�{������
