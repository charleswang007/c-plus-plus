/* 範例檔名:array_2d.c ,二維陣列的顯示 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    /* 二維整數陣列的宣告並設定初值 */
    int array[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},i,j;

    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            /* 顯示陣列中的元素 */
            printf("array[%d][%d]=%-2d ",i,j,array[i][j]);
        }
        printf("\n");
    }

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
