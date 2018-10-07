/* 範例檔名:wrong2.c ,很多語法錯誤的程式 */
#include <stdio.h> /* 引入標頭檔 */
#include <stdlib.h>

int main(void) /* 主函數 */
{
    int brothers=2,sisters=3;

    printf("My family is a big family.\n");
    printf("I have %d brothers and %d sisters\n"
                    ,brothers,sisters);

    system("PAUSE");/* 暫停程式執行 */
    return 0;
}
