/* 範例檔名:malloc.c ,動態記憶體的配置與使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int * ptr_i;/* 宣告整數變數i */
    double *ptr_d;

    ptr_i=(int *)malloc(sizeof(int));/* 配置int大小的記憶體給 i */

    /* 配置double大小的記憶體給 d */
    ptr_d=(double *)malloc(sizeof(double));

    /* 如果 ptr_i 或 ptr_d 沒有配置到記憶體則結束程式 */
    if( (ptr_i==NULL) || (ptr_d==NULL) ){
        printf("function malloc can't allocate memory!\n");
        system("PAUSE");
        return 0;/* 結束程式 */
    }

    *ptr_i=5;/*指定 i 值 */

    printf("name | Address   | Value  \n");/* 顯示 */
    printf("ptr_i| %p  | %d  \n",ptr_i,*ptr_i);
    /**ptr_d未指定值*/
    printf("ptr_d| %p  | %g  \n",ptr_d,*ptr_d);

    free(ptr_i);/* 釋放 ptr_i 所指向的空間 */
    ptr_i=NULL; /* 指定 ptr_i 為 NULL */
    free(ptr_d);/* 釋放 ptr_d 所指向的空間 */
    ptr_i=NULL; /* 指定 ptr_d 為 NULL */

    system("PAUSE");
    return 0;
}
