/* 範例檔名:ptr_str.c ,以指標宣告字串變數 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    char str1[]="Hello";/* 宣告一字元陣列 */
    char *str2="Hello";/* 宣告一字元指標 */
    int i;

    printf("element | Ascii \n");/* 顯示標頭 */
    printf("-------------------\n");

    for(i=0;i<6;i++)    /* 顯示字元陣列元素 */
        printf("str1[%d] | %d \n",i,str1[i]);

    printf("\nstr2:%p\n\n",str2);/* 輸出更改前的位址值 */

    printf("element | Ascii \n");/* 顯示標頭 */
    printf("-------------------\n");

    for(i=0;i<6;i++){    /* 顯示字元指標變數 */
        printf("str2+%d  | %d \n",i,*str2);
        str2++;
    }

    printf("\nstr2:%p\n\n",str2);/* 輸出更改後的位址值 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
