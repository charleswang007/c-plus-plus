/*
範例檔名：stl_vector.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <vector> //載入vector標頭檔

using namespace std; //使用std名稱空間

#define Size 4

template <class T>	//宣告用於列印的樣版函數原型
void print(vector<T> &);

int main()	//主程式開始
{
	vector<int> v;	//宣告儲存整數用的vector
	
	cout << "Push back 1, 6, 4 ..." << endl;
	v.push_back(1);	//從vector後端增加元素
	v.push_back(6);
	v.push_back(4);
	print(v);	//輸出容器內的資料

	cout << "Insert 9 ..." << endl << "v :";
	v.insert(v.begin(),9);	//在vector前端插入9
	print(v);

	cout << "Erase second element ..." << endl << "v : ";
	v.erase(v.begin()+1);	//刪除vector前端的資料
	print(v);

	cout << "Pop back ..." << endl << "v : ";
	v.pop_back();	//刪除vector末端的資料
	print(v);

	cout << "Second element : " << v[1] << endl;	//利用[]存取元素
	cout << "The Size of Vector : " << v.size() << endl;
 	//輸出vector的元素個數
	cout << "Maximum size : " << v.max_size() << endl;
 	//輸出可容納的元素個數

	cout << "Using array to initialize vector ..." << endl << "v1 : ";
	int a[Size] = {1,4,3,2};
	vector<int> v1(a, a+Size);	//利用陣列做vector的起始值設定
	print(v1);

	cout << "Assgin v1 to v ..." << endl << "v : ";
	v = v1;	//將v 指派給 v1
	print(v);

    system("PAUSE");
    return 0;
} //主程式結束

template <class T>
void print(vector<T> & pri_con)	//用於列印容器內容的樣版函數
{
	if(pri_con.empty()){	//判別pri_con是否有資料
		cout << "Container is empty!" << endl;}
	else{
		typename vector<T>::iterator i;	//宣告指位器

        //利用for迴圈列印container元素
		for(i = pri_con.begin(); i != pri_con.end(); i++)
		{
			cout << *i << " ";	//利用指位器取得container內的元素
		}
		cout << endl;
	}
}

