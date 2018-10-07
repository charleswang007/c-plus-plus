/* 範例檔名:arith.c ,算術運算子的使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    /* 範例一 */
    printf("example 1:29%5*6/3=%d\n",29%5*6/3);

    /* 範例二 */
    printf("example 2:6-32%5+28/4*2=%d\n",6-32%5+28/4*2);

    /* 練習 */
    printf("Tests:\n");
    printf("5+6*9/3%4-2*3=%d\n",5+6*9/3%4-2*3);
    printf("35/5%4+3*2/5=%d\n",35/5%4+3*2/5);
    printf("35/5%4+3.0*2/5=%f\n",35/5%4+3.0*2/5);
    printf("10/4*2+5=%d\n",10/4*2+5);
    printf("10/4.0*2+5=%f\n",10/4.0*2+5);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
