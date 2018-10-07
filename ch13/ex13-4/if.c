/* 範例檔名:if.c，#if、#else、#endif指令與defined敘述的示範 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

#define MAX(a,b) ((a>b)?(a):(b)) /* 定義巨集函數 MAX */

int main(void)
{
/* MAX 已定義之編譯執行 */
#if defined MAX
    printf("MAX(10,5)=%d\n",MAX(10,5));
#else
    printf("Macro MAX is not defined\n");
#endif

#undef MAX /* 取消巨集函數 MAX 定義*/
    printf("Macro MAX is undefined!\n");

/* MAX 未定義之編譯 */
#if defined MAX
    printf("MAX(10,5)=%d\n",MAX(10,5));
#else
    printf("Macro MAX is not defined\n");
#endif

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
