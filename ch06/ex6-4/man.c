/* 範例檔名:man.c ,if...elseif...else判斷式的使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    char input_char;/* 宣告作為讀取輸入的字元 */

    printf("Are you a man?(y/n)");
    input_char=getchar();/* 讀取輸入的字元 */

    if(input_char =='y' || input_char =='Y')
        /* 輸入的字元如果是 y 或 Y 則執行此行 */
        printf("You are a man!\n");

    else if(input_char =='n' || input_char =='N')
        /* 輸入的字元如果是 n 或 N 則執行此行 */
        printf("You are a woman!\n");

    else/* 如果不是 y 或 Y，也不是 n 或 N 則執行此行 */
        printf("Is this question hard?\n");

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
