/* �d���ɦW:ret_add.c , ��Ʀ^�ǧ}���d�ҡG�G�Ӱ}�C���ۭ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

/* ��ƪ��쫬�ŧi */
/* �Ǧ^�j�p��size1,size2����ư}�Carr1�P
       �j�p��size2,size3����ư}�Carr2�A�ۭ��᪺�}�C */
int *arr_plus(int *arr1,int *arr2,int size1,int size2,int size3);

/* ��ܤj�p��rol,col���G���}�C�Ҧ��������� */
void prn_arr(int * arr,int rol,int col);

int main(void)/* �D�{���}�l */
{
    int arr1[3][2]={{1,2},{3,4},{5,6}},
        arr2[2][4]={{1,2,3,4},{5,6,7,8}},*ptr_arr;

    /* �Ǧ^�}�Carr1�Parr2���ۭ��}�C */
    ptr_arr=arr_plus(arr1[0],arr2[0],3,2,4);

    /* ��ܩҦ����}�C������ */
    prn_arr(ptr_arr,3,4);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  arr_plus ��ƪ��ŧi �@�ΡG�p��ǤJ�}�Carr1�Parr2���}�C�ۭ�
    �ǤJ�ȡG�}�C arr1,arr2�B�}�C���j�p size1,size2,size3
    �ǥX�ȡG�ۭ��᪺�}�C���� */
int *arr_plus(int *arr1,int *arr2,int size1,int size2,int size3)
{
    int i,j,k,*ptr_arr;

    /* �t�m size1*size3 �j�p��int�O���鵹 ptr_arr */
    ptr_arr=(int *)malloc(sizeof(int)*size1*size3);

    /* �p�G ptr_arr �S���t�m��O����h�����{�� */
    if( (ptr_arr==NULL)){
        printf("function malloc can't allocate memory!\n");
        system("PAUSE");
        abort();/* �j��{������ */
    }

    /* �]�w ptr_arr �}�C����Ȭ� 0 */
    for(i=0;i<size1;i++)
        for(j=0;j<size3;j++)
            ptr_arr[i*size3+j]=0;

    /* arr1 �P arr2 ���}�C�����ۭ��å[�` */
    for(i=0;i<size1;i++)
        for(j=0;j<size3;j++)
            for(k=0;k<size2;k++)
                ptr_arr[i*size3+j] +=
                             ( arr1[i*size2+k] * arr2[k*size3+j] );

    return ptr_arr;/* �^�ǰ}�C����}�� */
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


