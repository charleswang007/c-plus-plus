/* �d���ɦW:do_while.c ,�Q��do while���ϥΪ̭��ШD�̤j���]�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    /* �ŧi�ܼơAa�����ơAb���Q���ơAtemp���l�� */
    int a=0,b=0,temp=0;
    char yes_or_no;/* �O�_�~�� */

    do{
        printf("Please input two integer"  /* ���r�걵�� */
               " for finding their GCD:\n");
        scanf("%d %d",&a,&b);/* ��J�DGCD���G�ӼƦr */

        if(a>0 && b>0){/* �P�_ a �P b �Ҥj�� 0 �~���� */
            while(b!=0){/*����j��� b ������ 0 �� */
                temp=a%b;/*�Da,b�۰����l��*/
                a=b;/* �N���� b �����Q���� a */
                b=temp;/* �N�e�����o���l�ơA�]���l��b */
            }
            printf("GCD is %d\n",a);/*�̰��ɪ����Ƭ�����*/
        }
    	else{
            printf("Cann't find GCD."  /* ���r�걵�� */
		           "One of interger is zero or minus.\n");
    	}

        /* �߰ݨϥΪ̬O�_�A�~�� */
        printf("Do you want to continue ? (y/n)\n");
        scanf(" %c",&yes_or_no);/* %c�e���ݭn�[�Ů� */

    /* �p�G�n�~��h���а���j�� */
    }while(yes_or_no=='y'||yes_or_no=='Y');

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
