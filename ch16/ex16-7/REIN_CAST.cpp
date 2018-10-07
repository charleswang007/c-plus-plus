/*
範例檔名：rein_cast.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int main() //主程式開始
{
	char aChar = 'A', * cp = &aChar; //宣告字元變數以及字元變數指標
	void *vp;	//宣告void指標

	vp = cp;	//將cp設定給vp
	cout << "Casting void * to char * : ";
	cout << *(reinterpret_cast<char*>(vp));
    //輸出時，將void*轉換為char*
    //，若不轉換為char*，將無法輸出vp指向記憶體空間儲存之值
	cout << endl;

    system("PAUSE");
    return 0;
} //主程式結束
