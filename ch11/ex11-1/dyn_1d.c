/* �d���ɦW:dyn_1d.c ,�ʺA�@���}�C���t�m */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int *ptr_i1,*ptr_i2;/* �ŧi��ƫ����ܼ� */
    int n=0;/* �ϥΪ̿�J���}�C���� */
    int i;

    do{
        printf("Please input the size of array:\n");
        scanf("%d",&n);
    }while(!(n > 0));

    /* �t�m n * int�j�p���O���鵹 ptr_i1 */
    ptr_i1=malloc(n*sizeof(int));

    /* �t�m n * int�j�p���O���鵹 ptr_i2 */
    ptr_i2=calloc(n,sizeof(int));

    /* �p�G ptr_i1 �� ptr_i2 �S���t�m��O����h�����{�� */
    if( (ptr_i1==NULL) || (ptr_i2==NULL) ){
        printf("function can't allocate memory!\n");
        system("PAUSE");
        abort();/* �j����{�� */
    }

    /* ��ܥH malloc ��ưt�m�}�C���������]�w��� */
    printf("\nusing malloc :ptr_i1\n");
    printf("element  | Address   | Initial Value  \n");
    for(i=0;i<n;++i){
        printf("ptr_i1[%d]| %p  | %d  \n",i,&ptr_i1[i],ptr_i1[i]);
    }

    /* ��ܥH calloc ��ưt�m�}�C���������]�w��� */
    printf("\nusing calloc :ptr_i2\n");
    printf("element  | Address   | Initial Value  \n");
    for(i=0;i<n;++i){
        printf("ptr_i2[%d]| %p  | %d  \n",i,&ptr_i2[i],ptr_i2[i]);
    }

    free(ptr_i1);/* ������� ptr_i1 �ҫ��V���ʺA�O���� */
    free(ptr_i2);/* ������� ptr_i2 �ҫ��V���ʺA�O���� */

    printf("\nAfter free(ptr_i1);\n");
    printf("Address of ptr_i1=%p\n",ptr_i1);
    printf("After free(ptr_i2);\n");
    printf("Address of ptr_i2=%p\n",ptr_i2);

    system("PAUSE");
    return 0;
}
