/* �d���ɦW:mod_wid.c ,printf��Ƥ��e��width�׹��l���ϥ� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    printf("%3d\n",3);   /* ���w�Ƥj����ܦ�� */
    printf("%3d\n",300);   /* ���w�Ƶ�����ܦ�� */
    printf("%3d\n\n",30000); /* ���w�Ƥp����ܦ�ơA�L�� */

    /* �Q��*�ѫ᭱���ѼƧ@�����w�Ʀr */
    printf("%*d\n%*d\n%*d\n",3,3,3,3000,3,30000);

    system("PAUSE");
    return 0;
}
