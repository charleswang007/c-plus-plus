/* �d���ɦW:scan_ch2.c ,�ץ��᪺�r������J */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch1,ch2;/* �ŧi�r���ܼ� */

    /* �ϥΦr����J�榡�Ÿ���J�G�Ӧr�� */
    printf("Input 2 characters:");
    scanf("%c %c",&ch1,&ch2);

    /* ��ܿ�J���r���P�۹�����ASCII�X */
    printf("\nDisplay inputed characters...\n");
    printf("ch1=%c,%d\n",ch1,ch1);
    printf("ch2=%c,%d\n",ch2,ch2);

    system("PAUSE");
    return 0;
}
