/*
�d���ɦW�Gcall_by_reference.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int arith(int & , int & , int) ;  //��ƭ쫬�ŧi

int main()    //�D�{���}�l
{
	int first_term = 100, N_term = 1, d = 1;

	cout << "Before calling function...." << endl;
	cout << "The first term :" << first_term << "  The N term :" ;
	cout << N_term << "  d :" << d << endl;		//��X�U�ܼ�

	cout << endl << "Sum is " << arith( first_term, N_term, d)
         << " ." << endl;
    //�I�s��ƪ���k�P�ǭȩI�s�ۦP

	cout << endl << "After calling function...." << endl;
	cout << "The first term :" << first_term << "  The N term :" ;
	cout << N_term << "  d :" << d << endl;		//��X�U�ܼ�


    system("PAUSE");
    return 0;
} //�D�{������

//�ŧi�N�Ѽƫŧi���Ѧҫ��A
int arith(int &under_value, int &up_value, int d)
{																			
	int n, temp, total = 0; //��Ƥ��ϥ��ܼƪ��ŧi

	if (up_value < under_value){	//�ˬd�ǤJ���p��W�ɬO�_�j��U��
		temp = up_value;		//�Y�U�ɤj��U�ɡA�h�N��ӭȤ���
		up_value = under_value;
		under_value = temp;
	}

	n = (up_value - under_value) / d + 1;	//�p�ⶵ��

	total = (up_value + under_value ) * n / 2;	//�Q�Τ����p���`�M

	return total;	//�Ǧ^�p�⵲�G
}
