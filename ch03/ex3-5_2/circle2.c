/* �d���ɦW:circle2.c ,�ꭱ�n���p�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
     float fRadius,fPI,fArea; /* �ŧi�B�I���ܼ� */

     fRadius=5.0; /* �]�w��b�| */
     fPI=3.14; /* �]�w��P�v */

     fArea=fPI*fRadius*fRadius; /* �p��ꭱ�n */

     /*��ܭp�⵲�G*/
     printf("The area of radius %f is %f\n",fRadius,fArea);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
