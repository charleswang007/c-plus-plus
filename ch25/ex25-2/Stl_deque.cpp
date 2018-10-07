/*
範例檔名：stl_deque.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <deque> //載入deque標頭檔

using namespace std; //使用std名稱空間

template <class T>
void print(deque<T> & pri_con)	//用於列印容器內容的樣版函數
{
	if(pri_con.empty())	//判別pri_con是否有資料
		cout << "Container is empty!" << endl;
	else{
		typename deque<T>::iterator i;	//宣告指位器

        //利用for迴圈列印container元素
		for(i = pri_con.begin(); i != pri_con.end(); i++)
		{
			cout << *i << " ";	//利用指位器取得container內的元素
		}
		cout << endl;
	}
}

int main()	//主程式開始
{
	deque<int> q;	//宣告儲存整數用的deque
	
	cout << "Push back 1, 6 and push front 4 ..." << endl << "q : ";
	q.push_back(1);	//從deque後端增加元素
	q.push_back(6);
	q.push_front(4);
	print(q);

	cout << "Insert 9 into 2nd element ..." << endl << "q : ";
	q.insert(q.begin()+1,9);	//將9插入第2元素之後
	print(q);

	cout << "Erase second element ..." << endl << "q : ";
	q.erase(q.begin()+1);	//刪除第2個元素之後的資料
	print(q);

	cout << "Pop back ..." << endl << "q : ";
	q.pop_back();	//刪除deque末端的資料
	print(q);

	cout << "The Size of deque : " << q.size() << endl;
  	//輸出deque的元素個數
	cout << "Maximum size : " << q.max_size() << endl;
 	//輸出可容納的元素個數

	cout << "Using another deque to initialize deque ..."
         << endl << "q1 : ";
	deque<int> q1 = q;	//利用另一個deque容器做初值設定
	print(q1);

    system("PAUSE");
    return 0;
} //主程式結束
