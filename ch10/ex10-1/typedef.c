/* �d���ɦW:typedef.c ,�ۭq��ƫ��A���ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

typedef int My_int;/* �ۭq��ƫ��A�ŧi */
typedef char My_str[10];

int main(void)
{
    typedef float My_float;/* �ۭq��ƫ��A�ŧi */

    My_int i=1;/* �ŧi�ܼƨó]�w��� */
    My_float f=3e3;
    My_str str="Hello!";

    printf("My_int i=%d\n",i);/* ����ܼƭ� */
    printf("My_float f=%f\n",f);
    printf("My_str str=%s\n",str);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
