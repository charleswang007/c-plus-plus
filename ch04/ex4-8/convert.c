/* �d���ɦW:convert.c ,�۰ʫ��A�ഫ */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    double d;/* �ŧi�ܼ� */
    float f;
    int i;
    unsigned int ui;

    /* ��Ʀr�j��B�I�ƽd��ɡA�ഫ���B�I�ƻP��ƵL�k���T���� */
    d=1.234567890123456789e100;
    f=d;/* �ഫ���B�I�ƭ� */
    i=d;/* �ഫ����ƭ� */
    printf("number > float\n");
    printf("Original Value = %20.18e\n",d );
    printf("to float= %20.18f\n",f );/* �L�a�j�� */
    printf("to int  = %20d\n\n",i );/* ���~�� */

    /* ��Ʀr����B�I�ƻP��ƽd��ɡA�ഫ����ƵL�k���T���� */
    d=1.23456789012345e30;
    f=d;/* �ഫ���B�I�ƭ� */
    i=d;/* �ഫ����ƭ� */
    printf("float > number > int\n");
    printf("Original Value = %20.18e\n",d );
    printf("to float= %20.18e\n",f );/* ���T�Ȧ����Ħ�Ƥ��� */
    printf("to int  = %d\n\n",i );/* ���~�� */

    /* ��Ʀr�p���ƽd��ɡA�i�ഫ�X���T�ȡA����ƻݱ˥h�p�� */
    d=123456.7;
    f=d;/* �ഫ���B�I�ƭ� */
    i=d;/* �ഫ����ƭ� */
    printf("number < int\n");
    printf("Original Value = %e\n",d );
    printf("to float= %e\n",f );/* ���T�� */
    printf("to int  = %d\n\n",i );/* ���T��ƭȡA�p���I��˥h */

    /* �t����ഫ��unsigned��� */
    i=-5000;
    ui=i;/* �ഫ��unsigned��ƭ� */
    printf("negtive interger \n");
    printf("Original Value = %d\n",i );
    printf("to unsigned int= %u\n",ui );/* ���~�ȡA�Ѽƥ�%u */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
