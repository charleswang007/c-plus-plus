/* �d���ɦW:tra_var1.c ,�Q��printf��ưl���ܼƭ�1 */
#include <stdio.h> /* �ޤJ���Y�� stdio.h*/
#include <stdlib.h>/* �ޤJ���Y�� stdlib.h*/

int main(void) /* �D�{�� */
{/* <-�{���i�J�����I*/
    int a,b,c;/* �ŧi����ܼ� */

    a=10;
    b=20;
    c=a-b;/* + ������ - */

    printf("a=%d\n",a);   /* ����ܼƭ� */
    printf("b=%d\n",b);
    printf("c=a+b=%d\n",c);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
