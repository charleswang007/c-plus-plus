/* �d���ɦW:m_circle.c ,�h�Ӷꭱ�n���p�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
     float fRadiusLarge=5,/* �ŧi�T�Ӷ�b�|�ܼƨë��w��� */
           fRadiusMid=3,
           fRadiusSmall=1,
           fPI=3.14, /* �ŧi��P�v */
           /* �ŧi�T�Ӷꭱ�n�ܼƨæP�ɭp��X���G */
           fAreaLarge=fPI*fRadiusLarge*fRadiusLarge,
           fAreaMid=fPI*fRadiusMid*fRadiusMid,
           fAreaSmall=fPI*fRadiusSmall*fRadiusSmall;

     /*��ܭp�⵲�G*/
     printf("The area of radius %f is %f\n"
                                  ,fRadiusLarge,fAreaLarge);
     printf("The area of radius %f is %f\n"
                                  ,fRadiusMid,fAreaMid);
     printf("The area of radius %f is %f\n"
                                  ,fRadiusSmall,fAreaSmall);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
