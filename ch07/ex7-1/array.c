/* 範例檔名:array.c ,輸出陣列元素儲存的資料 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    /* 宣告字元陣列並設定初始值*/
    char array[5]={'a','b','c','d','e'};

    printf("array[4]=%c\n",array[4]); /* 輸出編號4的陣列元素 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
