/* �d���ɦW:define.c ,�ۭq�`�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

#define PI 3.14 /* �w�q��P�v�����`�� PI */

int main(void)
{
    float fRadius,fArea; /* �ŧi�B�I���ܼ� */

    fRadius=5.0; /* �]�w��b�| */

    fArea=PI*fRadius*fRadius; /* �p��ꭱ�n */

     /*��ܭp�⵲�G*/
    printf("The area of radius %f is %f\n",fRadius,fArea);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
