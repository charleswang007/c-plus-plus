/* 範例檔名:rec_sum.c ,使用遞迴函數加總 1 到 5 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int recursion_sum(int up_value);/* 遞迴相加，函數原型宣告 */
int loop_sum(int up_value);/* 迴圈相加，函數原型宣告 */

int main(void)
{
    /*輸出加總總和*/
    printf("The sum from 1 to 5 is %d (recursion)\n"
              ,recursion_sum(5));/* 使用遞迴 */

    /* 使用迴圈 */
    printf("The sum from 1 to 5 is %d (loop)\n",loop_sum(5));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  recursion_sum 函數的宣告 作用：加總 1 到傳入整數的總和
    傳入值：加總範圍的上界up_value
    傳出值：相加值 */
int recursion_sum(int up_value)
{
    if(up_value>1)
        return (up_value + recursion_sum(up_value-1));
    else
        return 1;
}

/*  loop_sum 函數的宣告 作用：加總 1 到傳入整數的總和
    傳入值：加總的範圍up_value
    傳出值：加總後的總和 */
int loop_sum(int up_value)
{
    int i,sum;

    for(i=up_value,sum=0;i>=1;i--)
        sum += i;

    return sum;
}

