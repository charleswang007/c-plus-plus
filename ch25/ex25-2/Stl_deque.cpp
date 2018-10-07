/*
�d���ɦW�Gstl_deque.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <deque> //���Jdeque���Y��

using namespace std; //�ϥ�std�W�٪Ŷ�

template <class T>
void print(deque<T> & pri_con)	//�Ω�C�L�e�����e���˪����
{
	if(pri_con.empty())	//�P�Opri_con�O�_�����
		cout << "Container is empty!" << endl;
	else{
		typename deque<T>::iterator i;	//�ŧi���쾹

        //�Q��for�j��C�Lcontainer����
		for(i = pri_con.begin(); i != pri_con.end(); i++)
		{
			cout << *i << " ";	//�Q�Ϋ��쾹���ocontainer��������
		}
		cout << endl;
	}
}

int main()	//�D�{���}�l
{
	deque<int> q;	//�ŧi�x�s��ƥΪ�deque
	
	cout << "Push back 1, 6 and push front 4 ..." << endl << "q : ";
	q.push_back(1);	//�qdeque��ݼW�[����
	q.push_back(6);
	q.push_front(4);
	print(q);

	cout << "Insert 9 into 2nd element ..." << endl << "q : ";
	q.insert(q.begin()+1,9);	//�N9���J��2��������
	print(q);

	cout << "Erase second element ..." << endl << "q : ";
	q.erase(q.begin()+1);	//�R����2�Ӥ������᪺���
	print(q);

	cout << "Pop back ..." << endl << "q : ";
	q.pop_back();	//�R��deque���ݪ����
	print(q);

	cout << "The Size of deque : " << q.size() << endl;
  	//��Xdeque�������Ӽ�
	cout << "Maximum size : " << q.max_size() << endl;
 	//��X�i�e�Ǫ������Ӽ�

	cout << "Using another deque to initialize deque ..."
         << endl << "q1 : ";
	deque<int> q1 = q;	//�Q�Υt�@��deque�e������ȳ]�w
	print(q1);

    system("PAUSE");
    return 0;
} //�D�{������
