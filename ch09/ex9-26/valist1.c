/* �d���ɦW:valist1.c , �H���T�޼ƫ��w��Ƥ����w���פ޼Ƥ��Ӽ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>
#include <stdarg.h>

double average(int i,...);/* ��Ƥ����w�޼ƦC�ǤJ�쫬�ŧi */

int main(void)
{
    /* ��ܤ��w���פ޼ƦC�Ҧ��޼ƪ������� */
    printf("average(3,2.0,3.0,4.0)=%f\n",
               average(3,2.0,3.0,4.0));

    system("PAUSE");
    return 0;
}

/* �p�⤣�w���פ޼ƦC�Ҧ��޼Ƥ�������
   �ǤJ�޼ơGi  ���w�޼ƪ��Ӽ�
             ���w�޼�  �p���
   �ǥX�ȡG���w���פ޼Ƥ������� */
double average(int i,...)
{
    double total=0;/* ���w���פ޼Ƥ��`�M */
    int j;/* �p�ƥ� */
    va_list var;/* �ŧi�s�����w�޼ƦC���ܼƫ��A */

    va_start(var,i);/* ��l�Ƥ��w�޼ƦC���s�� */

    for(j=0;j<i;j++)/* �[�`�Ҧ��޼ƭ� */
        total += va_arg( var , double);/* �Hdouble���o�޼ƭ� */

    va_end(var);/* �������w�޼ƦC���s�� */

    return total/i;/* �Ǧ^������ */
}
