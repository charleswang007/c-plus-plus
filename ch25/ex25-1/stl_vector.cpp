/*
�d���ɦW�Gstl_vector.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <vector> //���Jvector���Y��

using namespace std; //�ϥ�std�W�٪Ŷ�

#define Size 4

template <class T>	//�ŧi�Ω�C�L���˪���ƭ쫬
void print(vector<T> &);

int main()	//�D�{���}�l
{
	vector<int> v;	//�ŧi�x�s��ƥΪ�vector
	
	cout << "Push back 1, 6, 4 ..." << endl;
	v.push_back(1);	//�qvector��ݼW�[����
	v.push_back(6);
	v.push_back(4);
	print(v);	//��X�e���������

	cout << "Insert 9 ..." << endl << "v :";
	v.insert(v.begin(),9);	//�bvector�e�ݴ��J9
	print(v);

	cout << "Erase second element ..." << endl << "v : ";
	v.erase(v.begin()+1);	//�R��vector�e�ݪ����
	print(v);

	cout << "Pop back ..." << endl << "v : ";
	v.pop_back();	//�R��vector���ݪ����
	print(v);

	cout << "Second element : " << v[1] << endl;	//�Q��[]�s������
	cout << "The Size of Vector : " << v.size() << endl;
 	//��Xvector�������Ӽ�
	cout << "Maximum size : " << v.max_size() << endl;
 	//��X�i�e�Ǫ������Ӽ�

	cout << "Using array to initialize vector ..." << endl << "v1 : ";
	int a[Size] = {1,4,3,2};
	vector<int> v1(a, a+Size);	//�Q�ΰ}�C��vector���_�l�ȳ]�w
	print(v1);

	cout << "Assgin v1 to v ..." << endl << "v : ";
	v = v1;	//�Nv ������ v1
	print(v);

    system("PAUSE");
    return 0;
} //�D�{������

template <class T>
void print(vector<T> & pri_con)	//�Ω�C�L�e�����e���˪����
{
	if(pri_con.empty()){	//�P�Opri_con�O�_�����
		cout << "Container is empty!" << endl;}
	else{
		typename vector<T>::iterator i;	//�ŧi���쾹

        //�Q��for�j��C�Lcontainer����
		for(i = pri_con.begin(); i != pri_con.end(); i++)
		{
			cout << *i << " ";	//�Q�Ϋ��쾹���ocontainer��������
		}
		cout << endl;
	}
}

