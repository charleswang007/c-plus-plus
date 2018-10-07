/*
�d���ɦW�Gstl_pri_queue.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <queue>	//���Jdeque���Y��
#include <deque>
#include <functional>	//���Jfunctional���Y��

using namespace std; //�ϥ�std�W�٪Ŷ�

template <class T>
void printPriQueue(T & p)
{
	while(!p.empty()) //�ˬd�e���O�_�O�Ū�
	{
		cout << p.top() << " ";	//��X�e�����ݤ������Ѧ�
		p.pop(); //�����e�����ݤ������Ѧ�
	}
	cout << endl;
}

int main()	//�D�{���}�l
{
	priority_queue<int> Vec_PriQueue;
	//�H�w�]��vector�e���إ�priority_queue
	priority_queue< int, deque<int> > Deq_PriQueue;
	//�Hdeque�e���إ�priority_queue

    int i;

	for (i = 0; i < 4; i++)
	{
		Vec_PriQueue.push(i);	//�Hpush�s�W����
		Deq_PriQueue.push(i);
	}

	for (i = 3; i > 0; i--)
	{
		Vec_PriQueue.push(i);
		Deq_PriQueue.push(i);
	}

	cout << "Pop from Vec_PriQueue" << endl;
	printPriQueue(Vec_PriQueue);	//��X�e�������
	cout << "Pop from Deq_PriQueue" << endl;
	printPriQueue(Deq_PriQueue);

    system("PAUSE");
    return 0;
} //�D�{������
