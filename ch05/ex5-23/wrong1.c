/* �d���ɦW:wrong1.c ,scanf��Ƥ����w�r�ꤧ��J */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=1;/* �ŧi����ܼơA�ë��w��Ȭ� 1 */
    char str[20];

    /* �n�D��J Input: �P 1 �Ӿ�� */
    printf("Please input \"Input:\" and 1 integer:");
    scanf("Input:%d",&i);

    /* ��J 1 �Ӧr�� */
    printf("\nPlease input 1 string:");
    scanf("%s",str);

    /* ����ܼƭ� */
    printf("\ni=%d",i);
    printf("\nstr=%s\n",str);

    system("PAUSE");
    return 0;
}
