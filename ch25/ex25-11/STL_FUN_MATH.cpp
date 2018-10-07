/*
�d���ɦW�Gstl_fun_math.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <functional>	//���Jfunctional���Y��
#include <algorithm>
#include <vector>

using namespace std; //�ϥ�std�W�٪Ŷ�

//�N��for_each�M�Ϊ����
void print(int i) {cout << i << " ";}

int main()
{
	int a[] = {1,4,7,2,9,4,3};
	vector<int> v1(a, a+7), v2 = v1, v3(v1.size());

	cout << "transform element..." << endl << "v1 : ";
	for_each(v1.begin(), v1.end(), print);
	cout << endl << "v2 : ";
	for_each(v2.begin(), v2.end(), print);
	cout << endl << "v3 (v1 + v2) :";
	transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), plus<int>());
	//�Nv1�Pv2�������ۥ[�A���x�s��v3

	for_each(v3.begin(), v3.end(), print);
	cout << endl;

	cout << "sort element.." << endl << "v3 : ";
	sort(v3.begin(), v3.end(), greater<int>());
 	//�H����覡�ƦC�e��������

	for_each(v3.begin(), v3.end(), print);
	cout << endl;

    system("PAUSE");
    return 0;
} //�D�{������
