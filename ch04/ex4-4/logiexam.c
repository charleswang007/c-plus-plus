/* �d���ɦW:logiexam.c ,�޿�B�⦡���d�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int A=3,B=9;/* �ŧi�ܼƨó]�w��� */

    /* �i���޿�B��ÿ�X���G */
    /* �d�Ҥ@�A���G��0(��)*/
    printf("(!(A >= B)) && (A==B) is %d\n",(!(A >= B)) && (A==B));

    /* �d�ҤG�A���G��1(�u)*/
    printf("((A != B) || (A==B)) && (A < B) is %d\n",
            ((A != B) || (A==B)) && (A < B));

    /* �d�ҤT�A���G��0(��)*/
    printf("1 && 0 && 1 is %d\n",1 && 0 && 1);

    /* �d�ҥ|�A���G��1(�u)*/
    printf("1 || !1 || 1 is %d\n",1 || !1 || 1);

    /* �d�Ҥ��A���G��1(�u)*/
    printf("1 || 1 && 0 is %d\n",1 || 1 && 0);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
