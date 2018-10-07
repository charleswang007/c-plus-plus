/* �d���ɦW:macro.c ,�ϥ�define�@��������ƥ\�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

#define F(X) 6*X+5  /* �w�q F ��ơA�����[�A�� */
#define FA(X) (6*X+5) /* �w�q FA ��ơA�u�[�̥~�h�A�� */
#define FAA(X) (6*(X)+5) /* �w�q FAA ��ơA�[�ܼƻP�̥~�h�A�� */

int main(void)
{
    /* �p�� f(a) */
    printf("F(5)=%d\n",F(5)); /* 6*5+5=35 */
    printf("FA(5)=%d\n",FA(5)); /* (6*5+5)=35 */
    printf("FAA(5)=%d\n\n",FAA(5));/* (6*(5)+5)=35 */

    /* �p�� f(a+b) */
    printf("F(5+2)=%d\n",F(5+2)); /* 6*5+2+5=37 */
    printf("FA(5+2)=%d\n",FA(5+2)); /* (6*5+2+5)=37 */
    printf("FAA(5+2)=%d\n\n",FAA(5+2)); /* (6*(5+2)+5)=47 */

    /* �p�� f(f(a)) */
    printf("F(F(2))=%d\n",F(F(2))); /* 6*6*2+5+5=82 */
    printf("FA(FA(2))=%d\n",FA(FA(2))); /* 6*(6*2+5)+5=107 */
    /* 6*(6*(2)+5)+5=107 */
    printf("FAA(FAA(2))=%d\n\n",FAA(FAA(2)));

    /* �p�� f(f(a+b)) */
    printf("F(F(5+2))=%d\n",F(F(5+2))); /* 6*6*5+2+5+5=192 */
    /* 6*(6*5+2+5)+5=227 */
    printf("FA(FA(5+2))=%d\n",FA(FA(5+2)));
    /* 6*(6*(5+2)+5)+5=287 */
    printf("FAA(FAA(5+2))=%d\n",FAA(FAA(5+2)));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
