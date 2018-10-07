/* 範例檔名:for.c ,利用for迴圈設定與輸出陣列元素所有的元素 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{

    int array[5],i;    /* 宣告整數陣列array[5] */

    for(i=0;i<=4;i++){/* 設定陣列元素初始值 */
        array[i]=i;
    }

    for(i=0;i<=4;i++){/* 顯示每個陣列元素的值 */
        printf("array[%d]=%d\n",i,array[i]);
    }

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
