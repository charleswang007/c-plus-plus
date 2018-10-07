/*
範例檔名：try_catch.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int main() //主程式開始
{
	int x, y;

	cout << "Please input two integer for finding"
         << " modulus...(x % y)" << endl;
	cin >> x >> y;

	try{	//錯誤嘗試區塊
		if(y == 0)	//檢查除數是否為零，是則丟出例外
			throw("The y cann't be a zero!\n");
			
		cout << "Modulus is " << x % y << " ." << endl;	//求出餘數
	}
	catch (char * s) {cerr << s;} //錯誤處理區塊

    system("PAUSE");
    return 0;
} //主程式結束
