/* 範例檔名:scan_dou.c ,浮點數之輸入 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double d1,d2,d3;/* 宣告浮點數變數 */

    /* 使用浮點數輸入格式符號 */
    printf("Input 3 doubles using %%e %%f %%g:\n");
    scanf("%le %lf %lg",&d1,&d2,&d3);/* 以%e %f %g格式輸入變數 */

    /* 顯示輸入的數字 */
    printf("\nDisplay inputed numbers...\n");
    printf("%g,%g,%g\n",d1,d2,d3);

    system("PAUSE");
    return 0;
}
