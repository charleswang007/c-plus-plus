/* 範例檔名:include.c , 自訂標頭檔的使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

#include "include.h"/* 引入自訂標頭檔 */

/* circle 函數，顯示直徑為 diameter 之圓面積與周長 */
void circle(double diameter){
    printf("circle of diameter %f\n",diameter);
    printf("  the area is %f\n",cir_a(diameter));
    printf("  the circumference is %f\n",cir_l(diameter));
}

int main(void)/* 主程式開始 */
{
    circle(5);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
