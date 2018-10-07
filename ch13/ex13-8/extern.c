/* 範例檔名:extern.c，主程式中引用外部變數（廣域變數） */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    /* 利用extern宣告已有的廣域變數 */
    extern int global;

    printf("global=%d\n",global);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

int global=3;/* 宣告廣域變數 global */

