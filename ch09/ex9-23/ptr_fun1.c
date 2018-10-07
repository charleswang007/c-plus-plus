/* 範例檔名:ptr_fun1.c , 函數指標的顯示 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>


/* 函數定義 */
void prn(void){printf("Function prn.\n");}/* 顯示函數名稱 */

int main(void)/* 主程式開始 */
{
    /* 顯示函數 prn 的位址 */
    printf("the address of function prn = %p\n",prn);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
