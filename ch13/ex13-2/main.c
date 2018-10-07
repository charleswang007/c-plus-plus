/* 專案:ex13-2\My_Prj2.dev */
/* 範例檔名:ex13-2\main.c，以目的檔做為函數模組 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int sum(int,int);/*  sum 函數的原型宣告 */

int main(void)/* 主程式開始 */
{
    printf("the sum from 1 to 300 is %d\n",sum(1,300));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
