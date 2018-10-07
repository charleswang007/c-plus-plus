/* 範例檔名:power.c ,正確的顯示2的50次方展開後的每一個數字 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int digit[20],i,j,k,carry;    /* 宣告字元陣列pass[20] */

    for(i=0;i<20;++i) digit[i]=0;/* 初始化字元陣列 pass */

    digit[0]=1;

    for(i=0;i<50;++i)/* 計算 50 次 */
    {
        for(j=19;j>=0;--j)/* 將digit陣列所有元素都乘 2 */
        {
            digit[j]*=2;/* 指定陣列元素等於本身乘 2 的值*/

            carry=1;/* 進位迴圈是否需要繼續 */
            k=0;
            do{/* 進位迴圈 */
                if(digit[j+k]>9){/* 當陣列元素值大於10時之進位*/
                    /* 大於10時進位到上一個陣列元素 */
                    if((j+k+1)<=19)digit[j+k+1] += digit[j+k]/10;

                    digit[j+k] %= 10;/* 只取個位數使之小於10 */
                }

                /* 當上一位不需進位時停止迴圈 */
                if((digit[j+k+1]>9)&&((j+k+1)<=19))
                    k++;
                else
                    carry=0;/* 停止迴圈 */
            }while(carry);
        }

         /* 顯示 2 的 i 次方的每個位數 */
        printf("i^%2d=",i+1);
        for(j=19;j>=0;--j)
        {
            printf("%d",digit[j]);
        }
        printf("\n");

    }

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
