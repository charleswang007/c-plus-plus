/*
範例檔名：if_try.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int if_modulus (int, int);	//求餘數的函數
int try_modulus(int, int);

int main()			//主程式開始
{
	int x, y, modulus;

	cout << "Please input two integer for finding modulus..." << endl;
	cin >> x >> y;

	modulus = if_modulus(x, y);
	
	cout << "Using if expression to detect error..." << endl;

	if(modulus == -1)	//檢查if_modulus的回傳值
		cerr << "The y cann't be a zero!\n";
	else
		cout << "Modulus is " << modulus << " ." << endl;

	cout << "Using exception handing to detect error..." << endl;
	try{	//錯誤偵測區塊
		cout << "Modulus is " << try_modulus(x, y);
    	//呼叫try_modulus
		cout << " ." << endl;
	}
	catch (char * s) {cerr << s;}	//錯誤處理區塊

    system("PAUSE");
    return 0;
} //主程式結束

int if_modulus(int x, int y)
{
	if (y == 0)	//如果除數為零，回傳值為 -1
		return  -1;
	
	return x % y;
}

int try_modulus(int x, int y)
{
	if (y == 0)
		throw("The y cann't be a zero!\n");
     	//如果除數為零，丟出一個字串

	return x % y;
}

