/* �d���ɦW:fun_sum.c , �Q�Ψ�Ƨ@�Ʀr�[�`�p�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

/*  sum ��ƪ��ŧi �@�ΡG�[�`�ǤJ�Ȫ��d�򤺪�����`�M
    �ǤJ�ȡG�[�`�d�򪺤W��up_value�P�U��under_value
    �ǥX�ȡG�[�`�᪺�`�M */
int sum(int under_value,int up_value)
{
    int i,temp,total=0;

    /* �ˬd�W�ɬO�_�j��U�ɡA�Y�_�h�洫�� */
    if(up_value<under_value){
        temp=up_value;
        up_value=under_value;
        under_value=temp;
    }

    for(i=under_value;i<=up_value;i++)/* �[�`�p�� */
        total += i;

    return total;/* �^�ǭ� */
}

int main(void)/* �D�{���}�l */
{
    printf("the sum from 1 to 100 is %d\n",sum(1,100));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
