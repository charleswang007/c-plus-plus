/*
範例檔名：stl_set.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <string>
#include <set>	//載入set標頭檔

using namespace std; //使用std名稱空間

typedef set<string, less<string> > str_set;
//定義str_set代表set<string, less<string> >

template <class T>
void print(set<T> & pri_con)	//用於列印容器內容的樣版函數
{
	if(pri_con.empty())	//判別pri_con是否有資料
		cout << "Container is empty!" << endl;
	else{
		typename set<T>::iterator i;	//宣告指位器

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
	string name[] = {"Mary","John","Ann","Joe","Ken"};
	str_set s(name, name + 5);	//利用字串陣列設定set容器內的元素
	print(s);	//列印容器內的元素

	s.insert("Judy");	//插入元素
	print(s);

	string search, upper, lower;
	str_set::iterator iter;	//宣告指位器

	cout << "Please input name for searching : " << endl;
	cin >> search;

	iter = s.find(search);	//尋找search字串，若無則傳回尾端元素的指位器
	if(iter == s.end())
		cout << "The " << search << " is not in container !" << endl;
	else
		cout << "The " << search << " is in container !" << endl;
	
	cout << "Please input a range for searching :(Upper/Lower)"
         << endl;
	cin >> upper >> lower;	//讀取範圍的上界與下界

    //輸出在尋找範圍內的字串
	for(iter = s.lower_bound(lower)
                               ; iter != s.upper_bound(upper); iter++)
    {
		cout << *iter << "  ";	//輸出指位器指向的元素值
	}
	cout << endl;

    system("PAUSE");
    return 0;
} //主程式結束
