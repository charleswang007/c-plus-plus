/* �d���ɦW:password.c ,�K�X����J */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    char pass[4],i;    /* �ŧi�r���}�Cpass[4] */

    do{/* ��J���T���K�X�~�i���X�j�� */

        printf("Input password :");
        for(i=0;i<=3;i++){
            pass[i]=getch();/* Ū����L��J���K�X�� */
            printf("*");
        }

        /* ���K�X�A��K�X�����T����ܿ��~�T�� */
        if( !((pass[0]=='1') && (pass[1]=='2')
              && (pass[2]=='3') && (pass[3]=='4')) )
            printf("  Wrong password");

        printf("\n");

    /* ���K�X�A�K�X���T�P�_����0(��)�~�i���X�j�� */
    }while( !((pass[0]=='1') && (pass[1]=='2')
              && (pass[2]=='3') && (pass[3]=='4')) );

    /* ��ܱK�X���T�T�� */
    printf("You input the right password !\n");

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
