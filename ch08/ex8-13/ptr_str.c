/* �d���ɦW:ptr_str.c ,�H���Ыŧi�r���ܼ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    char str1[]="Hello";/* �ŧi�@�r���}�C */
    char *str2="Hello";/* �ŧi�@�r������ */
    int i;

    printf("element | Ascii \n");/* ��ܼ��Y */
    printf("-------------------\n");

    for(i=0;i<6;i++)    /* ��ܦr���}�C���� */
        printf("str1[%d] | %d \n",i,str1[i]);

    printf("\nstr2:%p\n\n",str2);/* ��X���e����}�� */

    printf("element | Ascii \n");/* ��ܼ��Y */
    printf("-------------------\n");

    for(i=0;i<6;i++){    /* ��ܦr�������ܼ� */
        printf("str2+%d  | %d \n",i,*str2);
        str2++;
    }

    printf("\nstr2:%p\n\n",str2);/* ��X���᪺��}�� */

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
