/* �d���ɦW:rec_fib.c ,�ϥλ��j��ƭp��O��ƦC */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

/* �Q�λ��j�p��O��ƦC�A��ƭ쫬�ŧi */
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
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
