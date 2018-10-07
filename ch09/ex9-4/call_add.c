/* 範例檔名:call_add.c , 傳入引數傳址呼叫的示範 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int arith(int *,int*,int);/* 函數的原型宣告 */

int main(void)/* 主程式開始 */
{
    int first_term=100,n_term=1,step=1; 
    
    /* 顯示各變數值 */
    printf("before fuction call...\n");
    printf("first_term=%d\n",first_term);
    printf("n_term=%d\n",n_term);
    printf("step=%d\n",step);

    /* 以變數位址呼叫函數 */
    printf("\nthe sum from 1 to 100 step 1 is %d\n\n",
               arith(&first_term,&n_term,step));

    /* 顯示各變數值 */
    printf("after fuction call...\n");
    printf("first_term=%d\n",first_term);
    printf("n_term=%d\n",n_term);
    printf("step=%d\n",step);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  arith 函數的宣告 作用：計算等差級數的級數和
    傳入值：等差級數的首項位址*up_value、末項位址*under_value
            與公差step
    傳出值：加總後的總和 */
int arith(int *under_value,int *up_value,int step)
{
    int n,temp,total=0;

    /* 檢查末項是否大於首項，若否則交換之 */
    if(*up_value < *under_value){
        temp=*up_value;
        *up_value=*under_value;
        *under_value=temp;
    }

    n=(*up_value-*under_value)/step+1;/* 計算項數 */

    total=(*up_value + *under_value)*n/2;/* 利用公式計算總和 */

    return total;/* 回傳值 */
}

