/* 範例檔名:arr_add.c ,二維陣列的相加 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    /* 二個二維整數陣列的宣告並設定初值 */
    int a[3][3]={{5,4,2},{7,8,3},{7,8,3}},
        b[3][3]={{2,3,5},{1,2,3},{8,9,3}},i,j;

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            /* 陣列元素相加並顯示 */
            printf("added[%d][%d]=%-2d ",i,j,a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
