/* �d���ɦW:if.c ,if�P�_�����ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    char input_char;/* �ŧi�@��Ū����J���r�� */

    printf("Please input a character:");
    input_char=getchar();/* Ū����J���r�� */

    /* �P�_��J���r���O�_���Ʀr */
    if(input_char >='0' && input_char <='9')
        printf("You Input a number '%c'\n",input_char);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
