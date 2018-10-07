/* 範例檔名:pri_n.c ,printf函數之顯示字元數 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count1,count2;/* 宣告整數變數 */

	_set_printf_count_output(1); /* 設定開啟列印輸出字元數格式符號 */

    count1=printf("1234567890\n%n",&count2);
    printf("characters printed:%d,%d\n",count1,count2);

    count1=printf("%d\n",300);
    printf("characters printed:%d\n",count1);

    system("PAUSE");
    return 0;
}