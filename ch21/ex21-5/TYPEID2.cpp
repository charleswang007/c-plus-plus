/*
�d���ɦW�Gtypeid2.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <typeinfo> //���J�w�qtypeid�B��l�����Y��
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

template <class TYPE>	//�ŧi��ӰѼƪ��˪����
void Max(TYPE a, TYPE b)
{
	cout << "data type : ";
	cout << typeid(TYPE).name();	//��ܮM�μ˪�����ƫ��A
	cout << endl;
}	//�����˪���ƫŧi

int main()			//�D�{���}�l
{
	int a = 2, b = 3;
	char c = 'A' , d = 'B';

	Max(a,b);	//�N��ƶǤJ�˪����
	Max(c,d);	//�N�r���ǤJ�˪����

    system("PAUSE");
    return 0;
} //�D�{������
