/* �d���ɦW:ifelseif.c ,if...elseif...else�P�_�����ϥ� */
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

    /* �P�_��J���r���O�_���^��r�� */
    else if((input_char >='A' && input_char <='Z')
            ||(input_char >='a' && input_char <='z'))
        /* �p�G�O�Ʀr�h���榹�� */
        printf("You Input an English letter '%c'\n",input_char);

    else
        /* �p�G���O�Ʀr�]���O�^��r���h���榹�� */
        printf("'%c' is not a number or letter\n",input_char);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
