/* �d���ɦW:scan_n1.c ,�w��J�r���ƪ��x�s %n */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,count;/* �ŧi����ܼ� */

    /* �̷Ӯ榡��JInput:�H�Τ@�Ӿ�� */
    printf("Please input \"Input:\" and 1 integer:");
    scanf("Input:%d%n",&i,&count);

    printf("\n i=%d\n",i);
    /* �p���i��J�����r���� */
    printf("characters count to i=%d\n",count);

    system("PAUSE");
    return 0;
}
