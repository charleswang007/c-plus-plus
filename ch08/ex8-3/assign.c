/* �d���ɦW:assign.c ,�����ܼƪ�l�Ȫ��]�w */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int temp=2;/* �ŧi����ܼơA�ó]�w��� */
    int *ptr=&temp;/* �ŧi�ܼƫ��СA�ó]��Ȭ����V temp */

    /* ��� temp ����}�P�� */
    printf("The address of temp: %p \n",&temp);
    printf("The value of temp: %d \n\n",temp);

    /* ��� ptr ����}�B�ȻP��Ȫ���}�ҫ��V���� */
    printf("The address of ptr : %p \n",&ptr);
    printf("The value of ptr : %p \n",ptr);
    printf("The value of ptr's value address : %d \n\n",*ptr);

    *ptr=3;/* ��� ptr ���V��}��ƪ��ȡA�Ptemp=3 */

    /* ��� temp �P ptr ����}�P�� */
    printf("After *ptr=3\n");
    printf("The value of temp: %d \n",temp);
    printf("The value of ptr's value addfress : %d \n",*ptr);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
