/* �d���ɦW:mac_arg.c , �b������Ƥ��ϥΤ��P��ƫ��A���Ѽ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

/* �D�T���έ��n */
#define TRIANGLE(base,height) ((base)*(height)/2)

int main(void)
{
    /* �p��T���έ��n */
    printf("TRIANGLE(5,3)=%d\n",TRIANGLE(5,3));/* �ѼƬ�int */

    /* ��ܦ������줸�ռ� */
    printf("sizeof(TRIANGLE(5,3))=%d\n\n"
                   ,sizeof(TRIANGLE(5,3)));

     /* �ѼƬ� double */
    printf("TRIANGLE(5.0,3.0)=%f\n",TRIANGLE(5.0,3.0));

    /* ��ܦ������줸�ռ� */
    printf("sizeof(TRIANGLE(5.0,3.0))=%d\n"
                   ,sizeof(TRIANGLE(5.0,3.0)));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
