/* �d���ɦW:wrong2.c ,��ơB�B�I�ƻP�r�ꪺ��J*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=1;/* �ŧi����ܼơA�ë��w��Ȭ� 1 */
    float f=1;/* �ŧi�B�I�ܼơA�ë��w��Ȭ� 1 */
    char str[20];

    /* �n�D��J 1 �Ӿ�� */
    printf("Please input 1 integer:");
    scanf("%d",&i);

    /* �n�D��J 1 �ӯB�I�� */
    printf("\nPlease input 1 float:");
    scanf("%f",&f);

    /* ��J 1 �Ӧr�� */
    printf("\nPlease input 1 string:");
    scanf("%s",str);

    /* ����ܼƭ� */
    printf("\ni=%d",i);
    printf("\nf=%f",f);
    printf("\nstr=%s\n",str);

    system("PAUSE");
    return 0;
}
