/* �d���ɦW:global.c ,�s���ܼƪ����Ľd�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int global=3;/* �ŧi�s���ܼ� global */

void fun(void)/* �w�q��� fun */
{/* ���fun���{���϶� */
    printf("global in fun = %d\n",global);/*��ܼs�q�ܼ� global*/
}

int main(void)
{/* �D�{���{���϶� */
    int i=1;

    {/* �����{���϶� */
        int j=2;
        printf("i=%d,j=%d,global=%d\n",i,j,global);
    }
    printf("i=%d,global=%d\n",i,global);

    fun();/* �I�s�ð����� fun */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
