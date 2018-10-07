/* 範例檔名:mac_arg.c , 在巨集函數中使用不同資料型態的參數 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

/* 求三角形面積 */
#define TRIANGLE(base,height) ((base)*(height)/2)

int main(void)
{
    /* 計算三角形面積 */
    printf("TRIANGLE(5,3)=%d\n",TRIANGLE(5,3));/* 參數為int */

    /* 顯示佔有的位元組數 */
    printf("sizeof(TRIANGLE(5,3))=%d\n\n"
                   ,sizeof(TRIANGLE(5,3)));

     /* 參數為 double */
    printf("TRIANGLE(5.0,3.0)=%f\n",TRIANGLE(5.0,3.0));

    /* 顯示佔有的位元組數 */
    printf("sizeof(TRIANGLE(5.0,3.0))=%d\n"
                   ,sizeof(TRIANGLE(5.0,3.0)));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
