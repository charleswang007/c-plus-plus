/* �d���ɦW:enum_def.c ,�C�|���A�w�q���C�|�`�ƭ���� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

enum  FRUIT {/* �C�|���A FRUIT ���w�q */
    APPLE,  /* �w�]�Ȭ���� 0 */
    ORANGE, /* �w�]�Ȭ���� 1 */
    BANANA, /* �w�]�Ȭ���� 2 */
    PEAR,   /* �w�]�Ȭ���� 3 */
    GRAPE   /* �w�]�Ȭ���� 4 */
};

enum MONTH {/* �C�|���A MONTH ���w�q */
    JAN=1,     /* �Ȭ���� 1 */
    FEB,        /* �Ȭ���� 2 */
    MAR,        /* �Ȭ���� 3 */
    APR,        /* �Ȭ���� 4 */
    MAY,        /* �Ȭ���� 5 */
    JUN         /* �Ȭ���� 6 */
};

enum MONTH_DAYS {/* �C�|���A MONTH_DAYS ���w�q */
    dJAN=31,     /* �Ȭ���� 31 */
    dFEB=28,     /* �Ȭ���� 28 */
    dMAR=31,     /* �Ȭ���� 31 */
    dAPR=30,     /* �Ȭ���� 30 */
    dMAY,         /* �w�]�Ȭ����  30+1=31 */
    dJUN=30      /* �Ȭ���� 30 */
};

int main(void)
{
    /* ��ܦC�|�`�ƪ��� */
    printf("enum FRUIT\n");/* enum FRUIT*/
    printf("APPLE=%d\n",APPLE);
    printf("ORANGE=%d\n",ORANGE);
    printf("BANANA=%d\n",BANANA);
    printf("PEAR=%d\n",PEAR);
    printf("GRAPE=%d\n\n",GRAPE);

    printf("enum MONTH\n");/* enum MONTH */
    printf("JAN=%d\n",JAN);
    printf("FEB=%d\n",FEB);
    printf("MAR=%d\n",MAR);
    printf("APR=%d\n",APR);
    printf("MAY=%d\n",MAY);
    printf("JUN=%d\n\n",JUN);

    printf("enum MONTH_DAYS\n"); /* enum MONTH_DAYS */
    printf("dJAN=%d\n",dJAN);
    printf("dFEB=%d\n",dFEB);
    printf("dMAR=%d\n",dMAR);
    printf("dAPR=%d\n",dAPR);
    printf("dMAY=%d\n",dMAY);
    printf("dJUN=%d\n",dJUN);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
