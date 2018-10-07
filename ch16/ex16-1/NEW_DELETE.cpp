/*
範例檔名：new_delete.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int main() //主程式開始
{
	int *ptr = new int (20); //宣告指標，並配置指標使用的記憶體

	cout << " name  |  address    |  value " << endl;
	cout << "----------------------------------" << endl;
    //輸出標題

	cout << " ptr   |  " << ptr << "   |  " << *ptr << endl;
    //輸出指標變數的位址與值

	delete ptr; //釋放配置給 ptr 的記憶體空間

    system("PAUSE");
    return 0;
} //主程式結束
