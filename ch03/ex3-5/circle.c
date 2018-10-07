/* 範例檔名:circle.c ,圓面積之計算 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    float a,b,c; /* 宣告浮點數變數 a,b,c */

    a=5.0; /* 設定 a 為圓半徑 */
    b=3.14; /* 設定 b 為圓周率 */

    c=b*a*a; /* 計算圓面積 */

    printf("The area of radius %f is %f\n",a,c);/*顯示計算結果*/

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
