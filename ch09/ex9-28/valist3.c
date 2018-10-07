/* 範例檔名:valist3.c ,指標變數之不定長度引數列以 NULL 結束 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>
#include <stdarg.h>

/* 函數之不定引數列傳入原型宣告 */
void prn_str(char* pre_str,...);

int main(void)
{
    /* 顯示指定字串 */
    prn_str("Pre : ","Str1","Str2","Str3",NULL);

    system("PAUSE");
    return 0;
}
/* 顯示加入前導字串的每個引數字串值
   傳入引數：pre_str  顯示之前導字串
             不定引數  顯示之字串
   傳出值：無 */
void prn_str(char* pre_str,...)
{
    char* temp;/* 暫存引數之指標 */
    va_list var;/* 宣告存取不定引數列的變數型態 */

    va_start(var,pre_str);/* 初始化不定引數列的存取 */

    /* 不定長度引數不為 NULL，則繼續迴圈之執行 */
    while( (temp=va_arg(var,char* ))!= NULL )
        printf("%s%s\n",pre_str,temp);/* 顯示前導與引數字串值 */

    va_end(var);/* 結束不定引數列的存取 */

    return ;
}
