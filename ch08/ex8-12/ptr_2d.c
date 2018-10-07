/* 範例檔名:ptr_2d.c ,利用指標索引存取二維陣列 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    /* 宣告陣列與指標變數 */
    int array[3][4]={{0,1,2,3},
                     {4,5,6,7},
                     {8,9,10,11}},*ptr,i,j;

    ptr=array[0];/* 將陣列指標傳給指標變數 */

    /* 顯示標頭 */
    printf("element               | &ptr[i]  | ptr[i]\n");
    printf("---------------------------------------\n");

    for(i=0;i<3;i++)/* 顯示位址與值 */
        for(j=0;j<4;j++)/* 顯示位址與值 */
            printf("array[%d][%d] , ptr[%2d] | %p | %d \n",
                     i,j,i*4+j,&ptr[i*4+j],ptr[i*4+j]);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
