/* �d���ɦW:sum.c ,�ϥ�for�j��[�`1��100 */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int i,sum=0;/* �ŧi�ܼơAsum���p���`�M�Ai�Ω�p�� */

    for(i=0;i<=100;i++){/*����j��� i <= 100 �� */
        sum=sum+i;/*�C����@���N�� sum �ȥ[�W i*/
    }
    printf("The sum from 1 to 100 is %d\n",sum);/*��X�ۥ[�`�M*/

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
