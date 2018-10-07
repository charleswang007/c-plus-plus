/* 範例檔名:fun_arr2.c , 傳遞二維陣列給函數 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

/* 顯示大小為rol,col的二維陣列所有元素的值 */
void prn_arr(int * arr,int rol,int col);/* 函數原型宣告 */

int main(void)/* 主程式開始 */
{
    int array[][3]={{1,2,3},{4,5,6}};

    prn_arr(array[0],2,3);/* 顯示array所有的元素 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  prn_arr 函數的宣告 作用：顯示大小為rol,col的二維陣列所有元素的值
    傳入值：陣列位址 *arr與陣列大小 rol,col */
void prn_arr(int *arr,int rol,int col)
{
    int i,j;

    /* 顯示陣列元素值 */
    for(i=0 ; i<rol ; i++)
        for(j=0 ; j<col ; j++)
            printf("array[%d][%d]= %d\n",i,j,arr[i*col+j]);
}

