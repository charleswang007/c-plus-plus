/*
�d���ɦW�Gstl_alg_math.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <algorithm>
#include <vector>

using namespace std; //�ϥ�std�W�٪Ŷ�

//�N��for_each�Ptransform�M�Ϊ����
int Square(int i) { return i * i; }
void print(int i) {cout << i << " ";}

int main()
{
	int a[] = {1,4,7,2,9,4,3};
	vector<int> v1(a, a+7);
	int num = 0;
	
	cout << "Counting number of 'G' in v1..." << endl;
	num = count(v1.begin(), v1.end(), 4);	//�p��v1��'G'���Ӽ�
	cout << "There are " << num << " number 4 in v1." << endl;

	cout << "Maxium element : "
         << *( max_element(v1.begin(), v1.end())) << endl;
	//��X�e�����̤j������

	cout << "Minium element : "
         << *( min_element(v1.begin(), v1.end())) << endl;
	//��X�e�����̤p������

	cout << "Print vector..." << endl;
	for_each(v1.begin(), v1.end(), print);
 	//�Nprint�M�Φb�e���C�Ӥ���

	cout << endl;

	cout << "transform element..." << endl;
	vector<int> v2(v1.size());
	transform(v1.begin(), v1.end(), v2.begin(), Square);
		//�N�e�����C�Ӥ����Q��Square�ഫ���䥭���
	for_each(v2.begin(), v2.end(), print);
	cout << endl;

    system("PAUSE");
    return 0;
} //�D�{������
