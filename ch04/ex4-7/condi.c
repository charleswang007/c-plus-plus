/* �d���ɦW:condi.c ,����B��l ?: ���ϥνd��*/
#include <stdio.h>
#include <stdlib.h>

/* ?: �ϥΩ�e�m�B�z�� */
#define Inter_i (i>3)? "i>3" : "i<=3"
/* �w�q������� MAX(a,b) �Ǧ^a�Pb�����j�� */
#define MAX(a,b) (a>b)? (a) : (b)

int main()
{
    int i=3;/* �ŧi�ܼ� */

    /* ?: �@����@���{���ԭz */
    (i>3)?printf("Integer i>3\n"):printf("Integer i<=3\n");

    /* ?: ���ϥγr������h�椧�{���ԭz */
    (i>3)?
        printf("Integer "),/* i>3 �ɰ��� */
        printf("i>3\n")
    :
        printf("Integer "),/* i<=3 �ɰ��� */
        printf("i<=3\n")
    ;

    /* ?: �ϥΩ�{���ԭz�� */
    printf("Integer %s\n", (i>3)?"i>3":"i<=3" );

    /* ?: �ϥΩ�e�m�B�z�� */
    printf("Integer %s\n", Inter_i );
    printf("MAX(300.7,50)=%f\n", MAX(300.7,50));

    system("PAUSE");
    return 0;
}
