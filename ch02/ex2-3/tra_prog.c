/* 範例檔名:tra_prog.c ,利用printf追蹤程式的流程 */
#include <stdio.h> /* 引入標頭檔 */
#include <stdlib.h>

int main(void) /* 主函數 */
{
    int i=0,j;

    printf("prog 1!\n");/* 流程顯示 1 */

    if(i>0)/* if 判斷式 */
    {
        j=3;
        printf("if is true!\n");/* if 判斷式顯示 */
    }
    else
    {
        j=4;
        printf("if is false!\n");/* if 判斷式顯示 */
    }

    printf("prog 2!\n");/* 流程顯示 2 */

    for(;i<j;++i)/* for 迴圈 */
        printf("for loop !\n");/* for 迴圈顯示 */

    printf("prog 3!\n");/* 流程顯示 3 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;
}
