/* 範例檔名:elif.c，條件式編譯指令與#define有效範圍的示範 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

#define A  /* 定義 A */
#define B  /* 定義 B */

void fun1(void){
/* 檢查 A 與 B 的定義情形 */
    printf("\nIn fun1-------\n");
#if (defined A) && (defined B)
    printf("A and B are defined!\n");
#elif (defined A)
    printf("only A is defined!\n");
#elif (defined B)
    printf("only B is defined!\n");
#else
    printf("A and B are not defined!\n");
#endif
}

int main(void)
{
    void fun2(void);/* 函數之原型宣告 */
#undef A /* 取消 A 的定義 */

/* 檢查 A 與 B 的定義情形 */
    printf("In main-------\n");
#if (defined A) && (defined B)
    printf("A and B is defined!\n"));
#elif (defined A)
    printf("only A is defined!\n");
#elif (defined B)
    printf("only B is defined!\n");
#else
    printf("A and B is not defined!\n");
#endif

    fun1();/* 呼叫 fun1 函數 */
    fun2();/* 呼叫 fun2 函數 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
#undef B /* 取消 B 的定義 */
}

void fun2(void){
/* 檢查 A 與 B 的定義情形 */
    printf("\nIn fun2-------\n");
#if (defined A) && (defined B)
    printf("A and B is defined!\n");
#elif (defined A)
    printf("only A is defined!\n");
#elif (defined B)
    printf("only B is defined!\n");
#else
    printf("A and B is not defined!\n");
#endif
}
