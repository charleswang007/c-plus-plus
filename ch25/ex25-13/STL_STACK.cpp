/*
�d���ɦW�Gstl_stack.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <stack>	//���Jstack���Y��
#include <vector>
#include <list> 

using namespace std; //�ϥ�std�W�٪Ŷ�

template <class T> //��Xstack�������˪����
void printStack(T & s)
{
	while(!s.empty()) //�P�O�e���O�_���Ū�
	{
		cout << s.top() << " ";	//��Xstack���ݪ��������
		s.pop(); //����stack���ݪ��������
	}
	cout << endl;
}

int main() //�D�{���}�l
{
	stack<int> Deq_Stack;	//�Q�ιw�]��deque�e���إ�stack
	stack<int, vector <int> > Vec_Stack; //�Q��vector�e���إ�stack
	stack <int, list<int> > List_Stack;	//�Q��list�e���إ�stack

	for (int i = 0; i < 4; i++)
	{
		Deq_Stack.push(i);	//�N�����Q��push�s�W�ܮe��
		Vec_Stack.push(i);
		List_Stack.push(i);
	}

	cout << "Pop from Deque_Stack" << endl;
	printStack(Deq_Stack);	//��X�e����������
	cout << "Pop from Vec_Stack" << endl;
	printStack(Vec_Stack);
	cout << "Pop from List_Stack" << endl;
	printStack(List_Stack);

    system("PAUSE");
    return 0;
} //�D�{������
