/*
�d���ɦW�Gstl_queue.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <queue> //���Jqueue���Y��
#include <list>

using namespace std; //�ϥ�std�W�٪Ŷ�

template <class T>	//��X�e���������˪����
void printQueue(T & q)
{
	while(!q.empty())	//�P�O�e���O�_���Ū�
	{
		cout << q.front() << " ";	//���o�e�����ݤ������Ѧ�
		q.pop();	//�q�e���e�ݲ�������
	}
	cout << endl;
}

int main()	//�D�{���}�l
{
	queue<int> Deq_Queue;	//�H�w�]�e���إ�queue
	queue< int, list<int> > List_Queue;	//�Hlist�إ�queue

	for (int i = 0; i < 4; i++)
	{
		Deq_Queue.push(i);	//�W�[�����ܮe����
		List_Queue.push(i);
	}

	cout << "Pop from Deq_Queue" << endl;
	printQueue(Deq_Queue);	//�C�L�e����������
	cout << "Pop from List_Queue" << endl;
	printQueue(List_Queue);

    system("PAUSE");
    return 0;
} //�D�{������
