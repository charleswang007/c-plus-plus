/* �d���ɦW:address.c ,�ϥ�&���}�B��l���o�ܼ��x�s����} */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int address=2;/* �ŧi�ܼƨó]�w��l�� */

    /* ����ܼ��x�s���O�����} */
    printf("The address of variable locates in %p \n",&address);

    /* ����ܼƪ��x�s�� */
    printf("The value of variable in %d \n",address);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
