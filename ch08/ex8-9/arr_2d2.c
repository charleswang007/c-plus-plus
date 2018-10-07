/* �d���ɦW:arr_2d2.c ,�G���}�C���޻P���Ъ����� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    /* �G����ư}�C���ŧi�ó]�w��� */
    int array[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},i,j;

    /* �}�C���ЭȪ���� */
    printf("array address:\n");
    for(i=0;i<=2;i++){
        /* �H���ޫ�����ܰ}�C���Ъ���} */
        printf("array[%d]=%p   ",i,array[i]);
        /* �H���Ы�����ܰ}�C���Ъ���} */
        printf("*(array+%d)=%2p \n\n",i,*(array+i));

        for(j=0;j<=3;j++){
            /* �H���ޫ�����ܰ}�C��������} */
            printf("&array[%d][%d]=%p   ",i,j,&array[i][j]);
            /* �H���Ы�����ܰ}�C��������} */
            printf("*(array+%d)+%d=%p \n",i,j,*(array+i)+j);
        }
        printf("\n");
    }

    /* �}�C���ЭȪ���� */
    printf("\narray value:\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            /* �H���ޫ�����ܰ}�C��������} */
            printf("array[%d][%d]=%-2d   ",i,j,array[i][j]);
            /* �H���Ы�����ܰ}�C��������} */
            printf("*(*(array+%d)+%d)=%-2d \n",i,j,
                                           *(*(array+i)+j));
        }
        printf("\n");
    }

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
