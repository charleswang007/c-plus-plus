/* �d���ɦW:scan_int.c ,��Ƥ���J */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int no1,no2,no3,no4,no5,no6,no7;/* �ŧi����ܼ� */
    unsigned u1;

    /* �ϥξ�ƿ�J�榡�Ÿ� */
    printf("Input 2 numbers using %%d :");
    scanf("%d %d",&no1,&no2);/* �H%d�榡��J2�Ӿ���ܼ� */

    printf("Input 3 numbers using %%i :");
    scanf("%i %i %i",&no3,&no4,&no5);/* �H%i�榡��J3�Ӿ���ܼ� */

    printf("Input 1 number using %%u :");
    scanf("%u",&u1);/* �H%u�榡��J1�Ӿ���ܼ� */

    printf("Input 1 number using %%o :");
    scanf("%o",&no6);/* �H%o�榡��J1�Ӿ���ܼ� */

    printf("Input 1 number using %%x :");
    scanf("%x",&no7);/* �H%x�榡��J1�Ӿ���ܼ� */

    /* ��ܿ�J���Ʀr */
    printf("\nDisplay inputed numbers...\n");
    printf("%%d=%d,%d\n",no1,no2);
    printf("%%i=%d,%d,%d\n",no3,no4,no5);
    printf("%%u=%d\n",u1);
    printf("%%o=%d\n",no6);
    printf("%%x=%d\n",no7);

    system("PAUSE");
    return 0;
}
