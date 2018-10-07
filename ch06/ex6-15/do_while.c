/* 範例檔名:do_while.c ,利用do while讓使用者重覆求最大公因數 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    /* 宣告變數，a為除數，b為被除數，temp為餘數 */
    int a=0,b=0,temp=0;
    char yes_or_no;/* 是否繼續 */

    do{
        printf("Please input two integer"  /* 長字串接續 */
               " for finding their GCD:\n");
        scanf("%d %d",&a,&b);/* 輸入求GCD之二個數字 */

        if(a>0 && b>0){/* 判斷 a 與 b 皆大於 0 才執行 */
            while(b!=0){/*執行迴圈當 b 不等於 0 時 */
                temp=a%b;/*求a,b相除之餘數*/
                a=b;/* 將除數 b 換成被除數 a */
                b=temp;/* 將前面除得的餘數，設成餘數b */
            }
            printf("GCD is %d\n",a);/*最除盡的除數為答案*/
        }
    	else{
            printf("Cann't find GCD."  /* 長字串接續 */
		           "One of interger is zero or minus.\n");
    	}

        /* 詢問使用者是否再繼續 */
        printf("Do you want to continue ? (y/n)\n");
        scanf(" %c",&yes_or_no);/* %c前必需要加空格 */

    /* 如果要繼續則重覆執行迴圈 */
    }while(yes_or_no=='y'||yes_or_no=='Y');

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
