/* �M��:ex13-3\include.dev */
/* �d���ɦW:ex13-3\main.c , �ҲդƵ{�����D�Ҳ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

#include "module.h"/* �ޤJ�Ҳժ����Y�� */

int main(void)/* �D�{���}�l */
{
    printf("circle of diameter 5:\n");
    printf("the area is %f\n",cir_a(5));
    printf("the circumference is %f\n",cir_l(5));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
