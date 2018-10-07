/* 範例檔名:m_circle.c ,多個圓面積之計算 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
     float fRadiusLarge=5,/* 宣告三個圓半徑變數並指定初值 */
           fRadiusMid=3,
           fRadiusSmall=1,
           fPI=3.14, /* 宣告圓周率 */
           /* 宣告三個圓面積變數並同時計算出結果 */
           fAreaLarge=fPI*fRadiusLarge*fRadiusLarge,
           fAreaMid=fPI*fRadiusMid*fRadiusMid,
           fAreaSmall=fPI*fRadiusSmall*fRadiusSmall;

     /*顯示計算結果*/
     printf("The area of radius %f is %f\n"
                                  ,fRadiusLarge,fAreaLarge);
     printf("The area of radius %f is %f\n"
                                  ,fRadiusMid,fAreaMid);
     printf("The area of radius %f is %f\n"
                                  ,fRadiusSmall,fAreaSmall);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
