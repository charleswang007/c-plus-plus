/*
�d���ɦW�Gmulti_arg_tmp.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

//�w�q��ӫ��O�Ѽƪ��˪����
template <class TYPE_1, class TYPE_2> void Max(TYPE_1 a, TYPE_2 b)
{
	cout << "Maxium is ";

	if( a > b)
		cout << a;	
	else
		cout << b;

	cout << "." << endl;
}	//�����˪���ƫŧi

int main()	//�D�{���}�l
{
	double a = 5.1;
	int b = 2;

	Max(a,b); //�I�s�˪����

    system("PAUSE");
    return 0;
} //�D�{������
