/* 範例檔名:string.c ,字串輸出入函數puts與gets之使用*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str1[30];/* 宣告變數 */

    puts("Input a string:");/* 顯示輸入提示 */
    gets(str1);/* 輸入字串到變數str1 */

    puts("\nDisplay inputed string:");
    puts(str1);/* 顯示輸入之字串str1 */

    system("PAUSE");
    return 0;
}
