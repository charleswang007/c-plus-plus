/* �d���ɦW:block.c ,�ϰ��ܼƪ����Ľd�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>
int main(void)
{/* �D�{���{���϶� */
    int i=1;

    {/* �����{���϶� */
        int j=2;
        printf("i=%d,j=%d\n",i,j);
    }
    printf("i=%d\n",i);

    /* �b�o�̰���|�]��j���Q�ŧi�ӵo�Ϳ��~ */
    /*printf("j=%d\n",j); */
    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
