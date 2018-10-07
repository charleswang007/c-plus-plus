/* 範例檔名:tra_var1.c ,利用printf函數追蹤變數值1 */
#include <stdio.h> /* 引入標頭檔 stdio.h*/
#include <stdlib.h>/* 引入標頭檔 stdlib.h*/

int main(void) /* 主程式 */
{/* <-程式進入執行點*/
    int a,b,c;/* 宣告整數變數 */

    a=10;
    b=20;
    c=a-b;/* + 錯打成 - */

    printf("a=%d\n",a);   /* 顯示變數值 */
    printf("b=%d\n",b);
    printf("c=a+b=%d\n",c);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
