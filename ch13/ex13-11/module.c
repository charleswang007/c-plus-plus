/* 範例檔名:sta_fun\module.c , 函數模組 */

/* 只容許在函數模組中使用的靜態函數原型宣告 */
static int int_square(int value);/* 計算value的平方 */

/* 顯示 value 之平方值 */
void display_int_square(int value){
    printf("the square of %d is %d\n",value,int_square(value));
}

/* 計算value的平方，只能在 module.c 中呼叫  */
static int int_square(int value){
    return value*value;
}
