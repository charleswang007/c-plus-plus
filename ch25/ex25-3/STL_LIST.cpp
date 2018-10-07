/*
範例檔名：stl_list.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <list>	//載入list標頭檔

using namespace std; //使用std名稱空間

#define Size 4

template <class T>
void print(list<T> & pri_con)	//用於列印容器內容的樣版函數
{
	if(pri_con.empty())	//判別pri_con是否有資料
		cout << "Container is empty!" << endl;
	else{
		typename list<T>::iterator i; //宣告指位器

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
	list<char> L; //宣告儲存整數用的list
	
	cout << "Push back o, k, e and push front J ..." << endl;
	L.push_back('o');	//從list後端增加元素
	L.push_back('k');
	L.push_back('e');
	L.push_front('J');	//從list前端增加元素
	print(L);

	cout << "Pop front ..." << endl << "L : ";
	L.pop_front();	//刪除list前端的資料
	print(L);

	cout << "Pop back ..." << endl << "L : ";
	L.pop_back();	//刪除list末端的資料
	print(L);

	cout << "First Element of L : " << L.front() << endl;
    //顯示前端的元素
	cout << "Last Element of L : " << L.back() << endl;
 	//顯示尾端的元素
	cout << "Maximum size of L : " << L.max_size() << endl;
 	//輸出可容納的元素個數

	cout << "Insert array to list ..." << endl << "L2 : ";
	char a[Size] = {'M','a','r','y'};
	list<char> L2;
	L2.insert(L2.begin(),a, a+Size); //將陣列插入list
	print(L2);

	cout << "Merge L and L2 ..." << endl << "L : ";
	L.merge(L2); //將L2結合至L
	print(L);
	cout << "L2 : ";
	print(L2);

	cout << "Assign L to L2 ..." << endl <<"L2 : ";
	L2 = L;	//將L 指派給 L2
	print(L2);

	cout << "Reverse L2 ..." << endl << "L2 : ";
	L2.reverse();	//將L2的元素倒轉
	print(L2);

	cout << "Sort L2 ..." << endl << "L2 : ";
	L2.sort();	//將L2的元素重新排序
	print(L2);

    system("PAUSE");
    return 0;
} //主程式結束
