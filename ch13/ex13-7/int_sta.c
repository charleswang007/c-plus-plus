/* �d���ɦW:int_sta.c�A�����R�A�ܼƪ��ܽd */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

void fun(void){
    /* �ŧi�����R�A�ܼơA��ȥu�]�w�@���A�b�{���sĶ�� */
    static int i=500;

    printf("i=%d\n",i);/* ��� i �� */
    i += 100; /* �]�w i �Ȧۥ[ 100 */
}

int main(void)
{
    /* �s����� fun ��ƤT�� */
    fun();
    fun();
    fun();

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
