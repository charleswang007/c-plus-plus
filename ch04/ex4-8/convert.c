/* 範例檔名:convert.c ,自動型態轉換 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    double d;/* 宣告變數 */
    float f;
    int i;
    unsigned int ui;

    /* 當數字大於浮點數範圍時，轉換為浮點數與整數無法正確辦識 */
    d=1.234567890123456789e100;
    f=d;/* 轉換為浮點數值 */
    i=d;/* 轉換為整數值 */
    printf("number > float\n");
    printf("Original Value = %20.18e\n",d );
    printf("to float= %20.18f\n",f );/* 無窮大值 */
    printf("to int  = %20d\n\n",i );/* 錯誤值 */

    /* 當數字介於浮點數與整數範圍時，轉換為整數無法正確辦識 */
    d=1.23456789012345e30;
    f=d;/* 轉換為浮點數值 */
    i=d;/* 轉換為整數值 */
    printf("float > number > int\n");
    printf("Original Value = %20.18e\n",d );
    printf("to float= %20.18e\n",f );/* 正確值但有效位數不足 */
    printf("to int  = %d\n\n",i );/* 錯誤值 */

    /* 當數字小於整數範圍時，可轉換出正確值，但整數需捨去小數 */
    d=123456.7;
    f=d;/* 轉換為浮點數值 */
    i=d;/* 轉換為整數值 */
    printf("number < int\n");
    printf("Original Value = %e\n",d );
    printf("to float= %e\n",f );/* 正確值 */
    printf("to int  = %d\n\n",i );/* 正確整數值，小數點後捨去 */

    /* 負整數轉換為unsigned整數 */
    i=-5000;
    ui=i;/* 轉換為unsigned整數值 */
    printf("negtive interger \n");
    printf("Original Value = %d\n",i );
    printf("to unsigned int= %u\n",ui );/* 錯誤值，參數用%u */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
