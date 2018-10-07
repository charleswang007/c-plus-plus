/* 範例檔名:scan_per.c ,指定百分比 % 之輸入 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float f;/* 宣告浮點數變數 */

    /* 輸入完成百分比 */
    printf("Input completed ratio (ex:30.5%%):");
    scanf("%f%%",&f);

    /* 顯示完成百分比 */
    printf("\nThe job is %g%% done\n",f);

    system("PAUSE");
    return 0;
}
