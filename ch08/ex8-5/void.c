/* 範例檔名:void.c ,不定型態指標的使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int i=10;/* 宣告變數並設定初始值 */
    double d=1e50;
    int * ptr_i=&i , * ptr_i1=NULL;
    double * ptr_d=&d , * ptr_d1=NULL;
    void * ptr_void;

    /* ------整數部份------- */
    /* 指派值 */
    ptr_void=ptr_i;
    ptr_i1=ptr_void;

    /* 顯示變數值 */
    printf("ptr_i=%p\n",ptr_i);
    printf("ptr_void=%p\n",ptr_void);
    printf("ptr_i1=%p\n\n",ptr_i1);

    printf("*ptr_i=%d\n",*ptr_i);
    printf("*((int *)ptr_void)=%d\n",*((int *)ptr_void));
    printf("*ptr_i1=%d\n\n",*ptr_i1);

    /* ------浮點數部份------- */
    /* 指派值 */
    ptr_void=ptr_d;
    ptr_d1=ptr_void;

    /* 顯示變數值 */
    printf("ptr_d=%p\n",ptr_d);
    printf("ptr_void=%p\n",ptr_void);
    printf("ptr_d1=%p\n\n",ptr_d1);

    printf("*ptr_d=%g\n",*ptr_d);
    printf("*((double *)ptr_void)=%g\n",
                        *((double *)ptr_void));
    printf("*ptr_d1=%g\n",*ptr_d1);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
