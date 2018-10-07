/* 範例檔名:loc_glo.c ,當區域變數遇上廣域變數 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int i=1; /* 宣告內部程式區塊的廣義變數 i */

    printf("In main i=%d\n",i);

    {/* 內部程式區塊 */
        int i=2;
        printf("In inner block i=%d\n",i);
    }

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
