/* �d���ɦW:while.c ,�ϥ�while�j��[�`1��100 */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int i=1,sum=0;/* �ŧi�ܼơAsum���p���`�M�Ai�Ω�p�� */

    while(i<=100){/*����j��� i <= 100 �� */
        sum=sum+i;/*�C����@���N�� sum �ȥ[�W i*/
        i++;/* �Ni�[�@ */
    }
    printf("The sum from 1 to 100 is %d\n",sum);/*��X�ۥ[�`�M*/

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
