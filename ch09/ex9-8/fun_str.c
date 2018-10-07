/* 範例檔名:fun_str.c , 傳遞字串給函數 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int str_upper(char *);/* 函數原型宣告 */

int main(void)/* 主程式開始 */
{
    char str[]="Hello";

    printf("Before replacing:%s\n",str);/* 輸出原字串 */

    printf("%d chars are replaced.\n",str_upper(str));/* 轉換 */

    printf("After replacing:%s\n",str);/* 輸出轉換後字串 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  str_upper 函數的宣告 作用：將傳入的字串轉換為大寫字母
    傳入值：字元陣列位址 *ptr_to_str
    傳出值：轉換為大寫字元的個數 */
int str_upper(char *ptr_to_str)
{
    int replace_num=0;/* 計算被置換的字元數目 */

    while(*ptr_to_str != '\0'){/* 判別是否為字串結尾 */

        /* 判別是否為小寫字母 */
        if( (*ptr_to_str >= 'a') && (*ptr_to_str <='z')){
            *ptr_to_str -= 32;/* 將小寫置換為大寫 */
            replace_num++;/* 被置換字數加 1 */
        }
        ptr_to_str++;/* 將指標向後移動 */
    }

    return replace_num;/* 回傳值 */
}

