/* �d���ɦW:switch.c ,switch case���ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    char input_char;/* �ŧi�@��Ū����J���r�� */

    printf("Are you a man?(Y/N)");
    input_char=getchar();/* Ū����J���r�� */

    switch(input_char)
    {
    case 'Y':/* �P�_��J���O�_�� Y */
        printf("You are a man!\n");
        break;
    case 'N':/* �P�_��J���O�_�� N */
        printf("You are a woman!\n");
        break;
    default:/* �p�G���O Y �A�]���O N �h���榹�� */
        printf("Is this question hard?\n");
    }

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
