/* 範例檔名:rec_fib.c ,使用遞迴函數計算費氏數列 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

/* 利用遞迴計算費氏數列，函數原型宣告 */
int fib(int n);

int main(void)
{
    int i;

    /*輸出費氏數列*/
    for(i=0;i<=10;++i)
        printf("fib(%2d)=%d\n",i,fib(i));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  fib 函數的宣告 作用：計算費氏數列
    傳入值：費氏數列的項次
    傳出值：費氏數列 */
int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
