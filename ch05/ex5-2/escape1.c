/* 範例檔名:escape1.c ,跳脫字元\n \b \r \t之作用 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Today is a go\nod day.\\n\n");/* \n 換行 */
    printf("Today is a go\bod day.\\b\n");/* \b 倒退一格 */
    printf("Today is a go\rod day.\\r\n");/* \r 歸位回到行首 */
    printf("Today is a go\tod day.\\t\n");/* \t 跳格(Tab) */

    system("PAUSE");
    return 0;
}
