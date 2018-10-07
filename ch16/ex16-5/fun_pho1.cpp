/*
範例檔名:fun_pho1.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int sum(int,int = 1000); //函數的原型宣告，並設定預設值

int main() //主程式開始
{
    //int sum(int,int);  //原型宣告也可以放這裡
    cout << "the sum from 1 to 1000 is " << sum(1) << endl;

    system("PAUSE"); //暫停程式執行
    return 0;
}

/*
sum 函數的宣告 作用：加總傳入值的範圍內的整數總和
傳入值：加總範圍的上界up_value與下界under_value
傳出值：加總後的總和
*/
int sum(int under_value,int up_value)
{
    int i,temp,total=0;

    //檢查上界是否大於下界，若否則交換之
    if(up_value<under_value){
        temp=up_value;
        up_value=under_value;
        under_value=temp;
    }

    for(i=under_value;i<=up_value;i++) //加總計算
        total += i;

    return total; //回傳值
}

