/* �M��:ex13-9\extern.dev */
/* �d���ɦW:ex13-9\main.c�A�~���ܼƥܽd���D�Ҳ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

#include "module.h"/* �ޤJ�Ҳժ����Y�� */

int main(void)/* �D�{���}�l */
{
    printf("my_int=%d\n",my_int);/* ��ܥ~���ܼƪ�� */

    my_int=300;/* ���~���ܼƭ� */

    display_myint();/* �H�����ܥ~���ܼƭ� */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
