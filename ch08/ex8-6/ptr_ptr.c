/* 範例檔名:ptr_ptr.c ,指向指標的指標之使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int value=2;/* 宣告整數變數，並設定初值 */
    int *ptr_to_int=&value;/* 宣告指向整數變數的指標 */
    int **ptr_to_ptr=&ptr_to_int;/* 宣告指向整數指標變數的指標 */

    /* 顯示標頭 */
    printf("Name       | Address   | Value   |"
           "* of Value|** of Value\n");
    printf("----------------------------------"
           "-----------------------\n");

    /* 顯示位址與值 */
    printf("ptr_to_ptr | %p | %p | %p | %d\n",
             &ptr_to_ptr,ptr_to_ptr,*ptr_to_ptr,**ptr_to_ptr);

    printf("ptr_to_int | %p | %p | %d\n",
             &ptr_to_int,ptr_to_int,*ptr_to_int);

    printf("value      | %p | %d \n",&value,value);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
