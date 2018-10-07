/* 範例檔名:ex13-6\circum.h，周長函數模組標頭檔 */
#ifndef PI /* 若未定義圓周率 PI，定義之*/
    #define PI 3.14159
#endif

#ifndef DIAMETER/* 若未定義自訂直徑，定義之*/
    #define DIAMETER
    typedef double DIA;
#endif

/* 計算半徑為 diameter 的圓周長 */
double cir_l(DIA diameter);
