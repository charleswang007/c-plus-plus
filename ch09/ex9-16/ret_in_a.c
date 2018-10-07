/* �d���ɦW:ret_in_a.c , �Ѩ�ƶǤJ�Ѽƪ���}�ǥX��� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

/* ��ƪ��쫬�ŧi */
/* �N�j�p��size1,size2����ư}�Carr1�P
     �j�p��size2,size3����ư}�Carr2�A
     �ۭ��᪺���G���ǤJ�}�Carr3�A
     �ӶǥX�����Ь��}�Carr3 */
int *arr_plus(int *arr1,int *arr2,int *arr3
              ,int size1,int size2,int size3);

/* ��ܤj�p��rol,col���G���}�C�Ҧ��������� */
void prn_arr(int * arr,int rol,int col);

int main(void)/* �D�{���}�l */
{
    int arr1[3][2]={{1,2},{3,4},{5,6}},
        arr2[2][4]={{1,2,3,4},{5,6,7,8}},
        arr3[3][4];

    /* �p��}�Carr1�Parr2���ۭ���}�Carr3 */
    arr_plus(arr1[0],arr2[0],arr3[0],3,2,4);

    /* ��ܩҦ����}�C������ */
    prn_arr(arr3[0],3,4);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  arr_plus ��ƪ��ŧi �@�ΡG�p��ǤJ�}�Carr1�Parr2���}�C�ۭ�
    �ǤJ�ȡG�}�C arr1,arr2,arr3�B�}�C���j�p size1,size2,size3
    �ǥX�ȡG�ۭ��᪺�}�C���� */
int *arr_plus(int *arr1,int *arr2,int *arr3
              ,int size1,int size2,int size3)
{
    int i,j,k;

    /* �]�w arr3 �}�C����Ȭ� 0 */
    for(i=0;i<size1;i++)
        for(j=0;j<size3;j++)
            arr3[i*size3+j]=0;

    /* arr1 �P arr2 ���}�C�����ۭ��å[�` */
    for(i=0;i<size1;i++)
        for(j=0;j<size3;j++)
            for(k=0;k<size2;k++)
                arr3[i*size3+j] +=
                             ( arr1[i*size2+k] * arr2[k*size3+j] );

    return arr3;/* �^�ǰ}�Carr3����}�� */
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
