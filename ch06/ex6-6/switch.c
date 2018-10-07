/* 範例檔名:switch.c ,switch case的使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    char input_char;/* 宣告作為讀取輸入的字元 */

    printf("Are you a man?(Y/N)");
    input_char=getchar();/* 讀取輸入的字元 */

    switch(input_char)
    {
    case 'Y':/* 判斷輸入的是否為 Y */
        printf("You are a man!\n");
        break;
    case 'N':/* 判斷輸入的是否為 N */
        printf("You are a woman!\n");
        break;
    default:/* 如果不是 Y ，也不是 N 則執行此行 */
        printf("Is this question hard?\n");
    }

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
