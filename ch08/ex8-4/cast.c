/* �d���ɦW:cast.c ,�j���ഫ�����ܼƪ����A */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int i=10;/* �ŧi�ܼƨó]�w��l�� */
    int * ptr_i=&i;
    double * ptr_d;

    ptr_d=(double *)ptr_i;/* ������ */

    /* ����ܼƭ� */
    printf("ptr_i=%p\n",ptr_i);
    printf("*ptr_i=%d\n\n",*ptr_i);

    printf("ptr_d=%p\n",ptr_d);
    printf("*ptr_d=%g\n",*ptr_d);
    printf("*((int *)ptr_d)=%d\n\n",*((int *)ptr_d));

    printf("*ptr_i=%g\n",*ptr_i);/* �p�߮榡�Ÿ����ϥ� */
    printf("*ptr_d=%d\n",*ptr_d);
    printf("sizeof(*ptr_i)=%d\n",sizeof(*ptr_i));
    printf("sizeof(*ptr_d)=%d\n",sizeof(*ptr_d));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
