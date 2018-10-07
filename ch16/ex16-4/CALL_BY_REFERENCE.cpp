/*
範例檔名：call_by_reference.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int arith(int & , int & , int) ;  //函數原型宣告

int main()    //主程式開始
{
	int first_term = 100, N_term = 1, d = 1;

	cout << "Before calling function...." << endl;
	cout << "The first term :" << first_term << "  The N term :" ;
	cout << N_term << "  d :" << d << endl;		//輸出各變數

	cout << endl << "Sum is " << arith( first_term, N_term, d)
         << " ." << endl;
    //呼叫函數的方法與傳值呼叫相同

	cout << endl << "After calling function...." << endl;
	cout << "The first term :" << first_term << "  The N term :" ;
	cout << N_term << "  d :" << d << endl;		//輸出各變數


    system("PAUSE");
    return 0;
} //主程式結束

//宣告將參數宣告為參考型態
int arith(int &under_value, int &up_value, int d)
{																			
	int n, temp, total = 0; //函數內使用變數的宣告

	if (up_value < under_value){	//檢查傳入的計算上界是否大於下界
		temp = up_value;		//若下界大於下界，則將兩個值互換
		up_value = under_value;
		under_value = temp;
	}

	n = (up_value - under_value) / d + 1;	//計算項數

	total = (up_value + under_value ) * n / 2;	//利用公式計算總和

	return total;	//傳回計算結果
}
