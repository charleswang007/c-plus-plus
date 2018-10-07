/*
範例檔名：stl_stack.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <stack>	//載入stack標頭檔
#include <vector>
#include <list> 

using namespace std; //使用std名稱空間

template <class T> //輸出stack元素的樣版函數
void printStack(T & s)
{
	while(!s.empty()) //判別容器是否為空的
	{
		cout << s.top() << " ";	//輸出stack頂端的元素資料
		s.pop(); //移除stack頂端的元素資料
	}
	cout << endl;
}

int main() //主程式開始
{
	stack<int> Deq_Stack;	//利用預設的deque容器建立stack
	stack<int, vector <int> > Vec_Stack; //利用vector容器建立stack
	stack <int, list<int> > List_Stack;	//利用list容器建立stack

	for (int i = 0; i < 4; i++)
	{
		Deq_Stack.push(i);	//將元素利用push新增至容器
		Vec_Stack.push(i);
		List_Stack.push(i);
	}

	cout << "Pop from Deque_Stack" << endl;
	printStack(Deq_Stack);	//輸出容器內的元素
	cout << "Pop from Vec_Stack" << endl;
	printStack(Vec_Stack);
	cout << "Pop from List_Stack" << endl;
	printStack(List_Stack);

    system("PAUSE");
    return 0;
} //主程式結束
