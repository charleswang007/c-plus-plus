/* 範例檔名:scan_ch3.c ,空格於連續輸入字元時之作用 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i1,i2,i3,i4;
    char ch1,ch2,ch3,ch4;/* 宣告字元變數 */

    /* 四組先讀取整數再讀取字元的程式 */
    printf("(1)Input 1 number and 1 character:");/* 第一組 */
    scanf("%d%c",&i1,&ch1); /* %c前未加空格，須連續輸入*/

    printf("\n(2)Input 1 number and 1 character:");/*第二組*/
    scanf("%d %c",&i2,&ch2);/* %c前加空格，可分隔輸入*/

    printf("\n(3)Input 1 number :");/* 第三組 */
    scanf("%d",&i3);
    printf("Input 1 character:");
    scanf("%c",&ch3); /* %c 前未加空格，無法輸入字元 */

    printf("\n\n(4)Input 1 number :");/* 第四組 */
    scanf("%d",&i4);
    printf("Input 1 character:");
    scanf(" %c",&ch4);/* %c 前加空格，可輸入讀取之字元 */

    /* 顯示輸入的數字 */
    printf("\nDisplay inputed characters...\n");
    printf("i1=%d\n",i1);
    printf("ch1=%c,%d\n",ch1,ch1);

    printf("\ni2=%d\n",i2);
    printf("ch2=%c,%d\n",ch2,ch2);

    printf("\ni3=%d\n",i3);
    printf("ch3=%c,%d\n",ch3,ch3);

    printf("\ni4=%d\n",i4);
    printf("ch4=%c,%d\n",ch4,ch4);

    system("PAUSE");
    return 0;
}
