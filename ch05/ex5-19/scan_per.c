/* �d���ɦW:scan_per.c ,���w�ʤ��� % ����J */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float f;/* �ŧi�B�I���ܼ� */

    /* ��J�����ʤ��� */
    printf("Input completed ratio (ex:30.5%%):");
    scanf("%f%%",&f);

    /* ��ܧ����ʤ��� */
    printf("\nThe job is %g%% done\n",f);

    system("PAUSE");
    return 0;
}
