/* �d���ɦW:width.c ,scanf���width���w��J�̤j�r����*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,c,d;/* �ŧi�ܼ� */
    char str1[10],str2[10];

    /* �n�D��J 2 �Ӿ�� */
    printf("Please input 2 integers (a,b):\n");
    scanf("%4d%d",&a,&b);

    /* �n�D��J�@�s�ꪺ�Ʀr */
    printf("\nPlease input larger than 4 digits (c,d):\n");
    scanf("%4d%d",&c,&d);

    /* �n�D��J�@�s�ꪺ�r�� */
    printf("\nInput more than 4 characters(str1,str2):\n");
    scanf("%4s%s",str1,str2);

    /* ��ܤ��e */
    printf("\na=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);

    system("PAUSE");
    return 0;
}
