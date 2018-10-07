/* 範例檔名:cons_val.c , 使用const限制傳值參數之更改 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

void print_i(const int);/* 函數的原型宣告 */

int main(void)/* 主程式開始 */
{
    print_i(3);/* 顯示整數 3 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  print_i 函數的宣告 作用：顯示傳入的整數值
    傳入值：顯示的整數 i */
void print_i(const int i)
{
    /* 更改傳入整數值 */
    i=5;

    printf("i=%d\n",i);
}

