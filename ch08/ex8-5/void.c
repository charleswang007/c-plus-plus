/* �d���ɦW:void.c ,���w���A���Ъ��ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int i=10;/* �ŧi�ܼƨó]�w��l�� */
    double d=1e50;
    int * ptr_i=&i , * ptr_i1=NULL;
    double * ptr_d=&d , * ptr_d1=NULL;
    void * ptr_void;

    /* ------��Ƴ���------- */
    /* ������ */
    ptr_void=ptr_i;
    ptr_i1=ptr_void;

    /* ����ܼƭ� */
    printf("ptr_i=%p\n",ptr_i);
    printf("ptr_void=%p\n",ptr_void);
    printf("ptr_i1=%p\n\n",ptr_i1);

    printf("*ptr_i=%d\n",*ptr_i);
    printf("*((int *)ptr_void)=%d\n",*((int *)ptr_void));
    printf("*ptr_i1=%d\n\n",*ptr_i1);

    /* ------�B�I�Ƴ���------- */
    /* ������ */
    ptr_void=ptr_d;
    ptr_d1=ptr_void;

    /* ����ܼƭ� */
    printf("ptr_d=%p\n",ptr_d);
    printf("ptr_void=%p\n",ptr_void);
    printf("ptr_d1=%p\n\n",ptr_d1);

    printf("*ptr_d=%g\n",*ptr_d);
    printf("*((double *)ptr_void)=%g\n",
                        *((double *)ptr_void));
    printf("*ptr_d1=%g\n",*ptr_d1);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
