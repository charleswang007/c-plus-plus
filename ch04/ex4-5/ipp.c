/* 範例檔名:ipp.c ,++i與i++的使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int i=0;/* 宣告變數i並設定初值為0 */

    /* 先傳出值後，再加1 */
    printf("i=%d,",i);/* i 的初值=0 */
    printf("i++=%d,",i++);/* 先傳出值後，再加1 */
    printf("after i=%d\n",i);/* 加1後的值 */

    i=0;/* 重設i的值 */

    /* 先加1再傳出值 */
    printf("i=%d,",i);/* i 的初值=0 */
    printf("++i=%d,",++i);/* 先加1再傳出值 */
    printf("after i=%d\n",i);/* 加1後的值 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
