/* �d���ɦW:tra_prog.c ,�Q��printf�l�ܵ{�����y�{ */
#include <stdio.h> /* �ޤJ���Y�� */
#include <stdlib.h>

int main(void) /* �D��� */
{
    int i=0,j;

    printf("prog 1!\n");/* �y�{��� 1 */

    if(i>0)/* if �P�_�� */
    {
        j=3;
        printf("if is true!\n");/* if �P�_����� */
    }
    else
    {
        j=4;
        printf("if is false!\n");/* if �P�_����� */
    }

    printf("prog 2!\n");/* �y�{��� 2 */

    for(;i<j;++i)/* for �j�� */
        printf("for loop !\n");/* for �j����� */

    printf("prog 3!\n");/* �y�{��� 3 */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;
}
