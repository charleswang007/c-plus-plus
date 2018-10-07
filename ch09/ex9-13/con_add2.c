/* 範例檔名:con_add2.c , 使用const限制傳址參數指標之更改 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

void print_arr(int * const,int);/* 函數的原型宣告 */

int main(void)/* 主程式開始 */
{
    int arr[]={1,2,3};

    print_arr(arr,3);/* 顯示整數 3 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  print_arr 函數的宣告 作用：顯示傳入的陣列元素值
    傳入值：顯示的整數 i */
void print_arr(int * const arr,int size)
{
    int i;

    /* 更改傳入之陣列元素值 */
    arr[0]=5;

    /* 顯示陣列元素值 */
    for(i=0;i<size;++i,++arr)/* arr 不應該被更改 */
        printf("arr[%d]=%d\n",i,*arr);
}

