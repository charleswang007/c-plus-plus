/* �d���ɦW:switch2.c ,switch case�h�ر���ȲŦX���ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    char input_char;/* �ŧi�@��Ū����J���r�� */

    printf("Are you a man?(y/n)");
    input_char=getchar();/* Ū����J���r�� */

    switch(input_char)
    {
    case 'y':/* �P�_��J���O�_�� y */
    case 'Y':/* �P�_��J���O�_�� Y */
        printf("You are a man!\n");
        break;
    case 'n':case 'N':/* �P�_��J���O�_�� n �� N */
        printf("You are a woman!\n");
        break;
    default:/* �p�G���O y �A�]���O n �h���榹�� */
        printf("Is this question hard?\n");
    }

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
