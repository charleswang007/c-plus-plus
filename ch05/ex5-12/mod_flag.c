/* �d���ɦW:mod_flag.c ,printf��Ƥ�flag�׹��l���ϥ� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%10d/\n",3000);/* ���w�e�� */
    printf("%10d/\n",-3000);

    printf("using -\n");/* ���w�e�רèϥέ׹��l - */
    printf("%-10d/\n",3000);
    printf("%-10d/\n\n",-3000);

    printf("using +\n");/* �ϥέ׹��l + */
    printf("%+d\n",3000);
    printf("%+d\n\n",-3000);

    printf("using space\n");/* �ϥέ׹��l �Ů� */
    printf("% d\n",3000);
    printf("% d\n\n",-3000);

    printf("8 base using # \n");/* �ϥέ׹��l#���8�i��Ʀr */
    printf("%#o\n",3000);

    printf("16 base using #\n");/* �ϥέ׹��l#���16�i��Ʀr */
    printf("%#x\n\n",3000);

    printf("double using #\n");/* �ϥέ׹��l#��ܯB�I�� */
    printf("%.0f\n",12.34);
    printf("%#.0f\n",12.34);   /* %f �j����ܤp���I */
    printf("%.0e\n",12.34);
    printf("%#.0e\n\n",12.34); /* %e �j����ܤp���I */
    printf("%g\n",12.34);
    printf("%#g\n",12.34); /* %g �j����ܤp���I�P���Ħ�Ƥ�0 */
    printf("%g\n",12.);    /* ���w���B�I�Ƥ@�w�n���p���I */
    printf("%#g\n\n",12.); /* %g �j����ܤp���I�P���Ħ�Ƥ�0 */

    printf("using 0\n");/* �ϥέ׹��l 0 */
    printf("%010d\n",3000);
    printf("%010f\n",1.2345);

    system("PAUSE");
    return 0;
}
