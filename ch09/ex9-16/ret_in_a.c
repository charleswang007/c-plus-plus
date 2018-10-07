/* 範例檔名:ret_in_a.c , 由函數傳入參數的位址傳出資料 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

/* 函數的原型宣告 */
/* 將大小為size1,size2的整數陣列arr1與
     大小為size2,size3的整數陣列arr2，
     相乘後的結果放到傳入陣列arr3，
     而傳出的指標為陣列arr3 */
int *arr_plus(int *arr1,int *arr2,int *arr3
              ,int size1,int size2,int size3);

/* 顯示大小為rol,col的二維陣列所有元素的值 */
void prn_arr(int * arr,int rol,int col);

int main(void)/* 主程式開始 */
{
    int arr1[3][2]={{1,2},{3,4},{5,6}},
        arr2[2][4]={{1,2,3,4},{5,6,7,8}},
        arr3[3][4];

    /* 計算陣列arr1與arr2的相乘於陣列arr3 */
    arr_plus(arr1[0],arr2[0],arr3[0],3,2,4);

    /* 顯示所有的陣列元素值 */
    prn_arr(arr3[0],3,4);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  arr_plus 函數的宣告 作用：計算傳入陣列arr1與arr2的陣列相乘
    傳入值：陣列 arr1,arr2,arr3、陣列的大小 size1,size2,size3
    傳出值：相乘後的陣列指標 */
int *arr_plus(int *arr1,int *arr2,int *arr3
              ,int size1,int size2,int size3)
{
    int i,j,k;

    /* 設定 arr3 陣列之初值為 0 */
    for(i=0;i<size1;i++)
        for(j=0;j<size3;j++)
            arr3[i*size3+j]=0;

    /* arr1 與 arr2 的陣列元素相乘並加總 */
    for(i=0;i<size1;i++)
        for(j=0;j<size3;j++)
            for(k=0;k<size2;k++)
                arr3[i*size3+j] +=
                             ( arr1[i*size2+k] * arr2[k*size3+j] );

    return arr3;/* 回傳陣列arr3的位址值 */
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
