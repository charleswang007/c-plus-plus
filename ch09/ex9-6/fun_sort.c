/* �d���ɦW:fun_sort.c , �H��w�k�ƧǶǤJ��ƪ��@���}�C */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

/* ��ƭ쫬�ŧi*/
void bubble_asc(int *,int);/* ���W�w�w�ƧǨ�� */
void prn_arr(int *,int);/* ��ܤ@���}�C���Ҧ����� */

int main(void)/* �D�{���}�l */
{
    int array[5]={3,5,2,4,3};

    printf("Origin arr=");/* ��ܱƧǫe���}�C */
    prn_arr(array,5);
    printf("\n\n");

    bubble_asc(array,5);/* �i��Ƨ� */

    printf("\nSorted arr=");/* ��ܱƧǫ᪺�}�C */
    prn_arr(array,5);
    printf("\n");

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  bubble_asc ��ƪ��ŧi �@�ΡG���W�ƧǤ@���}�C��������
    �ǤJ�ȡG�}�C��} *arr�P�}�C�����Ӽ� size */
void bubble_asc(int *arr,int size)
{
    int i,j,temp;

    for(i=1 ; i<=(size-1) ; i++)/* ����size-1���Ƨ� */
    {
        for(j=0 ; j<(size-i) ; j++)/* �C���ƧǱN1�ӭ��k�w�� */
        {
            if(arr[j]>arr[j+1])/* �Y�j��h�洫�� */
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            printf("sort[%d][%d]=",i,j);/*��ܨC�@���k�w�쪺����*/
            prn_arr(arr,5);
            printf("\n");
        }
        printf("sort[%d]   =",i);/* ��ܨC�@���Ƨǫ᪺���G */
        prn_arr(arr,5);
        printf("\n");
    }
}

/*  prn_arr ��ƪ��ŧi �@�ΡG��ܩҦ��@���}�C������
    �ǤJ�ȡG�}�C��} *arr�P�}�C�����Ӽ� size */
void prn_arr(int * arr,int size)
{
    int i;

    for(i=0;i<size;i++)
        printf(" %d",arr[i]);
}
