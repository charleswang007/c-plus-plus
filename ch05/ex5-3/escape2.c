/* 範例檔名:escape2.c ,使用跳脫字元 \ddd \xhh 指定ASCII碼 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Hello!\n");/* 顯示訊息 */

    /* 使用跳脫字元\ddd與8進制數字指定相同之顯示訊息 */
    printf("\110\145\154\154\157\041\012");

    /* 使用跳脫字元\xhh與16進制數字指定相同之顯示訊息 */
    printf("\x48\x65\x6c\x6c\x6f\x21\x0a");

    system("PAUSE");
    return 0;
}
