/* �d���ɦW:pri_g.c ,%g����� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* �H %g ���Φ���ܤ��P�d�򪺯B�I�� */
  	printf("%g\n",.0000012345678);
  	printf("%g\n",.000012345678);
  	printf("%g\n",.00012345678);
  	printf("%g\n",.0012345678);
  	printf("%g\n",.012345678);
  	printf("%g\n",.12345678);
  	printf("%g\n",1.2345678);
  	printf("%g\n",12.345678);
  	printf("%g\n",123.45678);
  	printf("%g\n",1234.5678);
  	printf("%g\n",12345.678);
  	printf("%g\n",123456.78);
  	printf("%g\n",1234567.8);
  	printf("%g\n",12345678.);

    system("PAUSE");
    return 0;
}
