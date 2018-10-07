/*
�d���ɦW�Gstl_fun_def.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <algorithm>
#include <vector>

using namespace std; //�ϥ�std�W�٪Ŷ�

class Square //��ƪ������O
{
public:
    //�w�q�L����()�B��l������ƪ��󪺼˪����
	template <class T>
    T operator() (T i) { return i * i; }
};

template <class T>	//�˪���ƪ������O
class tmpSquare
{
public:
	T operator() (T i) { return i * i; }
};

void print(int i) {cout << i << " ";}

int main()
{
	int a[] = {1,4,7,2,9,4,3};
	vector<int> v1(a, a+7), v2(v1.size()), v3(v1.size());

	cout << "transform element by function object..."
         << endl <<"v2 : ";
	transform(v1.begin(), v1.end(), v2.begin(), Square());
	//�Q�Ψ�ƪ���N�����ഫ�������

	for_each(v2.begin(), v2.end(), print);
	cout << endl << "transform element by template function object...";
	cout << endl << "v3 : ";

	transform(v1.begin(), v1.end(), v3.begin(), tmpSquare<int>());
	//�Q�ΥѼ˪���ƪ���N�����ഫ�������

	for_each(v3.begin(), v3.end(), print);
	cout << endl;

    system("PAUSE");
    return 0;
} //�D�{������
