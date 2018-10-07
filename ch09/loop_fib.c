/* 範例檔名:loop_fib.c ,使用迴圈函數計算費氏數列 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

/* 計算費氏數列，函數原型宣告 */
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
    int fib0=0,fib1=1,/* 費氏數列的前二項 */
        fibn=fib0+fib1,/* 費氏數列的第 n 項 */
        i;

    if(n==0)         /* n==0 */
        return fib0;
    else if(n==1)    /* n==1 */
        return fib1;
    else if(n==2)    /* n==2 */
        return fibn;
    else{            /* n>2 */
        for(i=3;i<=n;++i){/* 計算費式數列 */
            fib0=fib1;   /* 將fib0與fib1所存的數列增加一級 */
            fib1=fibn;
            fibn=fib0+fib1;/* 計算下一個費氏數列 */
        }
        return fibn;
    }
}
