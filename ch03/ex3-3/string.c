/* 範例檔名:string.c ,字串變數之使用 */
#include <stdio.h>/* 引入檔頭檔 */
#include <stdlib.h>

int main(void)
{
    char s[7]="Aloha!";/* 宣告字串變數 s 並設定初值 */

    printf("string : %s\n\n",s); /* 顯示字串變數 s */

    /* 顯示字串 s 之各字元與ASCII碼 */
    printf("elem.= char: ASCII\n");
    printf("s[0] =  %c  :  %d\n",s[0],s[0]);
    printf("s[1] =  %c  :  %d\n",s[1],s[1]);
    printf("s[2] =  %c  :  %d\n",s[2],s[2]);
    printf("s[3] =  %c  :  %d\n",s[3],s[3]);
    printf("s[4] =  %c  :  %d\n",s[4],s[4]);
    printf("s[5] =  %c  :  %d\n",s[5],s[5]);
    printf("s[6] =  %c  :  %d\n",s[6],s[6]);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

