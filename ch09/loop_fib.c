/* �d���ɦW:loop_fib.c ,�ϥΰj���ƭp��O��ƦC */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

/* �p��O��ƦC�A��ƭ쫬�ŧi */
int fib(int n);

int main(void)
{
    int i;

    /*��X�O��ƦC*/
    for(i=0;i<=10;++i)
        printf("fib(%2d)=%d\n",i,fib(i));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  fib ��ƪ��ŧi �@�ΡG�p��O��ƦC
    �ǤJ�ȡG�O��ƦC������
    �ǥX�ȡG�O��ƦC */
int fib(int n)
{
    int fib0=0,fib1=1,/* �O��ƦC���e�G�� */
        fibn=fib0+fib1,/* �O��ƦC���� n �� */
        i;

    if(n==0)         /* n==0 */
        return fib0;
    else if(n==1)    /* n==1 */
        return fib1;
    else if(n==2)    /* n==2 */
        return fibn;
    else{            /* n>2 */
        for(i=3;i<=n;++i){/* �p��O���ƦC */
            fib0=fib1;   /* �Nfib0�Pfib1�Ҧs���ƦC�W�[�@�� */
            fib1=fibn;
            fibn=fib0+fib1;/* �p��U�@�ӶO��ƦC */
        }
        return fibn;
    }
}
