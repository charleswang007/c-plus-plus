/* 範例檔名:hi.c ,define之取代 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

#define HI printf("Hello!\n");/* 定義程式敘述 HI */

int main(void)
{
    HI HI /* 不需結尾符號 ";" 因為已包含在 HI 中*/

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
