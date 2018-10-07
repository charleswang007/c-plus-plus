/* 專案:ex13-3\include.dev */
/* 範例檔名:ex13-3\main.c , 模組化程式的主模組 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

#include "module.h"/* 引入模組的標頭檔 */

int main(void)/* 主程式開始 */
{
    printf("circle of diameter 5:\n");
    printf("the area is %f\n",cir_a(5));
    printf("the circumference is %f\n",cir_l(5));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
