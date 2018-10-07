/* 範例檔名:enum_var.c ,列舉變數的使用範例 */
#include <stdio.h>/* 引入檔頭檔 */
#include <stdlib.h>

enum  FRUIT {/* 列舉型態 FRUIT 之定義 */
    APPLE,  /* 預設值為整數 0 */
    ORANGE, /* 預設值為整數 1 */
    BANANA, /* 預設值為整數 2 */
    PEAR,   /* 預設值為整數 3 */
    GRAPE   /* 預設值為整數 4 */
};

int main(void)
{
    enum FRUIT fruit;/* 列舉變數宣告 */

    char *fruit_name[]={ /*以字串陣列指標來存放列舉常數名稱*/
          "APPLE","ORANGE","BANANA","PEAR","GRAPE"};

    /* 以迴圈顯示列舉常數名稱與常數值 */
    for(fruit=APPLE;fruit<=GRAPE;++fruit){
        printf("%s=%d\n",fruit_name[fruit],fruit);
    }

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
