/* 範例檔名:sizeof.c ,sizeof運算子的使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    /* 宣告各種資料型態的變數 */
    short sh;/* 整數 */
    int i,i_arr[5],*i_ptr;
    long l;

    float f,f_arr[5],*f_ptr;/* 浮點數 */
    double d;
    long double ld;

    char c,*c_ptr;/* 字元 */
    char str[10];

    /* 顯示各種資料型態的變數所佔用的位元數*/
    printf("--- Variables ---\n");

    printf("(int)\n");/* 整數型態 */
    printf(" sizeof(short)=%d,sizeof(sh)=%d\n",  /* 短整數 */
                    sizeof(short),sizeof(sh));
    printf(" sizeof(int)=%d,sizeof(i)=%d\n",  /* 整數 */
                    sizeof(int),sizeof(i));
    printf(" sizeof(long)=%d,sizeof(l)=%d\n",  /* 長整數 */
                    sizeof(long),sizeof(l));
    printf(" sizeof(i_arr)=%d\n",sizeof(i_arr));  /* 整數陣列 */

    printf("(float)\n");/* 浮點數型態 */
    printf(" sizeof(float)=%d,sizeof(f)=%d\n",
                    sizeof(float),sizeof(f));
    printf(" sizeof(double)=%d,sizeof(d)=%d\n",
                    sizeof(double),sizeof(d));
    printf(" sizeof(long double)=%d,sizeof(ld)=%d\n",
                    sizeof(long double),sizeof(ld));
    printf(" sizeof(f_arr)=%d\n",sizeof(f_arr));/* 浮點數陣列 */

    printf("(char)\n");/* 字元與字串型態 */
    printf(" sizeof(char)=%d,sizeof(c)=%d,sizeof(str)=%d\n",
                        sizeof(char),sizeof(c),sizeof(str));

    printf("(pointer)\n");/* 指標型態 */
    printf(" sizeof(i_ptr)=%d\n",sizeof(i_ptr));  /* 整數指標 */
    printf(" sizeof(f_ptr)=%d\n",sizeof(f_ptr)); /* 浮點數指標 */
    printf(" sizeof(c_ptr)=%d\n",sizeof(c_ptr));  /* 字元指標 */

    /* 顯示各種資料型態的常數所佔用的位元數*/
    printf("\n--- Constants ---\n");
    printf("(int)\n");/* 整數型態 */
    printf(" sizeof(123)=%d\n",sizeof(123));
    printf(" sizeof(123u)=%d\n",sizeof(123u));
    printf(" sizeof(123l)=%d\n",sizeof(123l));
    printf(" sizeof(123ul)=%d\n",sizeof(123ul));

    printf("(float)\n");/* 浮點數型態 */
    printf(" sizeof(1.2f)=%d\n",sizeof(1.2f));
    printf(" sizeof(1.2)=%d\n",sizeof(1.2));
    printf(" sizeof(1.2l)=%d\n",sizeof(1.2l));

    printf("(char)\n");/* 字元與字串型態 */
    printf(" sizeof('a')=%d,sizeof(\"a\")=%d\n",
                        sizeof('a'),sizeof("a"));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
