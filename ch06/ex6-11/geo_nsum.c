/* �d���ɦW:geo_nsum.c ,����żƫeN�����[�`�p�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    /*�ŧi�ܼ�,a1������,r����v,Rn��r��N����,sum���en���M*/
    double a1,r,Rn,sum=0;
    int n,i,j;/* �ŧi�ܼơAn�N���n���Ai,j�p���� */

    printf("Input a1 r and the n term calculate:\n");;
    printf("a1 r n :\n");
    scanf("%lf %lf %d",&a1,&r,&n);/* ��J����żƭp���ܼ� */

    for(i=1;i<=n;i++){/*����j��� i <= ���� n �� */
        Rn=1;

        for(j=1;j<i;j++){/*����j��� i < j �� */
            Rn=Rn*r;/*�C����@���N�� Rn �ȭ��W r*/
        }

        /* ��ܲ� i ������żƭ� */
        printf("The %d term of " /* ���r�ꪺ����覡 */
               "geometrical proportion is %g\n",i,a1*Rn);

        sum += a1*Rn;/* �[�`�e i ������ż� */
    }

    /*��X�p��ӱo���en���M*/
    printf("\nThe sum is %g\n",sum);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
