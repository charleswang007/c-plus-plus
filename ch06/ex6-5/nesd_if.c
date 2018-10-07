/* 範例檔名:nest_if.c ,if...else判斷式的巢狀應用，判斷閏年 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int year;/* 宣告作為讀取的年代 */

    printf("Please input the year:");
    scanf("%d",&year);/* 讀取輸入的年代 */

    if((year % 4)== 0){ /* 可被 4 除盡 */
       if ((year%100)==0){ /* 可被 4,100 除盡 */
           if((year%400)==0)/* 可被 4,100,400 除盡 */
               printf("year %d is a leap year!\n",year);
           else/* 可被 4,100 除盡,不可被 400 除盡 */
               printf("year %d is not a leap year!\n",year);
       }
       else/* 可被 4 除盡,不可被 100 除盡 */
           printf("year %d is a leap year!\n",year);
    }
    else/* 不可被 4 除盡 */
        printf("year %d is not a leap year!\n",year);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
