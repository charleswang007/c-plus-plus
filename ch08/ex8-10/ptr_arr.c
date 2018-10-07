/* 範例檔名:ptr_arr.c ,利用指標存取一維陣列 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int array[4]={0,1,2,3},*ptr,i;/* 宣告陣列與指標變數 */

    ptr=array;/* 將陣列指標傳給指標變數 */

    printf("element  | array+i  | *(array+i)\n");/* 顯示標頭 */
    printf("-------------------------------\n");

    for(i=0;i<4;i++)    /* 顯示位址與值 */
        printf("array[%d] | %p | %d \n",i,array+i,*(array+i));

    printf("\narray:%p\n\n",array);

    printf("element  | ptr      | *ptr\n");/* 顯示標頭 */
    printf("-------------------------------\n");

    for(i=0;i<4;i++){/* 顯示位址與值 */
        printf("array[%d] | %p | %d \n",i,ptr,*ptr);
        ptr++;/* 遞增指標值 */
    }

    printf("\nptr:%p\n",ptr);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
