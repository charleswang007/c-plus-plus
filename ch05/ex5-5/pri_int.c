/* �d���ɦW:pri_int.c ,��ƫ��A���ƭ���� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short s=300,sd=-300;/* �ܼƫŧi */
    int i=300,id=-300;
    long l=2000000,ld=-2000000;
    unsigned short us=60000;
    unsigned int ui=60000;
    unsigned long ul=4000000;

    printf("short/int/long\n");
    printf("10 base %%d\n");/* 10�i��Ʀr��� %d*/
    printf("%hd/%d/%ld\n",s,i,l);
    printf("%hd/%d/%ld\n\n",sd,id,ld);

    printf("10 base %%i\n");/* 10�i��Ʀr��� %i*/
    printf("%hi/%i/%li\n",s,i,l);
    printf("%hi/%i/%li\n\n",sd,id,ld);

    printf("unsigned 10 base %%u\n");/* �L��10�i��Ʀr��� %u*/
    printf("%hu/%u/%lu\n",s,i,l);
    printf("%hu/%u/%lu\n\n",us,ui,ul);

    printf("unsigned 8 base %%o\n");/* �L���t��8�i��Ʀr��� %o*/
    printf("%ho/%o/%lo\n",s,i,l);
    printf("%ho/%o/%lo\n\n",us,ui,ul);

    /* �L���t��16�i��Ʀr��� %x %X*/
    printf("unsigned 16 base %%x\n");
    printf("%hx/%x/%lx\n",s,i,l);
    printf("%hx/%x/%lx\n\n",us,ui,ul);

    printf("unsigned 16 base %%X\n");
    printf("%hX/%X/%lX\n",s,i,l);
    printf("%hX/%X/%lX\n",us,ui,ul);

    system("PAUSE");
    return 0;
}
