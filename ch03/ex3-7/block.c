/* 範例檔名:block.c ,區域變數的有效範圍 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>
int main(void)
{/* 主程式程式區塊 */
    int i=1;

    {/* 內部程式區塊 */
        int j=2;
        printf("i=%d,j=%d\n",i,j);
    }
    printf("i=%d\n",i);

    /* 在這裡執行會因為j未被宣告而發生錯誤 */
    /*printf("j=%d\n",j); */
    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
