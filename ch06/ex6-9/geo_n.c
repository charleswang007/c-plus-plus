/* 範例檔名:geo_n.c ,等比級數第N項的計算 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    double a1,r,Rn=1;/*宣告變數,a1為首項,r為比率,Rn為r的N次方*/
    int n,i;/* 宣告變數，n代表第n項，i計次用 */

    printf("Input a1 r and the n term calculate:\n");
    printf("a1 r n :\n");
    scanf("%lf %lf %d",&a1,&r,&n);/* 輸入等比級數計算變數 */

    for(i=1;i<n;i++){/*執行迴圈當 i <= 項次 n 時 */
        Rn=Rn*r;/*每執行一次就把 Rn 值乘上 r*/
    }

    /*輸出計算而得的第n項值*/
    printf("The n term of geometrical proportion is %g\n",a1*Rn);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
