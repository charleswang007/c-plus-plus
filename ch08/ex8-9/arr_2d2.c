/* 範例檔名:arr_2d2.c ,二維陣列索引與指標的對應 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    /* 二維整數陣列的宣告並設定初值 */
    int array[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},i,j;

    /* 陣列指標值的顯示 */
    printf("array address:\n");
    for(i=0;i<=2;i++){
        /* 以索引型式顯示陣列指標的位址 */
        printf("array[%d]=%p   ",i,array[i]);
        /* 以指標型式顯示陣列指標的位址 */
        printf("*(array+%d)=%2p \n\n",i,*(array+i));

        for(j=0;j<=3;j++){
            /* 以索引型式顯示陣列元素的位址 */
            printf("&array[%d][%d]=%p   ",i,j,&array[i][j]);
            /* 以指標型式顯示陣列元素的位址 */
            printf("*(array+%d)+%d=%p \n",i,j,*(array+i)+j);
        }
        printf("\n");
    }

    /* 陣列指標值的顯示 */
    printf("\narray value:\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            /* 以索引型式顯示陣列元素的位址 */
            printf("array[%d][%d]=%-2d   ",i,j,array[i][j]);
            /* 以指標型式顯示陣列元素的位址 */
            printf("*(*(array+%d)+%d)=%-2d \n",i,j,
                                           *(*(array+i)+j));
        }
        printf("\n");
    }

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
