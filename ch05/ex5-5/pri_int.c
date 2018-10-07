/* 範例檔名:pri_int.c ,整數型態之數值顯示 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short s=300,sd=-300;/* 變數宣告 */
    int i=300,id=-300;
    long l=2000000,ld=-2000000;
    unsigned short us=60000;
    unsigned int ui=60000;
    unsigned long ul=4000000;

    printf("short/int/long\n");
    printf("10 base %%d\n");/* 10進制數字顯示 %d*/
    printf("%hd/%d/%ld\n",s,i,l);
    printf("%hd/%d/%ld\n\n",sd,id,ld);

    printf("10 base %%i\n");/* 10進制數字顯示 %i*/
    printf("%hi/%i/%li\n",s,i,l);
    printf("%hi/%i/%li\n\n",sd,id,ld);

    printf("unsigned 10 base %%u\n");/* 無號10進制數字顯示 %u*/
    printf("%hu/%u/%lu\n",s,i,l);
    printf("%hu/%u/%lu\n\n",us,ui,ul);

    printf("unsigned 8 base %%o\n");/* 無正負號8進制數字顯示 %o*/
    printf("%ho/%o/%lo\n",s,i,l);
    printf("%ho/%o/%lo\n\n",us,ui,ul);

    /* 無正負號16進制數字顯示 %x %X*/
    printf("unsigned 16 base %%x\n");
    printf("%hx/%x/%lx\n",s,i,l);
    printf("%hx/%x/%lx\n\n",us,ui,ul);

    printf("unsigned 16 base %%X\n");
    printf("%hX/%X/%lX\n",s,i,l);
    printf("%hX/%X/%lX\n",us,ui,ul);

    system("PAUSE");
    return 0;
}
