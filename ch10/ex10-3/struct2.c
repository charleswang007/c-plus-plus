/* �d���ɦW:struct2.c�A�ۭq���c���A���ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

struct STUDENT {    /* ���cSTUDENT���w�q�ŧi */
	char name[16];       /* �m�W */
	char no[5];          /* �Ǹ� */
	float height,weight; /* �����B�魫 */
	int math,english;    /* �Ǵ����Z */
};

typedef struct STUDENT STUD;/* �ۭq��ƫ��A�ŧi */

int main(void)
{
    /* �H�ۭq���A�ŧi���c�ܼơA�ó]�w��� */
    STUD Mary;

    /* ���w���c�ܼ� Mary ���U������ */
    strcpy(Mary.name,"Mary");
    strcpy(Mary.no,"0003");
    Mary.height=173.5;
    Mary.weight=67.5;
    Mary.math=60;
    Mary.english=65;

    /* ��ܵ��c�ܼƤ��U������ */
    printf("STUD Mary:\n");
    printf("name=%s\n",Mary.name);
    printf("no=%s\n",Mary.no);
    printf("height=%f\n",Mary.height);
    printf("weight=%f\n",Mary.weight);
    printf("math=%d\n",Mary.math);
    printf("english=%d\n",Mary.english);

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
