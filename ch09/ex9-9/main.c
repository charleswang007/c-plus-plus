/* 範例檔名:main.c , main主程式的傳入參數argc,argv */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(int argc,char *argv[])/* 主程式開始 */
{
    int i;

    /* 顯示傳給主程式的資料 */
    printf("argc=%d\n",argc);

    for(i=0;i<argc;++i) /* 顯示字串指標陣列argv的資料 */
        printf("argv[%d]=%s\n",i,argv[i]);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
