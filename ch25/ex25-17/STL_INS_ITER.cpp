/*
�d���ɦW�Gstl_ins_iter.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <algorithm> //���Jalgorithm���Y��
#include <deque>

using namespace std; //�ϥ�std�W�٪Ŷ�

template <class T>
void print(deque<T> & pri_con)	//�Ω�C�L�e�����e���˪����
{
	if(pri_con.empty())	//�P�Opri_con�O�_�����
		cout << "Container is empty!" << endl;
	else{
		typename deque<T>::iterator i; //�ŧi���쾹

        //�Q��for�j��C�Lcontainer����
		for(i = pri_con.begin(); i != pri_con.end(); i++)
		{ cout << *i << " "; }	//�Q�Ϋ��쾹���ocontainer��������
		cout << endl;
	}
}

int main()
{
	deque<char> d1(2, 'A'), d2(2, 'B'), d3(2,'C'), d4(2,'D');	
	//�ŧi�|�Ӯe�Ǩ�Ӥ�����deque�e���A�ä��O�H�r����
	cout << "Insert d2 into the back of d1's first element..." << endl;
	copy(d2.begin(), d2.end(), inserter(d1, d1.begin()+1));
	//�Nd2���J�Ĥ@�Ӥ�������

	print(d1);

	cout << "Insert d3 into front of d1's first element ..." << endl;
	copy(d3.begin(), d3.end(), front_inserter(d1));
	//�Nd2���J�Ĥ@�Ӥ������e

	print(d1);

	cout << "Insert d4 into d1's last element..." << endl;
	copy(d4.begin(), d4.end(), back_inserter(d1));
	//�Nd2���J�̫�@�Ӥ�������

	print(d1);

    system("PAUSE");
    return 0;
} //�D�{������
