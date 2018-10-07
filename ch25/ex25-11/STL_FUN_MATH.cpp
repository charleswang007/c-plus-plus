/*
範例檔名：stl_fun_math.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <functional>	//載入functional標頭檔
#include <algorithm>
#include <vector>

using namespace std; //使用std名稱空間

//將由for_each套用的函數
void print(int i) {cout << i << " ";}

int main()
{
	int a[] = {1,4,7,2,9,4,3};
	vector<int> v1(a, a+7), v2 = v1, v3(v1.size());

	cout << "transform element..." << endl << "v1 : ";
	for_each(v1.begin(), v1.end(), print);
	cout << endl << "v2 : ";
	for_each(v2.begin(), v2.end(), print);
	cout << endl << "v3 (v1 + v2) :";
	transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), plus<int>());
	//將v1與v2的元素相加，並儲存至v3

	for_each(v3.begin(), v3.end(), print);
	cout << endl;

	cout << "sort element.." << endl << "v3 : ";
	sort(v3.begin(), v3.end(), greater<int>());
 	//以遞減方式排列容器內元素

	for_each(v3.begin(), v3.end(), print);
	cout << endl;

    system("PAUSE");
    return 0;
} //主程式結束
