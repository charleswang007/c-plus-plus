/* 範例檔名:scan_int.c ,整數之輸入 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int no1,no2,no3,no4,no5,no6,no7;/* 宣告整數變數 */
    unsigned u1;

    /* 使用整數輸入格式符號 */
    printf("Input 2 numbers using %%d :");
    scanf("%d %d",&no1,&no2);/* 以%d格式輸入2個整數變數 */

    printf("Input 3 numbers using %%i :");
    scanf("%i %i %i",&no3,&no4,&no5);/* 以%i格式輸入3個整數變數 */

    printf("Input 1 number using %%u :");
    scanf("%u",&u1);/* 以%u格式輸入1個整數變數 */

    printf("Input 1 number using %%o :");
    scanf("%o",&no6);/* 以%o格式輸入1個整數變數 */

    printf("Input 1 number using %%x :");
    scanf("%x",&no7);/* 以%x格式輸入1個整數變數 */

    /* 顯示輸入的數字 */
    printf("\nDisplay inputed numbers...\n");
    printf("%%d=%d,%d\n",no1,no2);
    printf("%%i=%d,%d,%d\n",no3,no4,no5);
    printf("%%u=%d\n",u1);
    printf("%%o=%d\n",no6);
    printf("%%x=%d\n",no7);

    system("PAUSE");
    return 0;
}
