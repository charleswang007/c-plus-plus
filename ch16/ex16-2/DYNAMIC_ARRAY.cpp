/*
範例檔名：dynamic_array.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int main() //主程式開始
{
	int n, i; //儲存使用者輸入的陣列維度

	cout << "Please input the size of array :" << endl;
	cin >> n; //讀取陣列的維度

	int *ptr = new int [n]; //動態配置陣列的維度

	cout << "Please input the value of array :" << endl;

	for(i=0;i<n;i++){
		cout << "array [" << i << "] = ";
		cin >> *(ptr + i);		//讀取陣列元素值
	}

	cout << endl << "The result is..." << endl;

	for(i=0;i<n;i++){
		cout << "array [" << i << "] = " << ptr[i];
		//列印陣列元素，ptr[i] 與 *(ptr + i) 同義
		cout << endl;
	}

	delete[] ptr; //釋放記憶體空間

    system("PAUSE");
    return 0;
} //主程式結束
