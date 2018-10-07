/* 範例檔名:initial.c ,未初始化變數之顯示 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int i; /* 宣告整數變數 i */
    float f; /* 宣告浮點數變數 f */
    char ch; /* 宣告字元變數 ch */

    /* 設定變數 i , f , ch 之未初始值 */
    printf("Unseted Initial value of :\n");
    printf("int i=%d\n",i);
    printf("float f=%e\n",f);
    printf("char ch=%c\n",ch);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
