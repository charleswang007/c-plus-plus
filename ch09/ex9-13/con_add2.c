/* �d���ɦW:con_add2.c , �ϥ�const����ǧ}�Ѽƫ��Ф���� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

void print_arr(int * const,int);/* ��ƪ��쫬�ŧi */

int main(void)/* �D�{���}�l */
{
    int arr[]={1,2,3};

    print_arr(arr,3);/* ��ܾ�� 3 */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  print_arr ��ƪ��ŧi �@�ΡG��ܶǤJ���}�C������
    �ǤJ�ȡG��ܪ���� i */
void print_arr(int * const arr,int size)
{
    int i;

    /* ���ǤJ���}�C������ */
    arr[0]=5;

    /* ��ܰ}�C������ */
    for(i=0;i<size;++i,++arr)/* arr �����ӳQ��� */
        printf("arr[%d]=%d\n",i,*arr);
}

