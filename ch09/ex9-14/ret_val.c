/* 範例檔名:ret_val.c , 函數傳回值的範例：計算方陣的行列式值 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

/* 計算大小為size的方陣arr之行列式值 */
int det_val(int *arr,int size);/* 函數的原型宣告 */

/* 取得大小為size的方陣arr，指定col,rol陣列元素值*/
int arr_ele(int *arr,int size,int col,int rol);/* 函數原型宣告 */

int main(void)/* 主程式開始 */
{
    int arr[3][3]={{1,1,2},
                   {3,4,5},
                   {6,7,8}};

    /* 顯示陣列的行列式值 */
    printf("determinant of arr = %d\n",det_val(arr[0],3));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}

/*  det_val 函數的宣告 作用：計算傳入方陣的行列式
    傳入值：陣列 arr、方陣的大小 size
    傳出值：方陣的行列式 */
int det_val(int *arr,int size)
{
    int i,j,det=0,temp;

    /* 計算行列式值 */
    for(i=0;i<size;++i){/* 計算每一行的相乘值 */
        temp=1;
        for(j=0;j<size;++j){/* 計算元素右下直線相乘 */
            temp *= arr_ele(arr,3,i+j,j);
        }

        det+=temp;/* 將右下直線相乘值加到行列式值中 */

        temp=1;
        for(j=0;j<size;++j){/* 計算元素右上直線相乘 */
            temp *= arr_ele(arr,3,i-j,j);
        }

        det-=temp;/* 將右上直線相乘值從行列式值中扣除 */
    }

    return det;/* 回傳行列式值 */
}
/*  arr_ele 函數的宣告 作用：取得方陣指定行列元素的值
    傳入值：陣列 arr、方陣的大小 size，
            指定的行列col,rol(可不在0~size-1的範圍，自動修正)
    傳出值：指定的陣列元素值 */
int arr_ele(int *arr,int size,int col,int rol)
{
    /* 當col與rol不在 0~(size-1)，程式自動把它修正到範圍中 */
    while(col<0) col+=size;/* col <0 */
    while(rol<0) rol+=size;/* rol <0 */

    if(col>=size)/* col > size-1 */
        col %= size;
    if(rol>=size)/* rol > size-1 */
        rol %= size;

    return arr[col*size+rol];/* 回傳陣列元素值 */
}



