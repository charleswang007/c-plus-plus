/* �d���ɦW:return.c ,�Q�� return �ԭz���_�j�骺���� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int i;

    for(i=1;i<=4;i++){
        printf("i=%d\n",i);  /* �ĴX������j�� */
        printf("section 1\n"); /* �{���Ϭq 1 */

        if(i==3) return -1; /* �p�Gi����3�A�h�j���{������ */

        printf("section 2\n"); /* �{���Ϭq 2 */
    }
    printf("section 3\n"); /* �{���Ϭq 3 */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
