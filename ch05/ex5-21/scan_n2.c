/* �d���ɦW:scan_n2.c ,�h�� %n ���ϥνd��*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i1,i2,i3,i4,i5,i6,count1,count2
        ,count3,count4,count5,count6;/* �ŧi����ܼ� */

    /* ��J 2 �Ӿ�� */
    printf("Please input 2 integers:");
    scanf("%d%n%d%n",&i1,&count1,&i2,&count2);

    /* ��J 2 �Ӿ�ơA�P�e�P */
    printf("Please input 2 integers:");
    scanf("%d%n%d%n",&i3,&count3,&i4,&count4);

    /* ��J 2 �Ӿ�ơA%n�e�[�Ů� */
    printf("Please input 2 integers:");
    scanf("%d %n%d %n",&i5,&count5,&i6,&count6);

    printf("\ni1=%d\n",i1);
    /* �p���i1��J�����r���� */
    printf("characters count to i1=%d\n",count1);

    printf("i2=%d\n",i2);
    /* �p���i2��J�����r���� */
    printf("characters count to i2=%d\n",count2);

    printf("i3=%d\n",i3);
    /* �p���i3��J�����r���� */
    printf("characters count to i3=%d\n",count3);

    printf("i4=%d\n",i4);
    /* �p���i4��J�����r���� */
    printf("characters count to i4=%d\n",count4);

    printf("i5=%d\n",i5);
    /* �p���i5�U�@�ӰѼƫe��J���r���� */
    printf("characters count to i5=%d\n",count5);

    printf("i6=%d\n",i6);
    /* �p���i6�U�@�ӰѼƫe��J���r���� */
    printf("characters count to i6=%d\n",count6);

    system("PAUSE");
    return 0;
}
