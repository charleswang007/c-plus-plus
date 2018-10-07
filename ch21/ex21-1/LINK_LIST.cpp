/*
�d���ɦW�Glink_list.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class ListNode		//�}�l�ŧi���O
{
private:	//�ŧi�ݩ�
	int data;	//�x�s���
	ListNode * next_node;	//���V�U�@���쵲������
	static ListNode * now;	//�ثe�������`�I����
	const static ListNode * head;	//�쵲��C���_�l����
public:	//�ŧi��k
	ListNode(int node_data):data(node_data), next_node(NULL){}
	ListNode():next_node(NULL) { head = now = this; }
	static void add_node(int new_data);		//�W�[�s�`�I
	static void show_all_node();	//��ܩҦ��`�I���
};

ListNode * ListNode::now;	//�ŧi���O��Ʀ���
const ListNode * ListNode::head;

void ListNode::add_node(int new_data)
{
	now->next_node = new ListNode(new_data);	//���͸`�I
	now = now->next_node;	//�]�wnow����
}

void ListNode::show_all_node()
{
	int i = 0;
	now = head->next_node;
		//�Nnow���г]��head�`�I���V���U�@�Ӹ`�I
	while(now != NULL)	//�p�Gnow���ЭȤ���NULL�ȡA�h�~��
	{
		i++;
		cout << "The data of " << i << " node is "
             << now->data << "." << endl; //��X���
		now = now->next_node;	//�Nnow���ЦA�]�����V���U�@�Ӹ`�I
	}
}

int main()			//�D�{���}�l
{
	int data;
	char choice;	
	ListNode head;	//���ͤ@�Ӱ_�l�`�I

	do{
		cout << "Please input data :" << endl;
		cin >> data;	//Ū�����

		head.add_node(data);	//�W�[�`�I

		cout << endl << "Do you want to input another data !" << endl;
		cin >> choice;	//��ܬO�_�A��J��L�`�I�����
	}while(choice == 'y' || choice == 'Y');

	ListNode::show_all_node();	//��ܩҦ��`�I�����

    system("PAUSE");
    return 0;
} //�D�{������
