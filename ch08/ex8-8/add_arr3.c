/* 範例檔名:add_arr3.c , 以指標方式輸出陣列元素 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int array[4]={0,1,2,3},i;/* 宣告陣列並設定初始值 */

    printf("element  | address  | value\n");/* 顯示標頭 */
    printf("---------------------------\n");

    for(i=0;i<4;i++)  /* 顯示陣列元素的記憶體位址與值 */
        printf("array[%d] | %p | %d\n",i,&array[i],array[i]);

    /* 以指標型式顯示陣列元素 */
    printf("\nelement  | array+i  | *(array+i)\n");/* 顯示標頭 */
    printf("---------------------------\n");

    for(i=0;i<4;i++)  /* 以指標型式顯示陣列元素 */
        printf("array+%d  | %p | %d\n",i,array+i,*(array+i));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
