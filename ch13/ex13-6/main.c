/* �M��:multidef\multidef.dev */
/* �d���ɦW:multidef\main.c�A�ҲդƵ{�����D�{���Ҳ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

#include "area.h"
#include "circum.h"

int main(void)/* �D�{���}�l */
{
    printf("circle of diameter 5:\n");
    printf("the area is %f\n",cir_a(5));
    printf("the circumference is %f\n",cir_l(5));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
