/* 範例檔名:force.c ,強制轉換型態 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    printf("7/2=%d \n",7/2);/* 錯誤結果值 */
    printf("(float)7/2=%f\n",(float)7/2);/* 強制轉換型態 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
