/* �d���ɦW:loc_glo.c ,��ϰ��ܼƹJ�W�s���ܼ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int i=1; /* �ŧi�����{���϶����s�q�ܼ� i */

    printf("In main i=%d\n",i);

    {/* �����{���϶� */
        int i=2;
        printf("In inner block i=%d\n",i);
    }

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
