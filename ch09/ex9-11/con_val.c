/* �d���ɦW:cons_val.c , �ϥ�const����ǭȰѼƤ���� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

void print_i(const int);/* ��ƪ��쫬�ŧi */

int main(void)/* �D�{���}�l */
{
    print_i(3);/* ��ܾ�� 3 */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  print_i ��ƪ��ŧi �@�ΡG��ܶǤJ����ƭ�
    �ǤJ�ȡG��ܪ���� i */
void print_i(const int i)
{
    /* ���ǤJ��ƭ� */
    i=5;

    printf("i=%d\n",i);
}

