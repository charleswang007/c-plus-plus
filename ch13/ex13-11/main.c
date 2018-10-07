/* 專案:sta_fun\sta_fun.dev */
/* 範例檔名:sta_fun\main.c，靜態函數示範之主模組 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

#include "module.h"/* 引入模組的標頭檔 */

int main(void)/* 主程式開始 */
{
    display_int_square(3);/* 計算顯示 3 之平方值 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
