/* 專案:ex13-10\sta_ext.dev */
/* 範例檔名:ex13-10\main.c，外部靜態變數示範之主模組 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

#include "module.h"/* 引入模組的標頭檔 */

int main(void)/* 主程式開始 */
{
    display_myint();/* 以所屬模組之函數顯示外部靜態變數值 */

    set_myint(300);/* 以所屬模組之函數設定外部靜態變數值 */

    display_myint();/* 以所屬模組之函數顯示外部靜態變數值 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
