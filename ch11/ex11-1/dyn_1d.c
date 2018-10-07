/* 範例檔名:dyn_1d.c ,動態一維陣列的配置 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int *ptr_i1,*ptr_i2;/* 宣告整數指標變數 */
    int n=0;/* 使用者輸入之陣列維度 */
    int i;

    do{
        printf("Please input the size of array:\n");
        scanf("%d",&n);
    }while(!(n > 0));

    /* 配置 n * int大小的記憶體給 ptr_i1 */
    ptr_i1=malloc(n*sizeof(int));

    /* 配置 n * int大小的記憶體給 ptr_i2 */
    ptr_i2=calloc(n,sizeof(int));

    /* 如果 ptr_i1 或 ptr_i2 沒有配置到記憶體則結束程式 */
    if( (ptr_i1==NULL) || (ptr_i2==NULL) ){
        printf("function can't allocate memory!\n");
        system("PAUSE");
        abort();/* 強制結束程式 */
    }

    /* 顯示以 malloc 函數配置陣列元素之未設定初值 */
    printf("\nusing malloc :ptr_i1\n");
    printf("element  | Address   | Initial Value  \n");
    for(i=0;i<n;++i){
        printf("ptr_i1[%d]| %p  | %d  \n",i,&ptr_i1[i],ptr_i1[i]);
    }

    /* 顯示以 calloc 函數配置陣列元素之未設定初值 */
    printf("\nusing calloc :ptr_i2\n");
    printf("element  | Address   | Initial Value  \n");
    for(i=0;i<n;++i){
        printf("ptr_i2[%d]| %p  | %d  \n",i,&ptr_i2[i],ptr_i2[i]);
    }

    free(ptr_i1);/* 釋放指標 ptr_i1 所指向之動態記憶體 */
    free(ptr_i2);/* 釋放指標 ptr_i2 所指向之動態記憶體 */

    printf("\nAfter free(ptr_i1);\n");
    printf("Address of ptr_i1=%p\n",ptr_i1);
    printf("After free(ptr_i2);\n");
    printf("Address of ptr_i2=%p\n",ptr_i2);

    system("PAUSE");
    return 0;
}
