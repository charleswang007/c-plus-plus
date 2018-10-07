/*
範例檔名：stl_pri_queue.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <queue>	//載入deque標頭檔
#include <deque>
#include <functional>	//載入functional標頭檔

using namespace std; //使用std名稱空間

template <class T>
void printPriQueue(T & p)
{
	while(!p.empty()) //檢查容器是否是空的
	{
		cout << p.top() << " ";	//輸出容器頂端元素的參考
		p.pop(); //移除容器頂端元素的參考
	}
	cout << endl;
}

int main()	//主程式開始
{
	priority_queue<int> Vec_PriQueue;
	//以預設的vector容器建立priority_queue
	priority_queue< int, deque<int> > Deq_PriQueue;
	//以deque容器建立priority_queue

    int i;

	for (i = 0; i < 4; i++)
	{
		Vec_PriQueue.push(i);	//以push新增元素
		Deq_PriQueue.push(i);
	}

	for (i = 3; i > 0; i--)
	{
		Vec_PriQueue.push(i);
		Deq_PriQueue.push(i);
	}

	cout << "Pop from Vec_PriQueue" << endl;
	printPriQueue(Vec_PriQueue);	//輸出容器的資料
	cout << "Pop from Deq_PriQueue" << endl;
	printPriQueue(Deq_PriQueue);

    system("PAUSE");
    return 0;
} //主程式結束
