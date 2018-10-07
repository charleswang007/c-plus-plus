/* 範例檔名:assign.c ,指標變數初始值的設定 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int temp=2;/* 宣告整數變數，並設定初值 */
    int *ptr=&temp;/* 宣告變數指標，並設初值為指向 temp */

    /* 顯示 temp 的位址與值 */
    printf("The address of temp: %p \n",&temp);
    printf("The value of temp: %d \n\n",temp);

    /* 顯示 ptr 的位址、值與其值的位址所指向的值 */
    printf("The address of ptr : %p \n",&ptr);
    printf("The value of ptr : %p \n",ptr);
    printf("The value of ptr's value address : %d \n\n",*ptr);

    *ptr=3;/* 更改 ptr 指向位址整數的值，同temp=3 */

    /* 顯示 temp 與 ptr 的位址與值 */
    printf("After *ptr=3\n");
    printf("The value of temp: %d \n",temp);
    printf("The value of ptr's value addfress : %d \n",*ptr);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
