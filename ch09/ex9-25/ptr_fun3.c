/* 範例檔名:ptr_fun3.c , 使用函數指標在函數的傳入參數 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

/* 函數原型宣告*/
void bubble(int *,int,int (*)(int,int));/* 泡泡排序函數 */
void prn_arr(int *,int);/* 顯示一維陣列的所有元素 */

/* 比較值函數 */
int ascend(int a,int b){return a>b;}/* 遞增排列 */
int descend(int a,int b){return a<b;}/* 遞減排列 */

int main(void)/* 主程式開始 */
{
    int array[5]={3,5,2,4,6};

    printf("Origin arr    =");/* 顯示排序前的陣列 */
    prn_arr(array,5);
    printf("\n");

    bubble(array,5,ascend);/* 以遞增進行排序 */

    printf("ascending arr =");/* 顯示排序後的陣列 */
    prn_arr(array,5);
    printf("\n");

    bubble(array,5,descend);/* 以遞減進行排序 */

    printf("descending arr=");/* 顯示排序後的陣列 */
    prn_arr(array,5);
    printf("\n");

    bubble(array,5,ascend);/* 以遞增進行排序 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  bubble 函數的宣告 作用：排序一維陣列內的元素
    傳入值：陣列位址 *arr、陣列元素個數 size、
            比較的函數指標 compare */
void bubble(int *arr,int size,int (*compare)(int,int))
{
    int i,j,temp;

    for(i=1 ; i<=(size-1) ; i++)/* 執行size-1次排序 */
        for(j=0 ; j<(size-i) ; j++)/* 每次排序將1個值歸定位 */
            /* 依照傳入的函數指標函數判斷交換與否 */
            if(compare(arr[j],arr[j+1]))
            {
                temp=arr[j];/*交換arr[j]與arr[j+1]的值 */
                arr[j]=arr[j+1];
                arr[j+1]=temp;
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
