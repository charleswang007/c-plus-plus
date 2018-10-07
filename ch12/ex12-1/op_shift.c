/* 範例檔名:op_shift.c ,位元位移運算子的使用範例 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    char A=14,B=-14;/* 宣告字元變數 */

    /* 顯示變數值與使用位元位移運算子後的結果 */
    printf("A=%d\n",A);
    printf("A<<3=%d\n",A<<3);
    printf("A>>3=%d\n",A>>3);

    printf("\nB=%d\n",B);
    printf("B<<3=%d\n",B<<3);
    printf("B>>3=%d\n",B>>3);

    system("PAUSE");
    return 0;
}
