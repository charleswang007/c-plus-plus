/* �d���ɦW:ptr_ind.c ,�Q�Ϋ��Я��ަs���@���}�C */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int array[4]={0,1,2,3},*ptr,i;/* �ŧi�}�C�P�����ܼ� */

    ptr=array;/* �N�}�C���жǵ������ܼ� */

    printf("element         | &ptr[i]  | ptr[i]\n");/* ��ܼ��Y */
    printf("-------------------------------\n");

    for(i=0;i<4;i++)/* ��ܦ�}�P�� */
      printf("array[%d] ptr[%d] | %p | %d \n",i,i,&ptr[i],ptr[i]);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
