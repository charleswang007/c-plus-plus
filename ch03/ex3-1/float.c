/* �d���ɦW:float.c ,�B�I�Ƥ����ĺ�צ�ƻP���ƽd�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
     float f; /* �ŧi�B�I���ܼ� f */
     double d; /* �ŧi����ׯB�I���ܼ� d */

     /* �]�w f �P d ����� */
     f=1.23456789;
     d=1.234567890123456789;

     /* ��� f �P d ���ƭ� */
     printf("Effect number characters.\n",f);/* �Ʀr�����Ħ�� */
     /* %f���H�p�ƫ������ .10����ܤp���I��10�� .19���19��*/
     printf("float f=%.10f\n",f);
     printf("double d=%.19f\n",d);

     /* �]�w f �P d ���ƭ� */
     f=1e36;
     d=1e307;

     printf("Exponent\n",f); /* �Ʀr�����Ƴ��� */
     /* %e���H���ƫ������ .10����ܤp���I��10�� .19���19��*/
     printf("float f=%.10e\n",f);
     printf("double f=%.19e\n",d);

     system("PAUSE");/* �Ȱ��{������ */
     return 0;/* <-�{�����`�����A�Ǧ^0 */
}
