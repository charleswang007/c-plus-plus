/* �d���ɦW:escape2.c ,�ϥθ���r�� \ddd \xhh ���wASCII�X */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Hello!\n");/* ��ܰT�� */

    /* �ϥθ���r��\ddd�P8�i��Ʀr���w�ۦP����ܰT�� */
    printf("\110\145\154\154\157\041\012");

    /* �ϥθ���r��\xhh�P16�i��Ʀr���w�ۦP����ܰT�� */
    printf("\x48\x65\x6c\x6c\x6f\x21\x0a");

    system("PAUSE");
    return 0;
}
