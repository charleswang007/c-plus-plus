/* �d���ɦW:ptr_2d.c ,�Q�Ϋ��Я��ަs���G���}�C */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    /* �ŧi�}�C�P�����ܼ� */
    int array[3][4]={{0,1,2,3},
                     {4,5,6,7},
                     {8,9,10,11}},*ptr,i,j;

    ptr=array[0];/* �N�}�C���жǵ������ܼ� */

    /* ��ܼ��Y */
    printf("element               | &ptr[i]  | ptr[i]\n");
    printf("---------------------------------------\n");

    for(i=0;i<3;i++)/* ��ܦ�}�P�� */
        for(j=0;j<4;j++)/* ��ܦ�}�P�� */
            printf("array[%d][%d] , ptr[%2d] | %p | %d \n",
                     i,j,i*4+j,&ptr[i*4+j],ptr[i*4+j]);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
