/* �d���ɦW:arr_add.c ,�G���}�C���ۥ[ */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    /* �G�ӤG����ư}�C���ŧi�ó]�w��� */
    int a[3][3]={{5,4,2},{7,8,3},{7,8,3}},
        b[3][3]={{2,3,5},{1,2,3},{8,9,3}},i,j;

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            /* �}�C�����ۥ[����� */
            printf("added[%d][%d]=%-2d ",i,j,a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
