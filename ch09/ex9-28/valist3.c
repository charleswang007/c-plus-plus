/* �d���ɦW:valist3.c ,�����ܼƤ����w���פ޼ƦC�H NULL ���� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>
#include <stdarg.h>

/* ��Ƥ����w�޼ƦC�ǤJ�쫬�ŧi */
void prn_str(char* pre_str,...);

int main(void)
{
    /* ��ܫ��w�r�� */
    prn_str("Pre : ","Str1","Str2","Str3",NULL);

    system("PAUSE");
    return 0;
}
/* ��ܥ[�J�e�ɦr�ꪺ�C�Ӥ޼Ʀr���
   �ǤJ�޼ơGpre_str  ��ܤ��e�ɦr��
             ���w�޼�  ��ܤ��r��
   �ǥX�ȡG�L */
void prn_str(char* pre_str,...)
{
    char* temp;/* �Ȧs�޼Ƥ����� */
    va_list var;/* �ŧi�s�����w�޼ƦC���ܼƫ��A */

    va_start(var,pre_str);/* ��l�Ƥ��w�޼ƦC���s�� */

    /* ���w���פ޼Ƥ��� NULL�A�h�~��j�餧���� */
    while( (temp=va_arg(var,char* ))!= NULL )
        printf("%s%s\n",pre_str,temp);/* ��ܫe�ɻP�޼Ʀr��� */

    va_end(var);/* �������w�޼ƦC���s�� */

    return ;
}
