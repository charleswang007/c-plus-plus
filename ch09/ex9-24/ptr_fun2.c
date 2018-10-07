/* 範例檔名:ptr_fun2.c , 函數指標的使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>


/* 函數定義 */
void prn1(void){printf("Function prn1.\n");}/* 顯示函數名稱 */

void prn2(void){printf("Function prn2.\n");}/* 顯示函數名稱 */

void prn_d(int i){/* 顯示函數名稱與傳入的整數 */
    printf("Function prn_d. int=%d\n",i);
}

int main(void)/* 主程式開始 */
{
    void (*ptr_fun) (void);/* 函數指標的宣告 */
    void (*ptr_fun1) (int);

    ptr_fun=prn1;/* 指派函數 prn1 給函數指標 */
    ptr_fun();/* 呼叫函數指標 ptr_fun 所指向的函數 prn1  */

    ptr_fun=prn2;/* 指派函數 prn2 給函數指標 */
    ptr_fun();/* 呼叫函數指標 ptr_fun 所指向的函數 prn2  */

    ptr_fun1=prn_d;/* 指派函數 prn_d 給函數指標 */
    ptr_fun1(5);/* 相當於 prn_d(5); */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
