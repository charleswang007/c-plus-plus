/* �d���ɦW:fun_arr2.c , �ǻ��G���}�C����� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

/* ��ܤj�p��rol,col���G���}�C�Ҧ��������� */
void prn_arr(int * arr,int rol,int col);/* ��ƭ쫬�ŧi */

int main(void)/* �D�{���}�l */
{
    int array[][3]={{1,2,3},{4,5,6}};

    prn_arr(array[0],2,3);/* ���array�Ҧ������� */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  prn_arr ��ƪ��ŧi �@�ΡG��ܤj�p��rol,col���G���}�C�Ҧ���������
    �ǤJ�ȡG�}�C��} *arr�P�}�C�j�p rol,col */
void prn_arr(int *arr,int rol,int col)
{
    int i,j;

    /* ��ܰ}�C������ */
    for(i=0 ; i<rol ; i++)
        for(j=0 ; j<col ; j++)
            printf("array[%d][%d]= %d\n",i,j,arr[i*col+j]);
}

