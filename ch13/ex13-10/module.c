/* �d���ɦW:ex13-10\module.c , ��ƼҲ� */

#include "module.h" /* �ޤJ�ۤv�Ҳժ��w�q */

/* �ŧi�~���R�A��ƭȡA�ó]�w��Ȭ�100 */
static int my_int=100;

/* ��ܥ~���R�A�ܼƭ� my_int */
void display_myint(void){
    printf("my_int=%d\n",my_int);
}

/* �H set �ӳ]�w�Ҳդ��~���R�A�ܼƭ� my_int */
void set_myint(int set){
    my_int=set;
}
