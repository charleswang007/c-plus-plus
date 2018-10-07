/* �d���ɦW:valist2.c ,�B�I�Ƥ����w���פ޼ƦC�H 0 ���� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

/* ��Ƥ����w�޼ƦC�ǤJ�쫬�ŧi */
double sun_powx_rooty(double x,double y,...);

int main(void)
{
    printf("sun_powx_rooty(2,2,3.0,5.0,NULL)=%f\n",
              sun_powx_rooty(2,2,3.0,5.0,NULL));

    system("PAUSE");
    return 0;
}
/* �p���  (�U(�޼�)^x)^(1/y)
   �ǤJ�޼ơGx  �p��޼ƪ�����
             y  �p��޼Ʀ���M���} y ���ڸ�
             ���w�޼�  �p���
   �ǥX�ȡG�p��� */
double sun_powx_rooty(double x,double y,...)
{
    double total=0,temp;/* �޼Ƥ�����M�B�Ȧs�ܼ� */
    int j;/* �p�ƥ� */
    va_list var;/* �ŧi�s�����w�޼ƦC���ܼƫ��A */

    va_start(var,y);/* ��l�Ƥ��w�޼ƦC���s�� */

    /* �[�`�Ҧ��޼Ƥ� x ����M�A�H */
    while( fabs((temp=va_arg(var,double ))) >= 1e-13 ){
        total += pow(temp,x);
    }

    total = pow(total,1/y);/* �p��M���} y ���ڸ� */

    va_end(var);/* �������w�޼ƦC���s�� */

    return total;/* �Ǧ^�p��� */
}
