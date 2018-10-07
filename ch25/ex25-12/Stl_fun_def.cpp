/*
範例檔名：stl_fun_def.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <algorithm>
#include <vector>

using namespace std; //使用std名稱空間

class Square //函數物件類別
{
public:
    //定義過載的()運算子做為函數物件的樣版函數
	template <class T>
    T operator() (T i) { return i * i; }
};

template <class T>	//樣版函數物件類別
class tmpSquare
{
public:
	T operator() (T i) { return i * i; }
};

void print(int i) {cout << i << " ";}

int main()
{
	int a[] = {1,4,7,2,9,4,3};
	vector<int> v1(a, a+7), v2(v1.size()), v3(v1.size());

	cout << "transform element by function object..."
         << endl <<"v2 : ";
	transform(v1.begin(), v1.end(), v2.begin(), Square());
	//利用函數物件將元素轉換成平方值

	for_each(v2.begin(), v2.end(), print);
	cout << endl << "transform element by template function object...";
	cout << endl << "v3 : ";

	transform(v1.begin(), v1.end(), v3.begin(), tmpSquare<int>());
	//利用由樣版函數物件將元素轉換成平方值

	for_each(v3.begin(), v3.end(), print);
	cout << endl;

    system("PAUSE");
    return 0;
} //主程式結束
