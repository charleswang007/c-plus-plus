/*
�d���ɦW�Gstl_alg_data.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <algorithm>	//���Jalgorithm���Y��
#include <vector>

using namespace std; //�ϥ�std�W�٪Ŷ�

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
	vector<char> v1(10); //�ŧi�e��10�Ӥ�����vector�e��
	
	cout << "Fill v1 with 'A'..." << endl;
	fill(v1.begin(), v1.end(), 'A');	//�Nv1��A��
	print(v1);	//��Xvector�e����������

	cout << "Copy v2 to v1..." << endl;
	char a[] = {'B','B','B','B'};
	vector<char> v2(a, a+4);

	copy(v2.begin(), v2.end(), v1.begin() + 2);
 	//�Nv2�ƻs��v1�ĤG�Ӥ�������
	print(v1);

	cout << "Remove 'A' from v1..." << endl;
	vector<char>::iterator new_end;
	new_end = remove(v1.begin(), v1.end(), 'A'); //�Nv1�̪�A����
	v1.erase(new_end, v1.end()); //�R��v1��������
	print(v1);

	cout << "Replace 'B' with 'C'..." << endl;
	replace(v1.begin(), v1.begin()+2, 'B', 'C');
    //�Nv1���e���B�m����C
	print(v1);

    system("PAUSE");
    return 0;
} //�D�{������
