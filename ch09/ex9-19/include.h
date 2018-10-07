/* 範例檔名:include.h，自訂之標頭檔 */

#define PI 3.14159 /* 定義圓周率 */

/* 計算圓面積之巨集函數定義 */
#define cir_a(diameter) ((PI)*(diameter)*(diameter)*(0.25))

/* 計算圓周長之巨集函數定義 */
#define cir_l(diameter) ((PI)*(diameter))

/* 顯示直徑為 diameter 之圓面積與周長 */
void circle(double diameter);/* circle 函數之原型宣告 */
