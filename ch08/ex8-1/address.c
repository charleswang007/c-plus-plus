/* 範例檔名:address.c ,使用&取址運算子取得變數儲存之位址 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int address=2;/* 宣告變數並設定初始值 */

    /* 顯示變數儲存的記憶體位址 */
    printf("The address of variable locates in %p \n",&address);

    /* 顯示變數的儲存值 */
    printf("The value of variable in %d \n",address);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
