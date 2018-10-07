/*
�d���ɦW�Gstl_rev_iter.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <vector>	//���Jvector���Y��

using namespace std; //�ϥ�std�W�٪Ŷ�

#define Size 4

template <class T>
void print(vector<T> & pri_con)	//�Ω�C�L�e�����e���˪����
{
	if(pri_con.empty())	//�P�Opri_con�O�_�����
		cout << "Container is empty!" << endl;
	else{
		typename vector<T>::iterator i;	//�ŧi���쾹

        //�Q��for�j��C�Lcontainer����
		for(i = pri_con.begin() ; i != pri_con.end(); i++)
		{
			cout << *i << " ";	//�Q�Ϋ��쾹���ocontainer��������
		}
		cout << endl;
	}
}

template <class T>
void rev_print(vector<T> & pri_con)	//�Ω�C�L�e�����e���˪����
{
	if(pri_con.empty())	//�P�Opri_con�O�_�����
		cout << "Container is empty!" << endl;
	else{
		typename vector<T>::reverse_iterator i;	//�ŧi������쾹

        //�Q��for�j��ϦV�C�L����
		for(i = pri_con.rbegin() ; i != pri_con.rend(); i++)
		{
			cout << *i << " ";	//�Q�Ϋ��쾹��X����
		}
		cout << endl;
	}
}

int main() //�D�{���}�l
{
	vector<int> v;	//�ŧi�x�s��ƥΪ�vector
	
	v.push_back(1);	//�qvector��ݼW�[����
	v.push_back(6);
	v.push_back(4);
	cout << "Printing element : " << endl;
	print(v);	//��X�e���������
	cout << "Printing element by reverse direction : " << endl;
	rev_print(v);

    system("PAUSE");
    return 0;
} //�D�{������
