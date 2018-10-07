/* 範例檔名:circle2.c ,圓面積的計算 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
     float fRadius,fPI,fArea; /* 宣告浮點數變數 */

     fRadius=5.0; /* 設定圓半徑 */
     fPI=3.14; /* 設定圓周率 */

     fArea=fPI*fRadius*fRadius; /* 計算圓面積 */

     /*顯示計算結果*/
     printf("The area of radius %f is %f\n",fRadius,fArea);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
