/* �d���ɦW:rec_sum.c ,�ϥλ��j��ƥ[�` 1 �� 5 */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int recursion_sum(int up_value);/* ���j�ۥ[�A��ƭ쫬�ŧi */
int loop_sum(int up_value);/* �j��ۥ[�A��ƭ쫬�ŧi */

int main(void)
{
    /*��X�[�`�`�M*/
    printf("The sum from 1 to 5 is %d (recursion)\n"
              ,recursion_sum(5));/* �ϥλ��j */

    /* �ϥΰj�� */
    printf("The sum from 1 to 5 is %d (loop)\n",loop_sum(5));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  recursion_sum ��ƪ��ŧi �@�ΡG�[�` 1 ��ǤJ��ƪ��`�M
    �ǤJ�ȡG�[�`�d�򪺤W��up_value
    �ǥX�ȡG�ۥ[�� */
int recursion_sum(int up_value)
{
    if(up_value>1)
        return (up_value + recursion_sum(up_value-1));
    else
        return 1;
}

/*  loop_sum ��ƪ��ŧi �@�ΡG�[�` 1 ��ǤJ��ƪ��`�M
    �ǤJ�ȡG�[�`���d��up_value
    �ǥX�ȡG�[�`�᪺�`�M */
int loop_sum(int up_value)
{
    int i,sum;

    for(i=up_value,sum=0;i>=1;i--)
        sum += i;

    return sum;
}

