/* �d���ɦW:ptr_ptr.c ,���V���Ъ����Ф��ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int value=2;/* �ŧi����ܼơA�ó]�w��� */
    int *ptr_to_int=&value;/* �ŧi���V����ܼƪ����� */
    int **ptr_to_ptr=&ptr_to_int;/* �ŧi���V��ƫ����ܼƪ����� */

    /* ��ܼ��Y */
    printf("Name       | Address   | Value   |"
           "* of Value|** of Value\n");
    printf("----------------------------------"
           "-----------------------\n");

    /* ��ܦ�}�P�� */
    printf("ptr_to_ptr | %p | %p | %p | %d\n",
             &ptr_to_ptr,ptr_to_ptr,*ptr_to_ptr,**ptr_to_ptr);

    printf("ptr_to_int | %p | %p | %d\n",
             &ptr_to_int,ptr_to_int,*ptr_to_int);

    printf("value      | %p | %d \n",&value,value);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
