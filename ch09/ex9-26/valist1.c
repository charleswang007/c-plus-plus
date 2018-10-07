/* 絛ㄒ郎:valist1.c , 絋ま计﹚ㄧ计ぇぃ﹚ま计ぇ计 */
#include <stdio.h>/* ま夹繷郎 */
#include <stdlib.h>
#include <stdarg.h>

double average(int i,...);/* ㄧ计ぇぃ﹚ま计肚 */

int main(void)
{
    /* 陪ボぃ﹚ま计┮Τま计キА */
    printf("average(3,2.0,3.0,4.0)=%f\n",
               average(3,2.0,3.0,4.0));

    system("PAUSE");
    return 0;
}

/* 璸衡ぃ﹚ま计┮Τま计ぇキА
   肚ま计i  ぃ﹚ま计计
             ぃ﹚ま计  璸衡
   肚ぃ﹚ま计ぇキА */
double average(int i,...)
{
    double total=0;/* ぃ﹚ま计ぇ羆㎝ */
    int j;/* 璸计ノ */
    va_list var;/* ぃ﹚ま计跑计篈 */

    va_start(var,i);/* ﹍てぃ﹚ま计 */

    for(j=0;j<i;j++)/* 羆┮Τま计 */
        total += va_arg( var , double);/* double眔ま计 */

    va_end(var);/* 挡ぃ﹚ま计 */

    return total/i;/* 肚キА */
}
