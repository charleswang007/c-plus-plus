/*
範例檔名：stl_rev_iter.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <vector>	//載入vector標頭檔

using namespace std; //使用std名稱空間

#define Size 4

template <class T>
void print(vector<T> & pri_con)	//用於列印容器內容的樣版函數
{
	if(pri_con.empty())	//判別pri_con是否有資料
		cout << "Container is empty!" << endl;
	else{
		typename vector<T>::iterator i;	//宣告指位器

        //利用for迴圈列印container元素
		for(i = pri_con.begin() ; i != pri_con.end(); i++)
		{
			cout << *i << " ";	//利用指位器取得container內的元素
		}
		cout << endl;
	}
}

template <class T>
void rev_print(vector<T> & pri_con)	//用於列印容器內容的樣版函數
{
	if(pri_con.empty())	//判別pri_con是否有資料
		cout << "Container is empty!" << endl;
	else{
		typename vector<T>::reverse_iterator i;	//宣告倒轉指位器

        //利用for迴圈反向列印元素
		for(i = pri_con.rbegin() ; i != pri_con.rend(); i++)
		{
			cout << *i << " ";	//利用指位器輸出元素
		}
		cout << endl;
	}
}

int main() //主程式開始
{
	vector<int> v;	//宣告儲存整數用的vector
	
	v.push_back(1);	//從vector後端增加元素
	v.push_back(6);
	v.push_back(4);
	cout << "Printing element : " << endl;
	print(v);	//輸出容器內的資料
	cout << "Printing element by reverse direction : " << endl;
	rev_print(v);

    system("PAUSE");
    return 0;
} //主程式結束
