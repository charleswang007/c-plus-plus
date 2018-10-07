/* 範例檔名:gcd.c ,使用while迴圈求最大公因數 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    /* 宣告變數，a為除數，b為被除數，temp為餘數 */
    int a=0,b=0,temp=0;

    printf("Please input two integer for finding their GCD:\n");
    scanf("%d %d",&a,&b);/* 輸入求GCD之二個數字 */

    while(b!=0){/*執行迴圈當 b 不等於 0 時 */
        temp=a%b;/*求a,b相除之餘數*/
        a=b;/* 將除數 b 換成被除數 a */
        b=temp;/* 將前面除得的餘數，設成餘數b */
    }
    printf("GCD is %d\n",a);/*最除盡的除數為答案*/

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
