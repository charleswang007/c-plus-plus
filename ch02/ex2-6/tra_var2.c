/* �d���ɦW:tra_var2.c ,�Q��printf��ưl���ܼƭ�2 */
#include <stdio.h> /* �ޤJ���Y�� stdio.h*/
#include <stdlib.h>/* �ޤJ���Y�� stdlib.h*/

int main(void) /* �D�{�� */
{/* <-�{���i�J�����I*/
    int a,b,c,d;/* �ŧi����ܼ� */

    a=2+3;
    b=2-3;
    c=a*b+a*4-b*6;/* 5 ������ 4 */
    d=c*a+b;

    printf("a=%d\n",a);   /* ����ܼƭ� */
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
