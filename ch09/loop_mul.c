/* 範例檔名:loop_mul.c ,使用迴圈函數計算階乘 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int loop_mul(int up_value);/* 階乘計算，函數原型宣告 */

int main(void)
{
    int i;

    /*輸出階乘計算結果*/
    for(i=1;i<=10;++i)
        printf("%2d! =%d\n",i,recursion_mul(i));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  loop_mul 函數的宣告 作用：計算階乘結果
    傳入值：階乘的上界up_value
    傳出值：階乘值 */
int loop_mul(int up_value)
{
    int i,product=0;

    for(i=up_value;i>=1;--i)
    	product *= i;

        return product;
}
