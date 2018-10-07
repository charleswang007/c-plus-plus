/* 範例檔名:condi.c ,條件運算子 ?: 的使用範例*/
#include <stdio.h>
#include <stdlib.h>

/* ?: 使用於前置處理中 */
#define Inter_i (i>3)? "i>3" : "i<=3"
/* 定義巨集函數 MAX(a,b) 傳回a與b之較大值 */
#define MAX(a,b) (a>b)? (a) : (b)

int main()
{
    int i=3;/* 宣告變數 */

    /* ?: 作為單一之程式敘述 */
    (i>3)?printf("Integer i>3\n"):printf("Integer i<=3\n");

    /* ?: 中使用逗號執行多行之程式敘述 */
    (i>3)?
        printf("Integer "),/* i>3 時執行 */
        printf("i>3\n")
    :
        printf("Integer "),/* i<=3 時執行 */
        printf("i<=3\n")
    ;

    /* ?: 使用於程式敘述中 */
    printf("Integer %s\n", (i>3)?"i>3":"i<=3" );

    /* ?: 使用於前置處理中 */
    printf("Integer %s\n", Inter_i );
    printf("MAX(300.7,50)=%f\n", MAX(300.7,50));

    system("PAUSE");
    return 0;
}
