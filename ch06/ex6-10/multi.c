/* �d���ɦW:multi.c ,���h�j�骺�d�ҡA�E�E���k�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int i,j;/* �ŧi�ܼơA���k������i�P�Q����j */

    for(i=1;i<=9;i++){/* ����k�����ƪ��j�� */
        for(j=1;j<=9;j++){/* ����k���Q���ƪ��j�� */
            printf("%d*%d=%d\t",i,j,i*j);/*���k���涵*/
        }
        putchar('\n');/*���k��C�@�C������*/
    }

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
