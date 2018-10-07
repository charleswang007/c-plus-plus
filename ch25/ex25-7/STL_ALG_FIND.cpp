/*
�d���ɦW�Gstl_alg_find.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <algorithm>
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
	char a[] = {'B','G','C','E','G'};
	vector<char> v1(a, a+5), v2(a+1, a+3);	//�ŧiv1�Pv2�e��
	vector<char>::iterator iter;	//�ŧivector<char>���쾹
	
	cout << "v1 : ";
	print(v1);

	iter = find(v1.begin(), v1.end(), 'G');	//�M��'G'�O�_�b�e����

	if(iter == v1.end())	//���쾹���V�e���̫�@�Ӥ����A��ܤ��s�b
		cout << "'G' is not in container!" << endl;
	else
		cout << "'G' is in container!" << endl;
	
	cout << "v1 : ";
	print(v1);
	cout << "v2 : ";
	print(v2);
	iter = search(v1.begin(), v1.end(), v2.begin(), v2.end());
	//�M��v1�e���̬O�_�s�b�Pv2�e���ۦP�����q

	if(iter == v1.end())
		cout << "'GC' is not in container!" << endl;
	else
		cout << "'GC' is in container!" << endl;

    system("PAUSE");
    return 0;
} //�D�{������
