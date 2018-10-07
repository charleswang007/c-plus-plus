/* 範例檔名:wrong1.c ,scanf函數中指定字串之輸入 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=1;/* 宣告整數變數，並指定初值為 1 */
    char str[20];

    /* 要求輸入 Input: 與 1 個整數 */
    printf("Please input \"Input:\" and 1 integer:");
    scanf("Input:%d",&i);

    /* 輸入 1 個字串 */
    printf("\nPlease input 1 string:");
    scanf("%s",str);

    /* 顯示變數值 */
    printf("\ni=%d",i);
    printf("\nstr=%s\n",str);

    system("PAUSE");
    return 0;
}
