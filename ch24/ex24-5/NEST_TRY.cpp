/*
範例檔名：nest_try.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int main() //主程式開始
{
	try{
		try{
			throw ("Testing nest try-throw-catch!\n"); //丟出一個例外
			cout << "This should not print!" << endl;
            //這裡將不會被印出來
		}
		catch(const char * s1) { throw s1;}	//s1將被丟出
		cout << "This should not print!" << endl;
	}
	catch (const char * s2) { cerr << s2 ; } //輸出錯誤訊息

	cout << "This should print!" << endl;

    system("PAUSE");
    return 0;
} //主程式結束
