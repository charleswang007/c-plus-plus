/* �M��:ex13-10\sta_ext.dev */
/* �d���ɦW:ex13-10\main.c�A�~���R�A�ܼƥܽd���D�Ҳ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

#include "module.h"/* �ޤJ�Ҳժ����Y�� */

int main(void)/* �D�{���}�l */
{
    display_myint();/* �H���ݼҲդ������ܥ~���R�A�ܼƭ� */

    set_myint(300);/* �H���ݼҲդ���Ƴ]�w�~���R�A�ܼƭ� */

    display_myint();/* �H���ݼҲդ������ܥ~���R�A�ܼƭ� */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
