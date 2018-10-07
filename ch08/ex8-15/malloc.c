/* �d���ɦW:malloc.c ,�ʺA�O���骺�t�m�P�ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int * ptr_i;/* �ŧi����ܼ�i */
    double *ptr_d;

    ptr_i=(int *)malloc(sizeof(int));/* �t�mint�j�p���O���鵹 i */

    /* �t�mdouble�j�p���O���鵹 d */
    ptr_d=(double *)malloc(sizeof(double));

    /* �p�G ptr_i �� ptr_d �S���t�m��O����h�����{�� */
    if( (ptr_i==NULL) || (ptr_d==NULL) ){
        printf("function malloc can't allocate memory!\n");
        system("PAUSE");
        return 0;/* �����{�� */
    }

    *ptr_i=5;/*���w i �� */

    printf("name | Address   | Value  \n");/* ��� */
    printf("ptr_i| %p  | %d  \n",ptr_i,*ptr_i);
    /**ptr_d�����w��*/
    printf("ptr_d| %p  | %g  \n",ptr_d,*ptr_d);

    free(ptr_i);/* ���� ptr_i �ҫ��V���Ŷ� */
    ptr_i=NULL; /* ���w ptr_i �� NULL */
    free(ptr_d);/* ���� ptr_d �ҫ��V���Ŷ� */
    ptr_i=NULL; /* ���w ptr_d �� NULL */

    system("PAUSE");
    return 0;
}
