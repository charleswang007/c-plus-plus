/* �d���ɦW:op_log.c ,�줸�޿�B��l���ϥνd�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int A=283087,B=-302834;/* �ŧi����ܼ� */
    char str[33];/* �ŧi�s���ഫ��Ʀr���r�� */

    /* �H2�i��r�������ܼƭȻP�ϥΦ줸�޿�B��l�᪺���G */
    printf("A   = %32s\n",itoa(A,str,2));
    printf("B   = %32s\n",itoa(B,str,2));
    printf("--------------------------------------\n");
    printf("A&B = %32s\n",itoa(A&B,str,2));
    printf("A|B = %32s\n",itoa(A|B,str,2));
    printf("A^B = %32s\n",itoa(A^B,str,2));
    printf("~A  = %32s\n",itoa(~A,str,2));

    system("PAUSE");
    return 0;
}
