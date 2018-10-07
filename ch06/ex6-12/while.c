/* 範例檔名:while.c ,使用while迴圈加總1到100 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int i=1,sum=0;/* 宣告變數，sum為計算總和，i用於計次 */

    while(i<=100){/*執行迴圈當 i <= 100 時 */
        sum=sum+i;/*每執行一次就把 sum 值加上 i*/
        i++;/* 將i加一 */
    }
    printf("The sum from 1 to 100 is %d\n",sum);/*輸出相加總和*/

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
