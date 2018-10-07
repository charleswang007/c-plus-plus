/* 絛ㄒ郎:scan_ret.c ,scanfㄧ计肚Θ块ぇ把计计 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i1,i2,count1,ret;/* 俱计跑计 */

    /* 块 2 俱计 */
    printf("Please input 2 integers:");
    ret=scanf("%d%n%d",&i1,&count1,&i2);

    /* 陪ボ跑计 */
    printf("\ni1=%d\n",i1);
    printf("characters count to i1=%d\n",count1);
    printf("i2=%d\n",i2);

    /* 陪ボ块Θぇ把计计 */
    printf("successful input %d values.\n",ret);

    system("PAUSE");
    return 0;
}
