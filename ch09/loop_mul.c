/* �d���ɦW:loop_mul.c ,�ϥΰj���ƭp�ⶥ�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int loop_mul(int up_value);/* �����p��A��ƭ쫬�ŧi */

int main(void)
{
    int i;

    /*��X�����p�⵲�G*/
    for(i=1;i<=10;++i)
        printf("%2d! =%d\n",i,recursion_mul(i));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  loop_mul ��ƪ��ŧi �@�ΡG�p�ⶥ�����G
    �ǤJ�ȡG�������W��up_value
    �ǥX�ȡG������ */
int loop_mul(int up_value)
{
    int i,product=0;

    for(i=up_value;i>=1;--i)
    	product *= i;

        return product;
}
