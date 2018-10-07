/* 範例檔名:ex13-6\area.c，面積函數模組 */
#include "area.h" /* 引入自己模組的定義 */

/* 計算半徑為 diameter 的圓面積 */
double cir_a(DIA diameter){
    return (PI*diameter*diameter/4);
}
