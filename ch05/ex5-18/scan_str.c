/* �d���ɦW:scan_str.c ,�r�ꤧ��J */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* �ŧi�|�Ӧr���}�C(�r���ܼ�) */
    char str1[10],str2[10],str3[10],str4[10];

    printf("Input 4 strings:\n");/* ��J�|�Ӧr�� */
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    scanf("%s",str4);

    /* ��ܿ�J���r�� */
    printf("\nDisplay inputed strings...\n");
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);
    printf("str3=%s\n",str3);
    printf("str4=%s\n",str4);

    system("PAUSE");
    return 0;
}
