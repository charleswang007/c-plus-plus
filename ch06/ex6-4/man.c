/* �d���ɦW:man.c ,if...elseif...else�P�_�����ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    char input_char;/* �ŧi�@��Ū����J���r�� */

    printf("Are you a man?(y/n)");
    input_char=getchar();/* Ū����J���r�� */

    if(input_char =='y' || input_char =='Y')
        /* ��J���r���p�G�O y �� Y �h���榹�� */
        printf("You are a man!\n");

    else if(input_char =='n' || input_char =='N')
        /* ��J���r���p�G�O n �� N �h���榹�� */
        printf("You are a woman!\n");

    else/* �p�G���O y �� Y�A�]���O n �� N �h���榹�� */
        printf("Is this question hard?\n");

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
