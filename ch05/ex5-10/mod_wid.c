/* 絛ㄒ郎:mod_wid.c ,printfㄧ计ぇ糴width耿ぇㄏノ */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    printf("%3d\n",3);   /* ﹚计陪ボ计 */
    printf("%3d\n",300);   /* ﹚计单陪ボ计 */
    printf("%3d\n\n",30000); /* ﹚计陪ボ计礚 */

    /* ノ*パ把计﹚计 */
    printf("%*d\n%*d\n%*d\n",3,3,3,3000,3,30000);

    system("PAUSE");
    return 0;
}
