/* �d���ɦW:mod_prec.c ,��ǫ�precisions�׹��l���ϥ� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double d=12345.67890123;
    char s[]="1234567890";

    printf("integers\n"); /* ��ǫ׬��̤���ܼƦr����� */
    printf("%.3d\n",3);   /* ���w��ǫפj���ڦ�ơA��0 */
    printf("%.3d\n",300); /* ���w��ǫ׵�����ܦ�� */
    printf("%.3d\n\n",30000); /* ���w��ǫפp����ܦ�ơA�L�@�� */

    /* �Q��*�ѫ᭱���ѼƧ@�����w�Ʀr */
    printf("%.*d\n%.*d\n%.*d\n\n",3,3,3,3000,3,30000);

    printf("double %%f\n"); /* ���w��ܤp���I���� */
    printf("%.3f\n",d);
    printf("%f\n",d);   /* �w�]�� .6 */
    printf("%.12f\n\n",d);

    printf("double %%e\n"); /* ���w��ܤp���I���� */
    printf("%.3e\n",d);
    printf("%e\n",d);   /* �w�]�� .6 */
    printf("%.12e\n\n",d);

    printf("double %%g\n"); /* ���w��ܦ��Ħ�Ƥ���� */
    printf("%.3g\n",d);
    printf("%g\n",d);   /* �w�]�� .6 */
    printf("%.12g\n\n",d);

    printf("string %%s\n"); /* ���w��ܦr�ꤧ�r���� */
    printf("%.3s\n",s);
    printf("%.6s\n",s);
    printf("%.12s\n",s);

    system("PAUSE");
    return 0;
}
