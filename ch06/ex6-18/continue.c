/* �d���ɦW:continue.c ,�bfor�j�餤�ϥ�continue�ԭz */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int i;

    for(i=1;i<=4;i++){
        printf("i=%d\n",i);  /* �ĴX������j�� */
        printf("section 1\n"); /* �{���Ϭq 1 */

        if(i==3) continue;/* �p�Gi����3�A�j���^��j�骺�p���B�⦡*/

        printf("section 2\n"); /* �{���Ϭq 2 */
    }
    printf("section 3\n"); /* �{���Ϭq 3 */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
