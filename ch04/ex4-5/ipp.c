/* �d���ɦW:ipp.c ,++i�Pi++���ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int i=0;/* �ŧi�ܼ�i�ó]�w��Ȭ�0 */

    /* ���ǥX�ȫ�A�A�[1 */
    printf("i=%d,",i);/* i �����=0 */
    printf("i++=%d,",i++);/* ���ǥX�ȫ�A�A�[1 */
    printf("after i=%d\n",i);/* �[1�᪺�� */

    i=0;/* ���]i���� */

    /* ���[1�A�ǥX�� */
    printf("i=%d,",i);/* i �����=0 */
    printf("++i=%d,",++i);/* ���[1�A�ǥX�� */
    printf("after i=%d\n",i);/* �[1�᪺�� */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
