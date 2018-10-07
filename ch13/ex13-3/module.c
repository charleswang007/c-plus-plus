/* 範例檔名:ex13-3\module.c , 函數模組 */

#include "module.h" /* 引入自己模組的定義 */

/* 計算半徑為 diameter 的圓面積 */
double cir_a(double diameter){
    return (PI*diameter*diameter/4);
}
/* 計算半徑為 diameter 的圓周長 */
double cir_l(double diameter){
    return (PI*diameter);
}
