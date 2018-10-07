/* 範例檔名:tra_fun.c ,利用printf追蹤程式函數的呼叫 */
#include <stdio.h> /* 引入標頭檔 */
#include <stdlib.h>

void fun1(){printf("fun1\n");}/* fun1函數流程顯示 */

void fun2()
{
    printf("fun2-1\n");/* fun2函數流程顯示 1 */
    fun1();
    printf("fun2-2\n");/* fun2函數流程顯示 2 */
}

void fun3()
{
    printf("fun3-1\n");/* fun3函數流程顯示 1 */
    fun2();
    printf("fun3-2\n");/* fun3函數流程顯示 2 */
}

int main(void) /* 主程式 */
{
    printf("---main-1---\n");/* 主程式流程顯示 1 */
    fun1();
    printf("---main-2---\n");/* 主程式流程顯示 2 */
    fun2();
    printf("---main-3---\n");/* 主程式流程顯示 3 */
    fun3();
    printf("---main-4---\n");/* 主程式流程顯示 4 */
    system("PAUSE");/* 暫停程式執行 */
    return 0;
}
