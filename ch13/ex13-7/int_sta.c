/* 範例檔名:int_sta.c，內部靜態變數的示範 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

void fun(void){
    /* 宣告內部靜態變數，初值只設定一次，在程式編譯時 */
    static int i=500;

    printf("i=%d\n",i);/* 顯示 i 值 */
    i += 100; /* 設定 i 值自加 100 */
}

int main(void)
{
    /* 連續執行 fun 函數三次 */
    fun();
    fun();
    fun();

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
