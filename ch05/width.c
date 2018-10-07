/* 範例檔名:width.c ,scanf函數width指定輸入最大字元數*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,c,d;/* 宣告變數 */
    char str1[10],str2[10];

    /* 要求輸入 2 個整數 */
    printf("Please input 2 integers (a,b):\n");
    scanf("%4d%d",&a,&b);

    /* 要求輸入一連串的數字 */
    printf("\nPlease input larger than 4 digits (c,d):\n");
    scanf("%4d%d",&c,&d);

    /* 要求輸入一連串的字元 */
    printf("\nInput more than 4 characters(str1,str2):\n");
    scanf("%4s%s",str1,str2);

    /* 顯示內容 */
    printf("\na=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);

    system("PAUSE");
    return 0;
}
