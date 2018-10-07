/* 範例檔名:pri_char.c ,字元與字串之顯示 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch='a',              /* 字元變數宣告 */
         str[20]="String!";   /* 字串變數宣告 */

    /* 字元與字串的顯示 */
    printf("ASCII number %d is %c\n",ch,ch);
    printf("str=%s\n",str);

    system("PAUSE");
    return 0;
}
