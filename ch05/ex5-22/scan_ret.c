/* �d���ɦW:scan_ret.c ,scanf��ƶǦ^���\��J���ѼƭӼ� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i1,i2,count1,ret;/* �ŧi����ܼ� */

    /* ��J 2 �Ӿ�� */
    printf("Please input 2 integers:");
    ret=scanf("%d%n%d",&i1,&count1,&i2);

    /* ����ܼƭ� */
    printf("\ni1=%d\n",i1);
    printf("characters count to i1=%d\n",count1);
    printf("i2=%d\n",i2);

    /* ��ܿ�J���\���ѼƭӼ� */
    printf("successful input %d values.\n",ret);

    system("PAUSE");
    return 0;
}
