/* 範例檔名:logical.c ,邏輯運算子的使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int A=7,B=3;/* 宣告變數並設定初值 */

    /* 進行邏輯運算並輸出結果 */
    printf("A=7,B=3\n\n");
    printf("(A>B)&&(A<B) is %d\n",(A>B)&&(A<B));/*結果為假*/
    printf("(A>B)&&(A>B) is %d\n",(A>B)&&(A>B));/*結果為真*/
    printf("(A>B)||(A<B) is %d\n",(A>B)||(A<B));/*結果為真*/
    printf("(A<B)||(A==B) is %d\n",(A<B)||(A==B));/*結果為假*/
    printf("!(A<B) is %d\n",!(A<B));/*結果為真*/

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
