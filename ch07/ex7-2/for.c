/* �d���ɦW:for.c ,�Q��for�j��]�w�P��X�}�C�����Ҧ������� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{

    int array[5],i;    /* �ŧi��ư}�Carray[5] */

    for(i=0;i<=4;i++){/* �]�w�}�C������l�� */
        array[i]=i;
    }

    for(i=0;i<=4;i++){/* ��ܨC�Ӱ}�C�������� */
        printf("array[%d]=%d\n",i,array[i]);
    }

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
