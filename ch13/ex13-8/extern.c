/* �d���ɦW:extern.c�A�D�{�����ޥΥ~���ܼơ]�s���ܼơ^ */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    /* �Q��extern�ŧi�w�����s���ܼ� */
    extern int global;

    printf("global=%d\n",global);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

int global=3;/* �ŧi�s���ܼ� global */

