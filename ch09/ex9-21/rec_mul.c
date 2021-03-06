/* 範例檔名:rec_sum.c ,使用遞迴函數計算階乘 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int recursion_mul(int up_value);/* 遞迴相乘，函數原型宣告 */

int main(void)
{
    int i;

    /*輸出階乘計算結果*/
    for(i=1;i<=10;++i)
        printf("%2d! =%d\n",i,recursion_mul(i));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  recursion_mul 函數的宣告 作用：計算階乘結果
    傳入值：階乘的上界up_value
    傳出值：階乘值 */
int recursion_mul(int up_value)
{
    if(up_value>1)
        return (up_value * recursion_mul(up_value-1));
    else
        return 1;
}
