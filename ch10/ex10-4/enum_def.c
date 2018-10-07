/* 範例檔名:enum_def.c ,列舉型態定義之列舉常數值顯示 */
#include <stdio.h>/* 引入檔頭檔 */
#include <stdlib.h>

enum  FRUIT {/* 列舉型態 FRUIT 之定義 */
    APPLE,  /* 預設值為整數 0 */
    ORANGE, /* 預設值為整數 1 */
    BANANA, /* 預設值為整數 2 */
    PEAR,   /* 預設值為整數 3 */
    GRAPE   /* 預設值為整數 4 */
};

enum MONTH {/* 列舉型態 MONTH 之定義 */
    JAN=1,     /* 值為整數 1 */
    FEB,        /* 值為整數 2 */
    MAR,        /* 值為整數 3 */
    APR,        /* 值為整數 4 */
    MAY,        /* 值為整數 5 */
    JUN         /* 值為整數 6 */
};

enum MONTH_DAYS {/* 列舉型態 MONTH_DAYS 之定義 */
    dJAN=31,     /* 值為整數 31 */
    dFEB=28,     /* 值為整數 28 */
    dMAR=31,     /* 值為整數 31 */
    dAPR=30,     /* 值為整數 30 */
    dMAY,         /* 預設值為整數  30+1=31 */
    dJUN=30      /* 值為整數 30 */
};

int main(void)
{
    /* 顯示列舉常數的值 */
    printf("enum FRUIT\n");/* enum FRUIT*/
    printf("APPLE=%d\n",APPLE);
    printf("ORANGE=%d\n",ORANGE);
    printf("BANANA=%d\n",BANANA);
    printf("PEAR=%d\n",PEAR);
    printf("GRAPE=%d\n\n",GRAPE);

    printf("enum MONTH\n");/* enum MONTH */
    printf("JAN=%d\n",JAN);
    printf("FEB=%d\n",FEB);
    printf("MAR=%d\n",MAR);
    printf("APR=%d\n",APR);
    printf("MAY=%d\n",MAY);
    printf("JUN=%d\n\n",JUN);

    printf("enum MONTH_DAYS\n"); /* enum MONTH_DAYS */
    printf("dJAN=%d\n",dJAN);
    printf("dFEB=%d\n",dFEB);
    printf("dMAR=%d\n",dMAR);
    printf("dAPR=%d\n",dAPR);
    printf("dMAY=%d\n",dMAY);
    printf("dJUN=%d\n",dJUN);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
