/* 專案:ex13-9\extern.dev */
/* 範例檔名:ex13-9\main.c，外部變數示範之主模組 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

#include "module.h"/* 引入模組的標頭檔 */

int main(void)/* 主程式開始 */
{
    printf("my_int=%d\n",my_int);/* 顯示外部變數初值 */

    my_int=300;/* 更改外部變數值 */

    display_myint();/* 以函數顯示外部變數值 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
