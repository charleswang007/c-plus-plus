/* �d���ɦW:gcd.c ,�ϥ�while�j��D�̤j���]�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    /* �ŧi�ܼơAa�����ơAb���Q���ơAtemp���l�� */
    int a=0,b=0,temp=0;

    printf("Please input two integer for finding their GCD:\n");
    scanf("%d %d",&a,&b);/* ��J�DGCD���G�ӼƦr */

    while(b!=0){/*����j��� b ������ 0 �� */
        temp=a%b;/*�Da,b�۰����l��*/
        a=b;/* �N���� b �����Q���� a */
        b=temp;/* �N�e�����o���l�ơA�]���l��b */
    }
    printf("GCD is %d\n",a);/*�̰��ɪ����Ƭ�����*/

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
