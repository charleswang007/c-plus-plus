/*
�d���ɦW�Gtmp_fun.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

//�w�q��ӫ��O�Ѽƪ��˪����
template <typename TYPE> void Max(TYPE a, TYPE b)
{
	cout << "Maxium is ";

	if( a > b)
		cout << a;	
	else
		cout << b;

	cout << "." << endl;
}	//�����˪���ƫŧi

int main() //�D�{���}�l
{
	int a = 2, b = 3; //�ŧi��ư}�C
	char c = 'A' , d = 'B';	//�ŧi�r���}�C

	Max(a,b); //�N��ƶǤJ�˪����
	Max(c,d); //�N�r���ǤJ�˪����

    system("PAUSE");
    return 0;
} //�D�{������
