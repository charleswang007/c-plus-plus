/*
範例檔名：stl_ins_iter.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <algorithm> //載入algorithm標頭檔
#include <deque>

using namespace std; //使用std名稱空間

template <class T>
void print(deque<T> & pri_con)	//用於列印容器內容的樣版函數
{
	if(pri_con.empty())	//判別pri_con是否有資料
		cout << "Container is empty!" << endl;
	else{
		typename deque<T>::iterator i; //宣告指位器

        //利用for迴圈列印container元素
		for(i = pri_con.begin(); i != pri_con.end(); i++)
		{ cout << *i << " "; }	//利用指位器取得container內的元素
		cout << endl;
	}
}

int main()
{
	deque<char> d1(2, 'A'), d2(2, 'B'), d3(2,'C'), d4(2,'D');	
	//宣告四個容納兩個元素的deque容器，並分別以字母填滿
	cout << "Insert d2 into the back of d1's first element..." << endl;
	copy(d2.begin(), d2.end(), inserter(d1, d1.begin()+1));
	//將d2插入第一個元素之後

	print(d1);

	cout << "Insert d3 into front of d1's first element ..." << endl;
	copy(d3.begin(), d3.end(), front_inserter(d1));
	//將d2插入第一個元素之前

	print(d1);

	cout << "Insert d4 into d1's last element..." << endl;
	copy(d4.begin(), d4.end(), back_inserter(d1));
	//將d2插入最後一個元素之後

	print(d1);

    system("PAUSE");
    return 0;
} //主程式結束
