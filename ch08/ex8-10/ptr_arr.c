/* �d���ɦW:ptr_arr.c ,�Q�Ϋ��Цs���@���}�C */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int array[4]={0,1,2,3},*ptr,i;/* �ŧi�}�C�P�����ܼ� */

    ptr=array;/* �N�}�C���жǵ������ܼ� */

    printf("element  | array+i  | *(array+i)\n");/* ��ܼ��Y */
    printf("-------------------------------\n");

    for(i=0;i<4;i++)    /* ��ܦ�}�P�� */
        printf("array[%d] | %p | %d \n",i,array+i,*(array+i));

    printf("\narray:%p\n\n",array);

    printf("element  | ptr      | *ptr\n");/* ��ܼ��Y */
    printf("-------------------------------\n");

    for(i=0;i<4;i++){/* ��ܦ�}�P�� */
        printf("array[%d] | %p | %d \n",i,ptr,*ptr);
        ptr++;/* ���W���Э� */
    }

    printf("\nptr:%p\n",ptr);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
