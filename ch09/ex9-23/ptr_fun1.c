/* �d���ɦW:ptr_fun1.c , ��ƫ��Ъ���� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>


/* ��Ʃw�q */
void prn(void){printf("Function prn.\n");}/* ��ܨ�ƦW�� */

int main(void)/* �D�{���}�l */
{
    /* ��ܨ�� prn ����} */
    printf("the address of function prn = %p\n",prn);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
