/* �d���ɦW:call_add.c , �ǤJ�޼ƶǧ}�I�s���ܽd */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int arith(int *,int*,int);/* ��ƪ��쫬�ŧi */

int main(void)/* �D�{���}�l */
{
    int first_term=100,n_term=1,step=1; 
    
    /* ��ܦU�ܼƭ� */
    printf("before fuction call...\n");
    printf("first_term=%d\n",first_term);
    printf("n_term=%d\n",n_term);
    printf("step=%d\n",step);

    /* �H�ܼƦ�}�I�s��� */
    printf("\nthe sum from 1 to 100 step 1 is %d\n\n",
               arith(&first_term,&n_term,step));

    /* ��ܦU�ܼƭ� */
    printf("after fuction call...\n");
    printf("first_term=%d\n",first_term);
    printf("n_term=%d\n",n_term);
    printf("step=%d\n",step);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  arith ��ƪ��ŧi �@�ΡG�p�ⵥ�t�żƪ��żƩM
    �ǤJ�ȡG���t�żƪ�������}*up_value�B������}*under_value
            �P���tstep
    �ǥX�ȡG�[�`�᪺�`�M */
int arith(int *under_value,int *up_value,int step)
{
    int n,temp,total=0;

    /* �ˬd�����O�_�j�󭺶��A�Y�_�h�洫�� */
    if(*up_value < *under_value){
        temp=*up_value;
        *up_value=*under_value;
        *under_value=temp;
    }

    n=(*up_value-*under_value)/step+1;/* �p�ⶵ�� */

    total=(*up_value + *under_value)*n/2;/* �Q�Τ����p���`�M */

    return total;/* �^�ǭ� */
}

