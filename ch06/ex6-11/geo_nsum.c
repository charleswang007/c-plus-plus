/* 範例檔名:geo_nsum.c ,等比級數前N項的加總計算 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    /*宣告變數,a1為首項,r為比率,Rn為r的N次方,sum為前n項和*/
    double a1,r,Rn,sum=0;
    int n,i,j;/* 宣告變數，n代表第n項，i,j計次用 */

    printf("Input a1 r and the n term calculate:\n");;
    printf("a1 r n :\n");
    scanf("%lf %lf %d",&a1,&r,&n);/* 輸入等比級數計算變數 */

    for(i=1;i<=n;i++){/*執行迴圈當 i <= 項次 n 時 */
        Rn=1;

        for(j=1;j<i;j++){/*執行迴圈當 i < j 時 */
            Rn=Rn*r;/*每執行一次就把 Rn 值乘上 r*/
        }

        /* 顯示第 i 項等比級數值 */
        printf("The %d term of " /* 長字串的接續方式 */
               "geometrical proportion is %g\n",i,a1*Rn);

        sum += a1*Rn;/* 加總前 i 項等比級數 */
    }

    /*輸出計算而得的前n項和*/
    printf("\nThe sum is %g\n",sum);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
