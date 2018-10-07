/* 範例檔名:typedef.c ,自訂資料型態的使用 */
#include <stdio.h>/* 引入檔頭檔 */
#include <stdlib.h>

typedef int My_int;/* 自訂資料型態宣告 */
typedef char My_str[10];

int main(void)
{
    typedef float My_float;/* 自訂資料型態宣告 */

    My_int i=1;/* 宣告變數並設定初值 */
    My_float f=3e3;
    My_str str="Hello!";

    printf("My_int i=%d\n",i);/* 顯示變數值 */
    printf("My_float f=%f\n",f);
    printf("My_str str=%s\n",str);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
