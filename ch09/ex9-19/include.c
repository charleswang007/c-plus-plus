/* �d���ɦW:include.c , �ۭq���Y�ɪ��ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

#include "include.h"/* �ޤJ�ۭq���Y�� */

/* circle ��ơA��ܪ��|�� diameter ���ꭱ�n�P�P�� */
void circle(double diameter){
    printf("circle of diameter %f\n",diameter);
    printf("  the area is %f\n",cir_a(diameter));
    printf("  the circumference is %f\n",cir_l(diameter));
}

int main(void)/* �D�{���}�l */
{
    circle(5);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
