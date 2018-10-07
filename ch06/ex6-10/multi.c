/* 範例檔名:multi.c ,雙層迴圈的範例，九九乘法表 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int i,j;/* 宣告變數，乘法表之乘數i與被乘數j */

    for(i=1;i<=9;i++){/* 控制乘法表中乘數的迴圈 */
        for(j=1;j<=9;j++){/* 控制乘法表中被乘數的迴圈 */
            printf("%d*%d=%d\t",i,j,i*j);/*乘法表之單項*/
        }
        putchar('\n');/*乘法表每一列之換行*/
    }

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
