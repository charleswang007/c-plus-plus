/* 絛ㄒ郎:float.c ,疊翴计ぇΤ弘计籔计絛瞅 */
#include <stdio.h>/* ま夹繷郎 */
#include <stdlib.h>

int main(void)
{
     float f; /* 疊翴计跑计 f */
     double d; /* 弘疊翴计跑计 d */

     /* 砞﹚ f 籔 d ぇ */
     f=1.23456789;
     d=1.234567890123456789;

     /* 陪ボ f 籔 d 计 */
     printf("Effect number characters.\n",f);/* 计ぇΤ计 */
     /* %f计Α陪ボ .10陪ボ计翴10 .19陪ボ19*/
     printf("float f=%.10f\n",f);
     printf("double d=%.19f\n",d);

     /* 砞﹚ f 籔 d ぇ计 */
     f=1e36;
     d=1e307;

     printf("Exponent\n",f); /* 计ぇ计场 */
     /* %e计Α陪ボ .10陪ボ计翴10 .19陪ボ19*/
     printf("float f=%.10e\n",f);
     printf("double f=%.19e\n",d);

     system("PAUSE");/* 既氨祘Α磅︽ */
     return 0;/* <-祘Αタ盽挡肚0 */
}
