/* 範例檔名:ptr_ind.c ,利用指標索引存取一維陣列 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int array[4]={0,1,2,3},*ptr,i;/* 宣告陣列與指標變數 */

    ptr=array;/* 將陣列指標傳給指標變數 */

    printf("element         | &ptr[i]  | ptr[i]\n");/* 顯示標頭 */
    printf("-------------------------------\n");

    for(i=0;i<4;i++)/* 顯示位址與值 */
      printf("array[%d] ptr[%d] | %p | %d \n",i,i,&ptr[i],ptr[i]);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
