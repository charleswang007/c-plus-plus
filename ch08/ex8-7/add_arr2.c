/* �d���ɦW:add_arr2.c , �s�����лP�}�C�����Y */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int array[4]={0,1,2,3},i;/* �ŧi�}�C�ó]�w��l�� */

    printf("element  | address  | value\n");/* ��ܼ��Y */
    printf("---------------------------\n");

    for(i=0;i<4;i++)  /* ��ܰ}�C�������O�����}�P�� */
        printf("array[%d] | %p | %d\n",i,&array[i],array[i]);

    printf("\narray:%p\n",array);/* ��g������ */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
