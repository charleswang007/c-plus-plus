/* �d���ɦW:goto.c ,�bfor�j�餤�ϥ�goto�ԭz */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int i;

    for(i=1;i<=4;i++){
        printf("i=%d\n",i);/* �ĴX������j�� */
        printf("section 1\n");/* �{���Ϭq�@ */

        if(i==3) goto STOP;/* �p�Gi=3,�h�j���{���������STOP */
        printf("section 2\n");/* �{���Ϭq�G */
    }
    printf("section 3\n");/* �{���Ϭq�T */

STOP:/* STOP ���� */
    printf("section 4\n");/* �{���Ϭq�| */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
