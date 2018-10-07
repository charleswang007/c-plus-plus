/* �d���ɦW:ptr_fun3.c , �ϥΨ�ƫ��Цb��ƪ��ǤJ�Ѽ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

/* ��ƭ쫬�ŧi*/
void bubble(int *,int,int (*)(int,int));/* �w�w�ƧǨ�� */
void prn_arr(int *,int);/* ��ܤ@���}�C���Ҧ����� */

/* ����Ȩ�� */
int ascend(int a,int b){return a>b;}/* ���W�ƦC */
int descend(int a,int b){return a<b;}/* ����ƦC */

int main(void)/* �D�{���}�l */
{
    int array[5]={3,5,2,4,6};

    printf("Origin arr    =");/* ��ܱƧǫe���}�C */
    prn_arr(array,5);
    printf("\n");

    bubble(array,5,ascend);/* �H���W�i��Ƨ� */

    printf("ascending arr =");/* ��ܱƧǫ᪺�}�C */
    prn_arr(array,5);
    printf("\n");

    bubble(array,5,descend);/* �H����i��Ƨ� */

    printf("descending arr=");/* ��ܱƧǫ᪺�}�C */
    prn_arr(array,5);
    printf("\n");

    bubble(array,5,ascend);/* �H���W�i��Ƨ� */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  bubble ��ƪ��ŧi �@�ΡG�ƧǤ@���}�C��������
    �ǤJ�ȡG�}�C��} *arr�B�}�C�����Ӽ� size�B
            �������ƫ��� compare */
void bubble(int *arr,int size,int (*compare)(int,int))
{
    int i,j,temp;

    for(i=1 ; i<=(size-1) ; i++)/* ����size-1���Ƨ� */
        for(j=0 ; j<(size-i) ; j++)/* �C���ƧǱN1�ӭ��k�w�� */
            /* �̷ӶǤJ����ƫ��Ш�ƧP�_�洫�P�_ */
            if(compare(arr[j],arr[j+1]))
            {
                temp=arr[j];/*�洫arr[j]�Parr[j+1]���� */
                arr[j]=arr[j+1];
                arr[j+1]=temp;
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
