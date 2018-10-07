/* 範例檔名:define.c ,自訂常數 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

#define PI 3.14 /* 定義圓周率為為常數 PI */

int main(void)
{
    float fRadius,fArea; /* 宣告浮點數變數 */

    fRadius=5.0; /* 設定圓半徑 */

    fArea=PI*fRadius*fRadius; /* 計算圓面積 */

     /*顯示計算結果*/
    printf("The area of radius %f is %f\n",fRadius,fArea);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
