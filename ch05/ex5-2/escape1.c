/* �d���ɦW:escape1.c ,����r��\n \b \r \t���@�� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Today is a go\nod day.\\n\n");/* \n ���� */
    printf("Today is a go\bod day.\\b\n");/* \b �˰h�@�� */
    printf("Today is a go\rod day.\\r\n");/* \r �k��^��歺 */
    printf("Today is a go\tod day.\\t\n");/* \t ����(Tab) */

    system("PAUSE");
    return 0;
}
