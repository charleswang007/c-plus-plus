/* �d���ɦW:pri_n.c ,printf��Ƥ���ܦr���� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count1,count2;/* �ŧi����ܼ� */

    count1=printf("1234567890\n%n",&count2);
    printf("characters printed:%d,%d\n",count1,count2);

    count1=printf("%d\n",300);
    printf("characters printed:%d\n",count1);

    system("PAUSE");
    return 0;
}
