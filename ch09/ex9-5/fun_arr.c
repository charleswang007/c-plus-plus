/* �d���ɦW:fun_arr.c , �ǻ��}�C����� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

/* ��ƭ쫬�ŧi�A�]�i�g�� int array_sum(int [],int);*/
int array_sum(int *,int);

int main(void)/* �D�{���}�l */
{
    int array[3]={1,2,3};

    printf("the sum of array element is %d\n",
                       array_sum(array,3));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  array_sum ��ƪ��ŧi �@�ΡG�[�`�ǤJ�}�C����������
    �ǤJ�ȡG�}�C��} *ptr_to_array�P�}�C�����Ӽ� size
    �ǥX�ȡG�[�`�᪺�`�M */
int array_sum(int *ptr_to_array,int size)
{
    int i,sum=0;

    for(i=0 ; i<size ; i++)/* �[�`�p�� */
        sum += ptr_to_array[i];

    return sum;/* �^�ǭ� */
}

