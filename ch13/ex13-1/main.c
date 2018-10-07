/* 專案:ex13-1\My_Prj1.dev */
/* 範例檔名:My_Prj1\main.c，模組化程式的主程式模組 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int sum(int,int);/*  sum 函數的原型宣告 */

int main(void)/* 主程式開始 */
{
    printf("the sum from 1 to 200 is %d\n",sum(1,200));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
