/* 專案:multidef\multidef.dev */
/* 範例檔名:multidef\main.c，模組化程式的主程式模組 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

#include "area.h"
#include "circum.h"

int main(void)/* 主程式開始 */
{
    printf("circle of diameter 5:\n");
    printf("the area is %f\n",cir_a(5));
    printf("the circumference is %f\n",cir_l(5));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
