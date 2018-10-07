/* 範例檔名:fun_arr.c , 傳遞陣列給函數 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

/* 函數原型宣告，也可寫成 int array_sum(int [],int);*/
int array_sum(int *,int);

int main(void)/* 主程式開始 */
{
    int array[3]={1,2,3};

    printf("the sum of array element is %d\n",
                       array_sum(array,3));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  array_sum 函數的宣告 作用：加總傳入陣列內元素的值
    傳入值：陣列位址 *ptr_to_array與陣列元素個數 size
    傳出值：加總後的總和 */
int array_sum(int *ptr_to_array,int size)
{
    int i,sum=0;

    for(i=0 ; i<size ; i++)/* 加總計算 */
        sum += ptr_to_array[i];

    return sum;/* 回傳值 */
}

