/* 範例檔名:mod_flag.c ,printf函數之flag修飾子之使用 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%10d/\n",3000);/* 指定寬度 */
    printf("%10d/\n",-3000);

    printf("using -\n");/* 指定寬度並使用修飾子 - */
    printf("%-10d/\n",3000);
    printf("%-10d/\n\n",-3000);

    printf("using +\n");/* 使用修飾子 + */
    printf("%+d\n",3000);
    printf("%+d\n\n",-3000);

    printf("using space\n");/* 使用修飾子 空格 */
    printf("% d\n",3000);
    printf("% d\n\n",-3000);

    printf("8 base using # \n");/* 使用修飾子#顯示8進制數字 */
    printf("%#o\n",3000);

    printf("16 base using #\n");/* 使用修飾子#顯示16進制數字 */
    printf("%#x\n\n",3000);

    printf("double using #\n");/* 使用修飾子#顯示浮點數 */
    printf("%.0f\n",12.34);
    printf("%#.0f\n",12.34);   /* %f 強制顯示小數點 */
    printf("%.0e\n",12.34);
    printf("%#.0e\n\n",12.34); /* %e 強制顯示小數點 */
    printf("%g\n",12.34);
    printf("%#g\n",12.34); /* %g 強制顯示小數點與有效位數之0 */
    printf("%g\n",12.);    /* 指定為浮點數一定要有小數點 */
    printf("%#g\n\n",12.); /* %g 強制顯示小數點與有效位數之0 */

    printf("using 0\n");/* 使用修飾子 0 */
    printf("%010d\n",3000);
    printf("%010f\n",1.2345);

    system("PAUSE");
    return 0;
}
