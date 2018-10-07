/* 範例檔名:fun_sort.c , 以氣泡法排序傳入函數的一維陣列 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

/* 函數原型宣告*/
void bubble_asc(int *,int);/* 遞增泡泡排序函數 */
void prn_arr(int *,int);/* 顯示一維陣列的所有元素 */

int main(void)/* 主程式開始 */
{
    int array[5]={3,5,2,4,3};

    printf("Origin arr=");/* 顯示排序前的陣列 */
    prn_arr(array,5);
    printf("\n\n");

    bubble_asc(array,5);/* 進行排序 */

    printf("\nSorted arr=");/* 顯示排序後的陣列 */
    prn_arr(array,5);
    printf("\n");

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  bubble_asc 函數的宣告 作用：遞增排序一維陣列內的元素
    傳入值：陣列位址 *arr與陣列元素個數 size */
void bubble_asc(int *arr,int size)
{
    int i,j,temp;

    for(i=1 ; i<=(size-1) ; i++)/* 執行size-1次排序 */
    {
        for(j=0 ; j<(size-i) ; j++)/* 每次排序將1個值歸定位 */
        {
            if(arr[j]>arr[j+1])/* 若大於則交換之 */
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            printf("sort[%d][%d]=",i,j);/*顯示每一次歸定位的情形*/
            prn_arr(arr,5);
            printf("\n");
        }
        printf("sort[%d]   =",i);/* 顯示每一次排序後的結果 */
        prn_arr(arr,5);
        printf("\n");
    }
}

/*  prn_arr 函數的宣告 作用：顯示所有一維陣列的元素
    傳入值：陣列位址 *arr與陣列元素個數 size */
void prn_arr(int * arr,int size)
{
    int i;

    for(i=0;i<size;i++)
        printf(" %d",arr[i]);
}
