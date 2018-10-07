/*
範例檔名：tmp_link_list.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

//開始宣告樣版類別
template <typename TYPE> class	ListNode
{
private:	//宣告屬性
	TYPE data;	//資料型態設為TYPE
	ListNode * next_node;
	static ListNode * now;
	const static ListNode * head;
public:	//宣告方法
	ListNode(TYPE node_data):data(node_data), next_node(NULL){}
	//將傳入參數的型別設為TYPE

	ListNode():next_node(NULL) { head = now = this; }
	static void add_node(TYPE new_data);
	//將傳入參數的型別設為TYPE

	static void show_all_node();
};

template <class TYPE> ListNode<TYPE> * ListNode<TYPE>::now;
//宣告類別資料成員
template <class TYPE> const ListNode<TYPE> * ListNode<TYPE>::head;

//定義成員函數
template <class TYPE> void ListNode<TYPE>::add_node(TYPE new_data)
{
	now->next_node = new ListNode(new_data); //產生節點
	now = now->next_node;	//設定now指標
}

template <class TYPE> void ListNode<TYPE>::show_all_node()
{
	int i = 0;
	now = head->next_node;
	//將now指標設為head節點指向的下一個節點

	while(now != NULL)	//如果now指標值不為NULL值，則繼續
	{
		i++;
		cout << "The data of " << i << " node is "
             << now->data << "." << endl;
		//輸出資料
		now = now->next_node;	//將now指標再設為指向的下一個節點
	}
}

int main() //主程式開始
{
	ListNode<int> i_head; //建立儲存int型別的LinkList類別
 					      //並宣告起始起始節點
	ListNode<double> f_head; //建立儲存double型別的LinkList類別
 						     //並宣告起始起始節點

	for(int i = 1; i < 4 ; i++)
	{
		i_head.add_node(i);	//增加節點
		f_head.add_node(i*0.1);
	}

	ListNode<int>::show_all_node();	//顯示所有節點的資料
	ListNode<double>::show_all_node();	//顯示所有節點的資料

    system("PAUSE");
    return 0;
} //主程式結束
