/* 範例檔名:ret_add.c , 函數回傳址的範例：二個陣列的相乘 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

/* 函數的原型宣告 */
/* 傳回大小為size1,size2的整數陣列arr1與
       大小為size2,size3的整數陣列arr2，相乘後的陣列 */
int *arr_plus(int *arr1,int *arr2,int size1,int size2,int size3);

/* 顯示大小為rol,col的二維陣列所有元素的值 */
void prn_arr(int * arr,int rol,int col);

int main(void)/* 主程式開始 */
{
    int arr1[3][2]={{1,2},{3,4},{5,6}},
        arr2[2][4]={{1,2,3,4},{5,6,7,8}},*ptr_arr;

    /* 傳回陣列arr1與arr2的相乘陣列 */
    ptr_arr=arr_plus(arr1[0],arr2[0],3,2,4);

    /* 顯示所有的陣列元素值 */
    prn_arr(ptr_arr,3,4);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  arr_plus 函數的宣告 作用：計算傳入陣列arr1與arr2的陣列相乘
    傳入值：陣列 arr1,arr2、陣列的大小 size1,size2,size3
    傳出值：相乘後的陣列指標 */
int *arr_plus(int *arr1,int *arr2,int size1,int size2,int size3)
{
    int i,j,k,*ptr_arr;

    /* 配置 size1*size3 大小的int記憶體給 ptr_arr */
    ptr_arr=(int *)malloc(sizeof(int)*size1*size3);

    /* 如果 ptr_arr 沒有配置到記憶體則結束程式 */
    if( (ptr_arr==NULL)){
        printf("function malloc can't allocate memory!\n");
        system("PAUSE");
        abort();/* 強制程式結束 */
    }

    /* 設定 ptr_arr 陣列之初值為 0 */
    for(i=0;i<size1;i++)
        for(j=0;j<size3;j++)
            ptr_arr[i*size3+j]=0;

    /* arr1 與 arr2 的陣列元素相乘並加總 */
    for(i=0;i<size1;i++)
        for(j=0;j<size3;j++)
            for(k=0;k<size2;k++)
                ptr_arr[i*size3+j] +=
                             ( arr1[i*size2+k] * arr2[k*size3+j] );

    return ptr_arr;/* 回傳陣列的位址值 */
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


