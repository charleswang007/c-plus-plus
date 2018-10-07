/* 範例檔名:continue.c ,在for迴圈中使用continue敘述 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int i;

    for(i=1;i<=4;i++){
        printf("i=%d\n",i);  /* 第幾次執行迴圈 */
        printf("section 1\n"); /* 程式區段 1 */

        if(i==3) continue;/* 如果i等於3，強迫回到迴圈的計次運算式*/

        printf("section 2\n"); /* 程式區段 2 */
    }
    printf("section 3\n"); /* 程式區段 3 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
