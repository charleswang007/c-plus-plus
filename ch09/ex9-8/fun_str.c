/* �d���ɦW:fun_str.c , �ǻ��r�굹��� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int str_upper(char *);/* ��ƭ쫬�ŧi */

int main(void)/* �D�{���}�l */
{
    char str[]="Hello";

    printf("Before replacing:%s\n",str);/* ��X��r�� */

    printf("%d chars are replaced.\n",str_upper(str));/* �ഫ */

    printf("After replacing:%s\n",str);/* ��X�ഫ��r�� */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  str_upper ��ƪ��ŧi �@�ΡG�N�ǤJ���r���ഫ���j�g�r��
    �ǤJ�ȡG�r���}�C��} *ptr_to_str
    �ǥX�ȡG�ഫ���j�g�r�����Ӽ� */
int str_upper(char *ptr_to_str)
{
    int replace_num=0;/* �p��Q�m�����r���ƥ� */

    while(*ptr_to_str != '\0'){/* �P�O�O�_���r�굲�� */

        /* �P�O�O�_���p�g�r�� */
        if( (*ptr_to_str >= 'a') && (*ptr_to_str <='z')){
            *ptr_to_str -= 32;/* �N�p�g�m�����j�g */
            replace_num++;/* �Q�m���r�ƥ[ 1 */
        }
        ptr_to_str++;/* �N���ЦV�Ჾ�� */
    }

    return replace_num;/* �^�ǭ� */
}

