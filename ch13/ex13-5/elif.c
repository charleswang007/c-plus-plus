/* �d���ɦW:elif.c�A���󦡽sĶ���O�P#define���Ľd�򪺥ܽd */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

#define A  /* �w�q A */
#define B  /* �w�q B */

void fun1(void){
/* �ˬd A �P B ���w�q���� */
    printf("\nIn fun1-------\n");
#if (defined A) && (defined B)
    printf("A and B are defined!\n");
#elif (defined A)
    printf("only A is defined!\n");
#elif (defined B)
    printf("only B is defined!\n");
#else
    printf("A and B are not defined!\n");
#endif
}

int main(void)
{
    void fun2(void);/* ��Ƥ��쫬�ŧi */
#undef A /* ���� A ���w�q */

/* �ˬd A �P B ���w�q���� */
    printf("In main-------\n");
#if (defined A) && (defined B)
    printf("A and B is defined!\n"));
#elif (defined A)
    printf("only A is defined!\n");
#elif (defined B)
    printf("only B is defined!\n");
#else
    printf("A and B is not defined!\n");
#endif

    fun1();/* �I�s fun1 ��� */
    fun2();/* �I�s fun2 ��� */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
#undef B /* ���� B ���w�q */
}

void fun2(void){
/* �ˬd A �P B ���w�q���� */
    printf("\nIn fun2-------\n");
#if (defined A) && (defined B)
    printf("A and B is defined!\n");
#elif (defined A)
    printf("only A is defined!\n");
#elif (defined B)
    printf("only B is defined!\n");
#else
    printf("A and B is not defined!\n");
#endif
}
