/* �d���ɦW:tra_fun.c ,�Q��printf�l�ܵ{����ƪ��I�s */
#include <stdio.h> /* �ޤJ���Y�� */
#include <stdlib.h>

void fun1(){printf("fun1\n");}/* fun1��Ƭy�{��� */

void fun2()
{
    printf("fun2-1\n");/* fun2��Ƭy�{��� 1 */
    fun1();
    printf("fun2-2\n");/* fun2��Ƭy�{��� 2 */
}

void fun3()
{
    printf("fun3-1\n");/* fun3��Ƭy�{��� 1 */
    fun2();
    printf("fun3-2\n");/* fun3��Ƭy�{��� 2 */
}

int main(void) /* �D�{�� */
{
    printf("---main-1---\n");/* �D�{���y�{��� 1 */
    fun1();
    printf("---main-2---\n");/* �D�{���y�{��� 2 */
    fun2();
    printf("---main-3---\n");/* �D�{���y�{��� 3 */
    fun3();
    printf("---main-4---\n");/* �D�{���y�{��� 4 */
    system("PAUSE");/* �Ȱ��{������ */
    return 0;
}
