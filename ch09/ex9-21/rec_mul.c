/* �d���ɦW:rec_sum.c ,�ϥλ��j��ƭp�ⶥ�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int recursion_mul(int up_value);/* ���j�ۭ��A��ƭ쫬�ŧi */

int main(void)
{
    int i;

    /*��X�����p�⵲�G*/
    for(i=1;i<=10;++i)
        printf("%2d! =%d\n",i,recursion_mul(i));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  recursion_mul ��ƪ��ŧi �@�ΡG�p�ⶥ�����G
    �ǤJ�ȡG�������W��up_value
    �ǥX�ȡG������ */
int recursion_mul(int up_value)
{
    if(up_value>1)
        return (up_value * recursion_mul(up_value-1));
    else
        return 1;
}
