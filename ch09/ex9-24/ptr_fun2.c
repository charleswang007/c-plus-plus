/* �d���ɦW:ptr_fun2.c , ��ƫ��Ъ��ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>


/* ��Ʃw�q */
void prn1(void){printf("Function prn1.\n");}/* ��ܨ�ƦW�� */

void prn2(void){printf("Function prn2.\n");}/* ��ܨ�ƦW�� */

void prn_d(int i){/* ��ܨ�ƦW�ٻP�ǤJ����� */
    printf("Function prn_d. int=%d\n",i);
}

int main(void)/* �D�{���}�l */
{
    void (*ptr_fun) (void);/* ��ƫ��Ъ��ŧi */
    void (*ptr_fun1) (int);

    ptr_fun=prn1;/* ������� prn1 ����ƫ��� */
    ptr_fun();/* �I�s��ƫ��� ptr_fun �ҫ��V����� prn1  */

    ptr_fun=prn2;/* ������� prn2 ����ƫ��� */
    ptr_fun();/* �I�s��ƫ��� ptr_fun �ҫ��V����� prn2  */

    ptr_fun1=prn_d;/* ������� prn_d ����ƫ��� */
    ptr_fun1(5);/* �۷�� prn_d(5); */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
