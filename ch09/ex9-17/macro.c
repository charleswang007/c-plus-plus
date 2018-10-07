/* 範例檔名:macro.c ,使用define作為巨集函數功能 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

#define F(X) 6*X+5  /* 定義 F 函數，都不加括號 */
#define FA(X) (6*X+5) /* 定義 FA 函數，只加最外層括號 */
#define FAA(X) (6*(X)+5) /* 定義 FAA 函數，加變數與最外層括號 */

int main(void)
{
    /* 計算 f(a) */
    printf("F(5)=%d\n",F(5)); /* 6*5+5=35 */
    printf("FA(5)=%d\n",FA(5)); /* (6*5+5)=35 */
    printf("FAA(5)=%d\n\n",FAA(5));/* (6*(5)+5)=35 */

    /* 計算 f(a+b) */
    printf("F(5+2)=%d\n",F(5+2)); /* 6*5+2+5=37 */
    printf("FA(5+2)=%d\n",FA(5+2)); /* (6*5+2+5)=37 */
    printf("FAA(5+2)=%d\n\n",FAA(5+2)); /* (6*(5+2)+5)=47 */

    /* 計算 f(f(a)) */
    printf("F(F(2))=%d\n",F(F(2))); /* 6*6*2+5+5=82 */
    printf("FA(FA(2))=%d\n",FA(FA(2))); /* 6*(6*2+5)+5=107 */
    /* 6*(6*(2)+5)+5=107 */
    printf("FAA(FAA(2))=%d\n\n",FAA(FAA(2)));

    /* 計算 f(f(a+b)) */
    printf("F(F(5+2))=%d\n",F(F(5+2))); /* 6*6*5+2+5+5=192 */
    /* 6*(6*5+2+5)+5=227 */
    printf("FA(FA(5+2))=%d\n",FA(FA(5+2)));
    /* 6*(6*(5+2)+5)+5=287 */
    printf("FAA(FAA(5+2))=%d\n",FAA(FAA(5+2)));

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
