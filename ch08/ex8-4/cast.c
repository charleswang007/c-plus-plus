/* 範例檔名:cast.c ,強制轉換指標變數的型態 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int i=10;/* 宣告變數並設定初始值 */
    int * ptr_i=&i;
    double * ptr_d;

    ptr_d=(double *)ptr_i;/* 指派值 */

    /* 顯示變數值 */
    printf("ptr_i=%p\n",ptr_i);
    printf("*ptr_i=%d\n\n",*ptr_i);

    printf("ptr_d=%p\n",ptr_d);
    printf("*ptr_d=%g\n",*ptr_d);
    printf("*((int *)ptr_d)=%d\n\n",*((int *)ptr_d));

    printf("*ptr_i=%g\n",*ptr_i);/* 小心格式符號的使用 */
    printf("*ptr_d=%d\n",*ptr_d);
    printf("sizeof(*ptr_i)=%d\n",sizeof(*ptr_i));
    printf("sizeof(*ptr_d)=%d\n",sizeof(*ptr_d));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
