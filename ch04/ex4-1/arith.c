/* �d���ɦW:arith.c ,��N�B��l���ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    /* �d�Ҥ@ */
    printf("example 1:29%5*6/3=%d\n",29%5*6/3);

    /* �d�ҤG */
    printf("example 2:6-32%5+28/4*2=%d\n",6-32%5+28/4*2);

    /* �m�� */
    printf("Tests:\n");
    printf("5+6*9/3%4-2*3=%d\n",5+6*9/3%4-2*3);
    printf("35/5%4+3*2/5=%d\n",35/5%4+3*2/5);
    printf("35/5%4+3.0*2/5=%f\n",35/5%4+3.0*2/5);
    printf("10/4*2+5=%d\n",10/4*2+5);
    printf("10/4.0*2+5=%f\n",10/4.0*2+5);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
