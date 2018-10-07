/* 範例檔名:scan_n1.c ,已輸入字元數的儲存 %n */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,count;/* 宣告整數變數 */

    /* 依照格式輸入Input:以及一個整數 */
    printf("Please input \"Input:\" and 1 integer:");
    scanf("Input:%d%n",&i,&count);

    printf("\n i=%d\n",i);
    /* 計算至i輸入完之字元數 */
    printf("characters count to i=%d\n",count);

    system("PAUSE");
    return 0;
}
