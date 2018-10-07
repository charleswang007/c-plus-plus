/* 絛ㄒ郎:pri_n.c ,printfㄧ计ぇ陪ボじ计 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count1,count2;/* 俱计跑计 */

    count1=printf("1234567890\n%n",&count2);
    printf("characters printed:%d,%d\n",count1,count2);

    count1=printf("%d\n",300);
    printf("characters printed:%d\n",count1);

    system("PAUSE");
    return 0;
}
