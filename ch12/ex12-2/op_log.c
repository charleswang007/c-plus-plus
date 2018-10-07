/* 範例檔名:op_log.c ,位元邏輯運算子的使用範例 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int A=283087,B=-302834;/* 宣告整數變數 */
    char str[33];/* 宣告存放轉換後數字的字串 */

    /* 以2進制的字串來顯示變數值與使用位元邏輯運算子後的結果 */
    printf("A   = %32s\n",itoa(A,str,2));
    printf("B   = %32s\n",itoa(B,str,2));
    printf("--------------------------------------\n");
    printf("A&B = %32s\n",itoa(A&B,str,2));
    printf("A|B = %32s\n",itoa(A|B,str,2));
    printf("A^B = %32s\n",itoa(A^B,str,2));
    printf("~A  = %32s\n",itoa(~A,str,2));

    system("PAUSE");
    return 0;
}
