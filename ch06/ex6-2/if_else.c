/* �d���ɦW:if_else.c ,if...else...�P�_�����ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    char input_char;/* �ŧi�@��Ū����J���r�� */

    printf("Please input a character:");
    input_char=getchar();/* Ū����J���r�� */

    /* �P�_��J���r���O�_���Ʀr */
    if(input_char >='0' && input_char <='9')
        /* �p�G�O�Ʀr�h���榹�� */
        printf("You Input a number '%c'\n",input_char);
    else
        /* �p�G���O�Ʀr�h���榹�� */
        printf("This is not a number '%c'\n",input_char);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
