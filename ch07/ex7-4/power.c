/* �d���ɦW:power.c ,���T�����2��50����i�}�᪺�C�@�ӼƦr */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int digit[20],i,j,k,carry;    /* �ŧi�r���}�Cpass[20] */

    for(i=0;i<20;++i) digit[i]=0;/* ��l�Ʀr���}�C pass */

    digit[0]=1;

    for(i=0;i<50;++i)/* �p�� 50 �� */
    {
        for(j=19;j>=0;--j)/* �Ndigit�}�C�Ҧ��������� 2 */
        {
            digit[j]*=2;/* ���w�}�C�������󥻨��� 2 ����*/

            carry=1;/* �i��j��O�_�ݭn�~�� */
            k=0;
            do{/* �i��j�� */
                if(digit[j+k]>9){/* ��}�C�����Ȥj��10�ɤ��i��*/
                    /* �j��10�ɶi���W�@�Ӱ}�C���� */
                    if((j+k+1)<=19)digit[j+k+1] += digit[j+k]/10;

                    digit[j+k] %= 10;/* �u���Ӧ�ƨϤ��p��10 */
                }

                /* ��W�@�줣�ݶi��ɰ���j�� */
                if((digit[j+k+1]>9)&&((j+k+1)<=19))
                    k++;
                else
                    carry=0;/* ����j�� */
            }while(carry);
        }

         /* ��� 2 �� i ���誺�C�Ӧ�� */
        printf("i^%2d=",i+1);
        for(j=19;j>=0;--j)
        {
            printf("%d",digit[j]);
        }
        printf("\n");

    }

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
