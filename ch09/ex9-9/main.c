/* �d���ɦW:main.c , main�D�{�����ǤJ�Ѽ�argc,argv */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(int argc,char *argv[])/* �D�{���}�l */
{
    int i;

    /* ��ܶǵ��D�{������� */
    printf("argc=%d\n",argc);

    for(i=0;i<argc;++i) /* ��ܦr����а}�Cargv����� */
        printf("argv[%d]=%s\n",i,argv[i]);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
