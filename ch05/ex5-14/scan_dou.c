/* �d���ɦW:scan_dou.c ,�B�I�Ƥ���J */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double d1,d2,d3;/* �ŧi�B�I���ܼ� */

    /* �ϥίB�I�ƿ�J�榡�Ÿ� */
    printf("Input 3 doubles using %%e %%f %%g:\n");
    scanf("%le %lf %lg",&d1,&d2,&d3);/* �H%e %f %g�榡��J�ܼ� */

    /* ��ܿ�J���Ʀr */
    printf("\nDisplay inputed numbers...\n");
    printf("%g,%g,%g\n",d1,d2,d3);

    system("PAUSE");
    return 0;
}
