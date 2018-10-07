/* 絛ㄒ郎:ex13-10\module.c , ㄧ计家舱 */

#include "module.h" /* ま家舱﹚竡 */

/* 场繰篈俱计砞﹚100 */
static int my_int=100;

/* 陪ボ场繰篈跑计 my_int */
void display_myint(void){
    printf("my_int=%d\n",my_int);
}

/*  set ㄓ砞﹚家舱ぇ场繰篈跑计 my_int */
void set_myint(int set){
    my_int=set;
}
