/*
�d���ɦW�Gout_of_range.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <stdexcept> //���Jstdexcept

using namespace std; //�ϥ�std�W�٪Ŷ�

int main() //�D�{���}�l
{
	string * s;

	try{
		s = new string("John");
		s->substr(10, 2);
        //�W�X�r�ꪺ�j�p�A�N��Xout_of_range����
	}
	catch (out_of_range o)
    { cout << "Throw an exception (out_of_range) : " << o.what() << endl; }
	catch (bad_alloc ba)
    { cout << "Throw an exception (bad_alloc) : " << ba.what() << endl; }
	//��X���~�T��

    system("PAUSE");
    return 0;
} //�D�{������
