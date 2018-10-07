/* 範例檔名:realloc.c ,更改動態陣列的大小 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int *ptr_i1,*ptr_i2;/* 宣告整數指標變數 */

    /* 分別配置 5*int 大小的記憶體給 ptr_i1 與 ptr_i2 */
    ptr_i1=calloc(5,sizeof(int));
    ptr_i2=calloc(5,sizeof(int));

    /* 如果 ptr_i1 或 ptr_i2 沒有配置到記憶體則結束程式 */
    if( (ptr_i1==NULL) || (ptr_i2==NULL) ){
        printf("function can't allocate memory!\n");
        system("PAUSE");
        abort();/* 強制結束程式 */
    }

    /* 顯示第一次配置時之記憶體起始位址 */
    printf("First calloc :\n");
    printf("Address of ptr_i1=%p\n",ptr_i1);
    printf("Address of ptr_i2=%p\n",ptr_i2);

    /* 以 realloc 函數，重新配置記憶體大小 */
    ptr_i1=realloc(ptr_i1,3*sizeof(int));
    ptr_i2=realloc(ptr_i2,1000*sizeof(int));

    /* 如果 ptr_i1 或 ptr_i2 沒有配置到記憶體則結束程式 */
    if( (ptr_i1==NULL) || (ptr_i2==NULL) ){
        printf("function can't allocate memory!\n");
        system("PAUSE");
        abort();/* 強制結束程式 */
    }

    /* 顯示經過 realloc 函數重新配置後記憶體之起始位址 */
    printf("\nAfter realloc :\n");
    printf("Address of ptr_i1=%p\n",ptr_i1);
    printf("Address of ptr_i2=%p\n",ptr_i2);

    free(ptr_i1);/* 釋放指標 ptr_i1 所指向之動態記憶體 */
    free(ptr_i2);/* 釋放指標 ptr_i2 所指向之動態記憶體 */

    system("PAUSE");
    return 0;
}
