/* �d���ɦW:sizeof.c ,sizeof�B��l���ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    /* �ŧi�U�ظ�ƫ��A���ܼ� */
    short sh;/* ��� */
    int i,i_arr[5],*i_ptr;
    long l;

    float f,f_arr[5],*f_ptr;/* �B�I�� */
    double d;
    long double ld;

    char c,*c_ptr;/* �r�� */
    char str[10];

    /* ��ܦU�ظ�ƫ��A���ܼƩҦ��Ϊ��줸��*/
    printf("--- Variables ---\n");

    printf("(int)\n");/* ��ƫ��A */
    printf(" sizeof(short)=%d,sizeof(sh)=%d\n",  /* �u��� */
                    sizeof(short),sizeof(sh));
    printf(" sizeof(int)=%d,sizeof(i)=%d\n",  /* ��� */
                    sizeof(int),sizeof(i));
    printf(" sizeof(long)=%d,sizeof(l)=%d\n",  /* ����� */
                    sizeof(long),sizeof(l));
    printf(" sizeof(i_arr)=%d\n",sizeof(i_arr));  /* ��ư}�C */

    printf("(float)\n");/* �B�I�ƫ��A */
    printf(" sizeof(float)=%d,sizeof(f)=%d\n",
                    sizeof(float),sizeof(f));
    printf(" sizeof(double)=%d,sizeof(d)=%d\n",
                    sizeof(double),sizeof(d));
    printf(" sizeof(long double)=%d,sizeof(ld)=%d\n",
                    sizeof(long double),sizeof(ld));
    printf(" sizeof(f_arr)=%d\n",sizeof(f_arr));/* �B�I�ư}�C */

    printf("(char)\n");/* �r���P�r�ꫬ�A */
    printf(" sizeof(char)=%d,sizeof(c)=%d,sizeof(str)=%d\n",
                        sizeof(char),sizeof(c),sizeof(str));

    printf("(pointer)\n");/* ���Ы��A */
    printf(" sizeof(i_ptr)=%d\n",sizeof(i_ptr));  /* ��ƫ��� */
    printf(" sizeof(f_ptr)=%d\n",sizeof(f_ptr)); /* �B�I�ƫ��� */
    printf(" sizeof(c_ptr)=%d\n",sizeof(c_ptr));  /* �r������ */

    /* ��ܦU�ظ�ƫ��A���`�ƩҦ��Ϊ��줸��*/
    printf("\n--- Constants ---\n");
    printf("(int)\n");/* ��ƫ��A */
    printf(" sizeof(123)=%d\n",sizeof(123));
    printf(" sizeof(123u)=%d\n",sizeof(123u));
    printf(" sizeof(123l)=%d\n",sizeof(123l));
    printf(" sizeof(123ul)=%d\n",sizeof(123ul));

    printf("(float)\n");/* �B�I�ƫ��A */
    printf(" sizeof(1.2f)=%d\n",sizeof(1.2f));
    printf(" sizeof(1.2)=%d\n",sizeof(1.2));
    printf(" sizeof(1.2l)=%d\n",sizeof(1.2l));

    printf("(char)\n");/* �r���P�r�ꫬ�A */
    printf(" sizeof('a')=%d,sizeof(\"a\")=%d\n",
                        sizeof('a'),sizeof("a"));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
