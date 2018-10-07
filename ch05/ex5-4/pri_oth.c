/* 範例檔名:pri_oth.c ,百分比與指標之顯示 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=300;/* 宣告整數變數 */

    printf("display percent :%%\n");/* %之顯示 */

    /* 整數變數之指標位址顯示 */
    printf("display address of i = %p\n",&i);

    system("PAUSE");
    return 0;
}
