/* �d���ɦW:geo_n.c ,����żƲ�N�����p�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    double a1,r,Rn=1;/*�ŧi�ܼ�,a1������,r����v,Rn��r��N����*/
    int n,i;/* �ŧi�ܼơAn�N���n���Ai�p���� */

    printf("Input a1 r and the n term calculate:\n");
    printf("a1 r n :\n");
    scanf("%lf %lf %d",&a1,&r,&n);/* ��J����żƭp���ܼ� */

    for(i=1;i<n;i++){/*����j��� i <= ���� n �� */
        Rn=Rn*r;/*�C����@���N�� Rn �ȭ��W r*/
    }

    /*��X�p��ӱo����n����*/
    printf("The n term of geometrical proportion is %g\n",a1*Rn);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
