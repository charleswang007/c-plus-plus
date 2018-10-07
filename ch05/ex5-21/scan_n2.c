/* 範例檔名:scan_n2.c ,多個 %n 的使用範例*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i1,i2,i3,i4,i5,i6,count1,count2
        ,count3,count4,count5,count6;/* 宣告整數變數 */

    /* 輸入 2 個整數 */
    printf("Please input 2 integers:");
    scanf("%d%n%d%n",&i1,&count1,&i2,&count2);

    /* 輸入 2 個整數，與前同 */
    printf("Please input 2 integers:");
    scanf("%d%n%d%n",&i3,&count3,&i4,&count4);

    /* 輸入 2 個整數，%n前加空格 */
    printf("Please input 2 integers:");
    scanf("%d %n%d %n",&i5,&count5,&i6,&count6);

    printf("\ni1=%d\n",i1);
    /* 計算至i1輸入完之字元數 */
    printf("characters count to i1=%d\n",count1);

    printf("i2=%d\n",i2);
    /* 計算至i2輸入完之字元數 */
    printf("characters count to i2=%d\n",count2);

    printf("i3=%d\n",i3);
    /* 計算至i3輸入完之字元數 */
    printf("characters count to i3=%d\n",count3);

    printf("i4=%d\n",i4);
    /* 計算至i4輸入完之字元數 */
    printf("characters count to i4=%d\n",count4);

    printf("i5=%d\n",i5);
    /* 計算至i5下一個參數前輸入之字元數 */
    printf("characters count to i5=%d\n",count5);

    printf("i6=%d\n",i6);
    /* 計算至i6下一個參數前輸入之字元數 */
    printf("characters count to i6=%d\n",count6);

    system("PAUSE");
    return 0;
}
