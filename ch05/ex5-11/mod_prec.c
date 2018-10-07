/* 絛ㄒ郎:mod_prec.c ,弘非precisions耿ぇㄏノ */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double d=12345.67890123;
    char s[]="1234567890";

    printf("integers\n"); /* 弘非程ぶ陪ボ计ぇ计 */
    printf("%.3d\n",3);   /* ﹚弘非龟悔计恶0 */
    printf("%.3d\n",300); /* ﹚弘非单陪ボ计 */
    printf("%.3d\n\n",30000); /* ﹚弘非陪ボ计礚ノ */

    /* ノ*パ把计﹚计 */
    printf("%.*d\n%.*d\n%.*d\n\n",3,3,3,3000,3,30000);

    printf("double %%f\n"); /* ﹚陪ボ计翴计 */
    printf("%.3f\n",d);
    printf("%f\n",d);   /* 箇砞 .6 */
    printf("%.12f\n\n",d);

    printf("double %%e\n"); /* ﹚陪ボ计翴计 */
    printf("%.3e\n",d);
    printf("%e\n",d);   /* 箇砞 .6 */
    printf("%.12e\n\n",d);

    printf("double %%g\n"); /* ﹚陪ボΤ计ぇ计 */
    printf("%.3g\n",d);
    printf("%g\n",d);   /* 箇砞 .6 */
    printf("%.12g\n\n",d);

    printf("string %%s\n"); /* ﹚陪ボ﹃ぇじ计 */
    printf("%.3s\n",s);
    printf("%.6s\n",s);
    printf("%.12s\n",s);

    system("PAUSE");
    return 0;
}
