/* �d���ɦW:circle1.c ,�ꭱ�n���p�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    float Radius,PI,Area; /* �ŧi�B�I���ܼ� */

    Radius=5.0; /* �]�w��b�| */
    PI=3.14; /* �]�w��P�v */

    Area=PI*Radius*Radius; /* �p��ꭱ�n */

    /*��ܭp�⵲�G*/
    printf("The area of radius %f is %f\n",Radius,Area);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
