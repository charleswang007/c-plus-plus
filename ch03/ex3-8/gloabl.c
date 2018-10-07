/* 範例檔名:global.c ,廣域變數的有效範圍 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int global=3;/* 宣告廣域變數 global */

void fun(void)/* 定義函數 fun */
{/* 函數fun的程式區塊 */
    printf("global in fun = %d\n",global);/*顯示廣義變數 global*/
}

int main(void)
{/* 主程式程式區塊 */
    int i=1;

    {/* 內部程式區塊 */
        int j=2;
        printf("i=%d,j=%d,global=%d\n",i,j,global);
    }
    printf("i=%d,global=%d\n",i,global);

    fun();/* 呼叫並執行函數 fun */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
