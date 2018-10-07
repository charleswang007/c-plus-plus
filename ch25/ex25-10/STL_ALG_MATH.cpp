/*
範例檔名：stl_alg_math.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <algorithm>
#include <vector>

using namespace std; //使用std名稱空間

//將由for_each與transform套用的函數
int Square(int i) { return i * i; }
void print(int i) {cout << i << " ";}

int main()
{
	int a[] = {1,4,7,2,9,4,3};
	vector<int> v1(a, a+7);
	int num = 0;
	
	cout << "Counting number of 'G' in v1..." << endl;
	num = count(v1.begin(), v1.end(), 4);	//計算v1內'G'的個數
	cout << "There are " << num << " number 4 in v1." << endl;

	cout << "Maxium element : "
         << *( max_element(v1.begin(), v1.end())) << endl;
	//輸出容器中最大的元素

	cout << "Minium element : "
         << *( min_element(v1.begin(), v1.end())) << endl;
	//輸出容器中最小的元素

	cout << "Print vector..." << endl;
	for_each(v1.begin(), v1.end(), print);
 	//將print套用在容器每個元素

	cout << endl;

	cout << "transform element..." << endl;
	vector<int> v2(v1.size());
	transform(v1.begin(), v1.end(), v2.begin(), Square);
		//將容器的每個元素利用Square轉換成其平方值
	for_each(v2.begin(), v2.end(), print);
	cout << endl;

    system("PAUSE");
    return 0;
} //主程式結束
