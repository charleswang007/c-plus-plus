/* �d���ɦW:string.c ,�r���ܼƤ��ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    char s[7]="Aloha!";/* �ŧi�r���ܼ� s �ó]�w��� */

    printf("string : %s\n\n",s); /* ��ܦr���ܼ� s */

    /* ��ܦr�� s ���U�r���PASCII�X */
    printf("elem.= char: ASCII\n");
    printf("s[0] =  %c  :  %d\n",s[0],s[0]);
    printf("s[1] =  %c  :  %d\n",s[1],s[1]);
    printf("s[2] =  %c  :  %d\n",s[2],s[2]);
    printf("s[3] =  %c  :  %d\n",s[3],s[3]);
    printf("s[4] =  %c  :  %d\n",s[4],s[4]);
    printf("s[5] =  %c  :  %d\n",s[5],s[5]);
    printf("s[6] =  %c  :  %d\n",s[6],s[6]);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

