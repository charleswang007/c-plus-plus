/* 範例檔名:scan_ch2.c ,修正後的字元之輸入 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch1,ch2;/* 宣告字元變數 */

    /* 使用字元輸入格式符號輸入二個字元 */
    printf("Input 2 characters:");
    scanf("%c %c",&ch1,&ch2);

    /* 顯示輸入的字元與相對應之ASCII碼 */
    printf("\nDisplay inputed characters...\n");
    printf("ch1=%c,%d\n",ch1,ch1);
    printf("ch2=%c,%d\n",ch2,ch2);

    system("PAUSE");
    return 0;
}
