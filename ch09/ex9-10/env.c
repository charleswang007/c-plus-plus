/* �d���ɦW:env.c , main�D�{�����ǤJ�Ѽ�env */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(int argc,char *argv[],char *env[])/* �D�{���}�l */
{
    int i;

    /* ��ܶǵ��D�{������� */
    printf("argc=%d\n",argc);

    for(i=0;i<argc;++i) /* ��ܦr����а}�Cargv����� */
        printf("argv[%d]=%s\n",i,argv[i]);

    for(i=0;env[i]!=NULL;++i) /* ��ܦr����а}�Cenv����� */
        printf("env[%d]=%s\n",i,env[i]);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
