/* 範例檔名:sum.c ,使用for迴圈加總1到100 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int i,sum=0;/* 宣告變數，sum為計算總和，i用於計次 */

    for(i=0;i<=100;i++){/*執行迴圈當 i <= 100 時 */
        sum=sum+i;/*每執行一次就把 sum 值加上 i*/
    }
    printf("The sum from 1 to 100 is %d\n",sum);/*輸出相加總和*/

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
