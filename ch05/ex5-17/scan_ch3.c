/* �d���ɦW:scan_ch3.c ,�Ů��s���J�r���ɤ��@�� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i1,i2,i3,i4;
    char ch1,ch2,ch3,ch4;/* �ŧi�r���ܼ� */

    /* �|�ե�Ū����ƦAŪ���r�����{�� */
    printf("(1)Input 1 number and 1 character:");/* �Ĥ@�� */
    scanf("%d%c",&i1,&ch1); /* %c�e���[�Ů�A���s���J*/

    printf("\n(2)Input 1 number and 1 character:");/*�ĤG��*/
    scanf("%d %c",&i2,&ch2);/* %c�e�[�Ů�A�i���j��J*/

    printf("\n(3)Input 1 number :");/* �ĤT�� */
    scanf("%d",&i3);
    printf("Input 1 character:");
    scanf("%c",&ch3); /* %c �e���[�Ů�A�L�k��J�r�� */

    printf("\n\n(4)Input 1 number :");/* �ĥ|�� */
    scanf("%d",&i4);
    printf("Input 1 character:");
    scanf(" %c",&ch4);/* %c �e�[�Ů�A�i��JŪ�����r�� */

    /* ��ܿ�J���Ʀr */
    printf("\nDisplay inputed characters...\n");
    printf("i1=%d\n",i1);
    printf("ch1=%c,%d\n",ch1,ch1);

    printf("\ni2=%d\n",i2);
    printf("ch2=%c,%d\n",ch2,ch2);

    printf("\ni3=%d\n",i3);
    printf("ch3=%c,%d\n",ch3,ch3);

    printf("\ni4=%d\n",i4);
    printf("ch4=%c,%d\n",ch4,ch4);

    system("PAUSE");
    return 0;
}
