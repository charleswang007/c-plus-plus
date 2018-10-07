/*
範例檔名：stl_queue.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <queue> //載入queue標頭檔
#include <list>

using namespace std; //使用std名稱空間

template <class T>	//輸出容器元素的樣版函數
void printQueue(T & q)
{
	while(!q.empty())	//判別容器是否為空的
	{
		cout << q.front() << " ";	//取得容器頂端元素的參考
		q.pop();	//從容器前端移除元素
	}
	cout << endl;
}

int main()	//主程式開始
{
	queue<int> Deq_Queue;	//以預設容器建立queue
	queue< int, list<int> > List_Queue;	//以list建立queue

	for (int i = 0; i < 4; i++)
	{
		Deq_Queue.push(i);	//增加元素至容器中
		List_Queue.push(i);
	}

	cout << "Pop from Deq_Queue" << endl;
	printQueue(Deq_Queue);	//列印容器內的元素
	cout << "Pop from List_Queue" << endl;
	printQueue(List_Queue);

    system("PAUSE");
    return 0;
} //主程式結束
