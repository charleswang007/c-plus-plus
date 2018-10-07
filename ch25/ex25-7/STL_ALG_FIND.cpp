/*
範例檔名：stl_alg_find.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <algorithm>
#include <vector>

using namespace std; //使用std名稱空間

template <class T>
void print(vector<T> & pri_con)	//用於列印容器內容的樣版函數
{
	if(pri_con.empty())	//判別pri_con是否有資料
		cout << "Container is empty!" << endl;
	else{
		typename vector<T>::iterator i;	//宣告指位器

        //利用for迴圈列印container元素
		for(i = pri_con.begin(); i != pri_con.end(); i++)
  		{ cout << *i << " "; }	//利用指位器取得container內的元素
		cout << endl;
	}
}

int main()
{
	char a[] = {'B','G','C','E','G'};
	vector<char> v1(a, a+5), v2(a+1, a+3);	//宣告v1與v2容器
	vector<char>::iterator iter;	//宣告vector<char>指位器
	
	cout << "v1 : ";
	print(v1);

	iter = find(v1.begin(), v1.end(), 'G');	//尋找'G'是否在容器中

	if(iter == v1.end())	//指位器指向容器最後一個元素，表示不存在
		cout << "'G' is not in container!" << endl;
	else
		cout << "'G' is in container!" << endl;
	
	cout << "v1 : ";
	print(v1);
	cout << "v2 : ";
	print(v2);
	iter = search(v1.begin(), v1.end(), v2.begin(), v2.end());
	//尋找v1容器裡是否存在與v2容器相同之片段

	if(iter == v1.end())
		cout << "'GC' is not in container!" << endl;
	else
		cout << "'GC' is in container!" << endl;

    system("PAUSE");
    return 0;
} //主程式結束
