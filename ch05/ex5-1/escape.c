/* �d���ɦW:escape.c ,����r��\'�B\"�P\\���ϥ� */
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    printf("'Good day'\n");/* '�i�����b��ܦr�ꤤ���w */
    printf("\'Good day\'\n");/* \'�]�O�i�H�� */

    printf("\"Good day\"\n");/* "����� */

    printf("\\Good day\\\n");/* \����� */
    printf("\\Good\ day\\\n");/* ��@\�L�@�� */
    printf("\\Good \
day\\\n");    /* \�i�@������Ÿ� */

    system("PAUSE");
    return 0;
}
