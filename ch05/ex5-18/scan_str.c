/* 範例檔名:scan_str.c ,字串之輸入 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* 宣告四個字元陣列(字串變數) */
    char str1[10],str2[10],str3[10],str4[10];

    printf("Input 4 strings:\n");/* 輸入四個字串 */
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    scanf("%s",str4);

    /* 顯示輸入的字串 */
    printf("\nDisplay inputed strings...\n");
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);
    printf("str3=%s\n",str3);
    printf("str4=%s\n",str4);

    system("PAUSE");
    return 0;
}
