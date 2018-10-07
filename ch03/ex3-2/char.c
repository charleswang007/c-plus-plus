/* 範例檔名:char.c ,字元與整數在字元型態上的應用 */
#include <stdio.h>/* 引入檔頭檔 */
#include <stdlib.h>

int main(void)
{
    /* 宣告字元變數 ch1,ch2，並指定初值為'A'與65*/
    char ch1='A',ch2=65;

    /* 以字元與數字的型式顯示字元變數ch1與ch2的值 */
    printf("ch1 %c=%d\n",ch1,ch1);
    printf("ch2 %c=%d\n",ch2,ch2);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
