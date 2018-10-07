/*
範例檔名：stl_alg_sort.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <algorithm>
#include <vector>

using namespace std;

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
	char a[] = {'B','G','C','E'};
	vector<char> v1(a, a+4), v2(a, a+4);
	
	cout << "Sorting v1's element..." << endl;
	sort(v1.begin(), v1.end());	//排列v1內的元素
	print(v1);	//輸出vector容器中的元素

	vector<char> v3(v1.size() + v2.size());
 	//宣告大小可同時容納v1與v2的容器

	cout << "Merge v1 and v2..." << endl;
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
 	//合併v1與v2
	print(v3);

    system("PAUSE");
    return 0;
} //主程式結束
