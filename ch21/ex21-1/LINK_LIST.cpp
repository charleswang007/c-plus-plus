/*
範例檔名：link_list.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class ListNode		//開始宣告類別
{
private:	//宣告屬性
	int data;	//儲存資料
	ListNode * next_node;	//指向下一個鏈結的指標
	static ListNode * now;	//目前的結尾節點指標
	const static ListNode * head;	//鏈結串列的起始指標
public:	//宣告方法
	ListNode(int node_data):data(node_data), next_node(NULL){}
	ListNode():next_node(NULL) { head = now = this; }
	static void add_node(int new_data);		//增加新節點
	static void show_all_node();	//顯示所有節點資料
};

ListNode * ListNode::now;	//宣告類別資料成員
const ListNode * ListNode::head;

void ListNode::add_node(int new_data)
{
	now->next_node = new ListNode(new_data);	//產生節點
	now = now->next_node;	//設定now指標
}

void ListNode::show_all_node()
{
	int i = 0;
	now = head->next_node;
		//將now指標設為head節點指向的下一個節點
	while(now != NULL)	//如果now指標值不為NULL值，則繼續
	{
		i++;
		cout << "The data of " << i << " node is "
             << now->data << "." << endl; //輸出資料
		now = now->next_node;	//將now指標再設為指向的下一個節點
	}
}

int main()			//主程式開始
{
	int data;
	char choice;	
	ListNode head;	//產生一個起始節點

	do{
		cout << "Please input data :" << endl;
		cin >> data;	//讀取資料

		head.add_node(data);	//增加節點

		cout << endl << "Do you want to input another data !" << endl;
		cin >> choice;	//選擇是否再輸入其他節點的資料
	}while(choice == 'y' || choice == 'Y');

	ListNode::show_all_node();	//顯示所有節點的資料

    system("PAUSE");
    return 0;
} //主程式結束
