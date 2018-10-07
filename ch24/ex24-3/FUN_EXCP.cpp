/*
範例檔名：fun_excp.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

void ExcpFun3 ()
{ throw ("Throwing exception from ExcpFun3 !\n"); }	//丟出例外

void ExcpFun2 () 
{ ExcpFun3(); }	//呼叫 ExcpFun3函數

void ExcpFun1 ( ) 
{ ExcpFun2(); }	//呼叫 ExcpFun2函數

int main() //主程式開始
{
	try{	//錯誤偵測區塊
		ExcpFun1();	//呼叫ExcpFun1
	}
	catch (const char * c) { cerr << c; }	//錯誤處理區塊

    system("PAUSE");
    return 0;
} //主程式結束
