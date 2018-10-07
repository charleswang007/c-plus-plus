/*
�d���ɦW�Gstl_alg_sort.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <algorithm>
#include <vector>

using namespace std;

template <class T>
void print(vector<T> & pri_con)	//�Ω�C�L�e�����e���˪����
{
	if(pri_con.empty())	//�P�Opri_con�O�_�����
		cout << "Container is empty!" << endl;
	else{
		typename vector<T>::iterator i;	//�ŧi���쾹

        //�Q��for�j��C�Lcontainer����
		for(i = pri_con.begin(); i != pri_con.end(); i++)
		{ cout << *i << " "; }	//�Q�Ϋ��쾹���ocontainer��������
		cout << endl;
	}
}

int main()
{
	char a[] = {'B','G','C','E'};
	vector<char> v1(a, a+4), v2(a, a+4);
	
	cout << "Sorting v1's element..." << endl;
	sort(v1.begin(), v1.end());	//�ƦCv1��������
	print(v1);	//��Xvector�e����������

	vector<char> v3(v1.size() + v2.size());
 	//�ŧi�j�p�i�P�ɮe��v1�Pv2���e��

	cout << "Merge v1 and v2..." << endl;
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
 	//�X��v1�Pv2
	print(v3);

    system("PAUSE");
    return 0;
} //�D�{������
