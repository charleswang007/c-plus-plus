/* �d���ɦW:fun_pho.c , ��ƪ��쫬�ŧi */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int sum(int,int);/* ��ƪ��쫬�ŧi */

int main(void)/* �D�{���}�l */
{
    /*int sum(int,int);  �쫬�ŧi�]�i�H��o�� */
    printf("the sum from 1 to 200 is %d\n",sum(1,200));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

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

