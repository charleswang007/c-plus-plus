/* �d���ɦW:array_2d.c ,�G���}�C����� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    /* �G����ư}�C���ŧi�ó]�w��� */
    int array[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},i,j;

    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            /* ��ܰ}�C�������� */
            printf("array[%d][%d]=%-2d ",i,j,array[i][j]);
        }
        printf("\n");
    }

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
