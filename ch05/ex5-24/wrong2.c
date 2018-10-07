/* 範例檔名:wrong2.c ,整數、浮點數與字串的輸入*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=1;/* 宣告整數變數，並指定初值為 1 */
    float f=1;/* 宣告浮點變數，並指定初值為 1 */
    char str[20];

    /* 要求輸入 1 個整數 */
    printf("Please input 1 integer:");
    scanf("%d",&i);

    /* 要求輸入 1 個浮點數 */
    printf("\nPlease input 1 float:");
    scanf("%f",&f);

    /* 輸入 1 個字串 */
    printf("\nPlease input 1 string:");
    scanf("%s",str);

    /* 顯示變數值 */
    printf("\ni=%d",i);
    printf("\nf=%f",f);
    printf("\nstr=%s\n",str);

    system("PAUSE");
    return 0;
}
