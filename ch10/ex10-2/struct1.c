/* �d���ɦW:struct1.c�A���c�w�q�B�ܼƫŧi�P��Ȫ��]�w�ܽd */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

struct STUDENT {    /* ���cSTUDENT���w�q�ŧi */
	char name[16];       /* �m�W */
	char no[5];          /* �Ǹ� */
	float height,weight; /* �����B�魫 */
	int math,english;    /* �Ǵ����Z */
};

int main(void)
{
    /* ���c�ܼƪ��ŧi�A�ó]�w��� */
    struct STUDENT John={"John","0002",173.5,67.5,60,65};

    /* ��ܵ��c�ܼƤ��U������ */
    printf("struct STUDENT John:\n");

    printf("name=%s\n",John.name);
    printf("no=%s\n",John.no);
    printf("height=%f\n",John.height);
    printf("weight=%f\n",John.weight);
    printf("math=%d\n",John.math);
    printf("english=%d\n",John.english);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
