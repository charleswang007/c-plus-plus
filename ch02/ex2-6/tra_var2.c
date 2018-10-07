/* 範例檔名:tra_var2.c ,利用printf函數追蹤變數值2 */
#include <stdio.h> /* 引入標頭檔 stdio.h*/
#include <stdlib.h>/* 引入標頭檔 stdlib.h*/

int main(void) /* 主程式 */
{/* <-程式進入執行點*/
    int a,b,c,d;/* 宣告整數變數 */

    a=2+3;
    b=2-3;
    c=a*b+a*4-b*6;/* 5 錯打成 4 */
    d=c*a+b;

    printf("a=%d\n",a);   /* 顯示變數值 */
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
