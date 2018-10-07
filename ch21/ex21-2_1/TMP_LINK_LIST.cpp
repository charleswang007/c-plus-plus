/*
�d���ɦW�Gtmp_link_list.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

//�}�l�ŧi�˪����O
template <typename TYPE> class	ListNode
{
private:	//�ŧi�ݩ�
	TYPE data;	//��ƫ��A�]��TYPE
	ListNode * next_node;
	static ListNode * now;
	const static ListNode * head;
public:	//�ŧi��k
	ListNode(TYPE node_data):data(node_data), next_node(NULL){}
	//�N�ǤJ�Ѽƪ����O�]��TYPE

	ListNode():next_node(NULL) { head = now = this; }
	static void add_node(TYPE new_data);
	//�N�ǤJ�Ѽƪ����O�]��TYPE

	static void show_all_node();
};

template <class TYPE> ListNode<TYPE> * ListNode<TYPE>::now;
//�ŧi���O��Ʀ���
template <class TYPE> const ListNode<TYPE> * ListNode<TYPE>::head;

//�w�q�������
template <class TYPE> void ListNode<TYPE>::add_node(TYPE new_data)
{
	now->next_node = new ListNode(new_data); //���͸`�I
	now = now->next_node;	//�]�wnow����
}

template <class TYPE> void ListNode<TYPE>::show_all_node()
{
	int i = 0;
	now = head->next_node;
	//�Nnow���г]��head�`�I���V���U�@�Ӹ`�I

	while(now != NULL)	//�p�Gnow���ЭȤ���NULL�ȡA�h�~��
	{
		i++;
		cout << "The data of " << i << " node is "
             << now->data << "." << endl;
		//��X���
		now = now->next_node;	//�Nnow���ЦA�]�����V���U�@�Ӹ`�I
	}
}

int main() //�D�{���}�l
{
	ListNode<int> i_head; //�إ��x�sint���O��LinkList���O
 					      //�ëŧi�_�l�_�l�`�I
	ListNode<double> f_head; //�إ��x�sdouble���O��LinkList���O
 						     //�ëŧi�_�l�_�l�`�I

	for(int i = 1; i < 4 ; i++)
	{
		i_head.add_node(i);	//�W�[�`�I
		f_head.add_node(i*0.1);
	}

	ListNode<int>::show_all_node();	//��ܩҦ��`�I�����
	ListNode<double>::show_all_node();	//��ܩҦ��`�I�����

    system("PAUSE");
    return 0;
} //�D�{������
