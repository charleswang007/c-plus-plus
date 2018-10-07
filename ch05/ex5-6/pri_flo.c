/* 範例檔名:pri_flo.c ,浮點數型態之數值顯示 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float f1=1.2345678,/* 變數宣告 */
          f2=1e10;
    double d=1.23456789012;
    long double ld=1e15;

    printf("float f1=1.2345678\n");/* float f1 */
    printf("%%e=%e\n",f1);
    printf("%%E=%E\n",f1);
    printf("%%f=%f\n",f1);
    printf("%%g=%g\n",f1);
    printf("%%G=%G\n\n",f1);

    printf("float f2=1e10\n");/* float f2 */
    printf("%%e=%e\n",f2);
    printf("%%E=%E\n",f2);
    printf("%%f=%f\n",f2);
    printf("%%g=%g\n",f2);
    printf("%%G=%G\n\n",f2);

    printf("double d=1.2346789012\n");/* double d*/
    printf("%%e=%e\n",d);
    printf("%%f=%f\n",d);
    printf("%%g=%g\n\n",d);

    printf("long double ld=1e15\n");/* long double ld*/
    printf("%%Le=%Le\n",ld);
    printf("%%Lf=%Lf\n",ld);
    printf("%%Lg=%Lg\n",ld);

    system("PAUSE");
    return 0;
}
