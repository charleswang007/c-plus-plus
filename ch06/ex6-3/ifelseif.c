/* 範例檔名:ifelseif.c ,if...elseif...else判斷式的使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    char input_char;/* 宣告作為讀取輸入的字元 */

    printf("Please input a character:");
    input_char=getchar();/* 讀取輸入的字元 */

    /* 判斷輸入的字元是否為數字 */
    if(input_char >='0' && input_char <='9')
        /* 如果是數字則執行此行 */
        printf("You Input a number '%c'\n",input_char);

    /* 判斷輸入的字元是否為英文字母 */
    else if((input_char >='A' && input_char <='Z')
            ||(input_char >='a' && input_char <='z'))
        /* 如果是數字則執行此行 */
        printf("You Input an English letter '%c'\n",input_char);

    else
        /* 如果不是數字也不是英文字母則執行此行 */
        printf("'%c' is not a number or letter\n",input_char);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
