/* �d���ɦW:if.c�A#if�B#else�B#endif���O�Pdefined�ԭz���ܽd */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

#define MAX(a,b) ((a>b)?(a):(b)) /* �w�q������� MAX */

int main(void)
{
/* MAX �w�w�q���sĶ���� */
#if defined MAX
    printf("MAX(10,5)=%d\n",MAX(10,5));
#else
    printf("Macro MAX is not defined\n");
#endif

#undef MAX /* ����������� MAX �w�q*/
    printf("Macro MAX is undefined!\n");

/* MAX ���w�q���sĶ */
#if defined MAX
    printf("MAX(10,5)=%d\n",MAX(10,5));
#else
    printf("Macro MAX is not defined\n");
#endif

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
