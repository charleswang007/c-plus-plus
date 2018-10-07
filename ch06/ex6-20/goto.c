/* 範例檔名:goto.c ,在for迴圈中使用goto敘述 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    int i;

    for(i=1;i<=4;i++){
        printf("i=%d\n",i);/* 第幾次執行迴圈 */
        printf("section 1\n");/* 程式區段一 */

        if(i==3) goto STOP;/* 如果i=3,則強迫程式跳到標籤STOP */
        printf("section 2\n");/* 程式區段二 */
    }
    printf("section 3\n");/* 程式區段三 */

STOP:/* STOP 標籤 */
    printf("section 4\n");/* 程式區段四 */

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
