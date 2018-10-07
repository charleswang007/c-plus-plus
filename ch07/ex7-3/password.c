/* 範例檔名:password.c ,密碼之輸入 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    char pass[4],i;    /* 宣告字元陣列pass[4] */

    do{/* 輸入正確的密碼才可跳出迴圈 */

        printf("Input password :");
        for(i=0;i<=3;i++){
            pass[i]=getch();/* 讀取鍵盤輸入之密碼值 */
            printf("*");
        }

        /* 比對密碼，當密碼不正確時顯示錯誤訊息 */
        if( !((pass[0]=='1') && (pass[1]=='2')
              && (pass[2]=='3') && (pass[3]=='4')) )
            printf("  Wrong password");

        printf("\n");

    /* 比對密碼，密碼正確判斷式為0(假)才可跳出迴圈 */
    }while( !((pass[0]=='1') && (pass[1]=='2')
              && (pass[2]=='3') && (pass[3]=='4')) );

    /* 顯示密碼正確訊息 */
    printf("You input the right password !\n");

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
