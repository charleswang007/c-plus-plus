/* �d���ɦW:string.c ,�r���X�J���puts�Pgets���ϥ�*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str1[30];/* �ŧi�ܼ� */

    puts("Input a string:");/* ��ܿ�J���� */
    gets(str1);/* ��J�r����ܼ�str1 */

    puts("\nDisplay inputed string:");
    puts(str1);/* ��ܿ�J���r��str1 */

    system("PAUSE");
    return 0;
}
