/* �d���ɦW:nest_if.c ,if...else�P�_�����_�����ΡA�P�_�|�~ */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int year;/* �ŧi�@��Ū�����~�N */

    printf("Please input the year:");
    scanf("%d",&year);/* Ū����J���~�N */

    if((year % 4)== 0){ /* �i�Q 4 ���� */
       if ((year%100)==0){ /* �i�Q 4,100 ���� */
           if((year%400)==0)/* �i�Q 4,100,400 ���� */
               printf("year %d is a leap year!\n",year);
           else/* �i�Q 4,100 ����,���i�Q 400 ���� */
               printf("year %d is not a leap year!\n",year);
       }
       else/* �i�Q 4 ����,���i�Q 100 ���� */
           printf("year %d is a leap year!\n",year);
    }
    else/* ���i�Q 4 ���� */
        printf("year %d is not a leap year!\n",year);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
