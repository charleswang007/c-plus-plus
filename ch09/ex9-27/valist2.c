/* 範例檔名:valist2.c ,浮點數之不定長度引數列以 0 結束 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

/* 函數之不定引數列傳入原型宣告 */
double sun_powx_rooty(double x,double y,...);

int main(void)
{
    printf("sun_powx_rooty(2,2,3.0,5.0,NULL)=%f\n",
              sun_powx_rooty(2,2,3.0,5.0,NULL));

    system("PAUSE");
    return 0;
}
/* 計算值  (Σ(引數)^x)^(1/y)
   傳入引數：x  計算引數的次方
             y  計算引數次方和之開 y 次根號
             不定引數  計算值
   傳出值：計算值 */
double sun_powx_rooty(double x,double y,...)
{
    double total=0,temp;/* 引數之次方和、暫存變數 */
    int j;/* 計數用 */
    va_list var;/* 宣告存取不定引數列的變數型態 */

    va_start(var,y);/* 初始化不定引數列的存取 */

    /* 加總所有引數之 x 次方和，以 */
    while( fabs((temp=va_arg(var,double ))) >= 1e-13 ){
        total += pow(temp,x);
    }

    total = pow(total,1/y);/* 計算和之開 y 次根號 */

    va_end(var);/* 結束不定引數列的存取 */

    return total;/* 傳回計算值 */
}
