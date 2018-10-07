/* 範例檔名:struct1.c，結構定義、變數宣告與初值的設定示範 */
#include <stdio.h>/* 引入檔頭檔 */
#include <stdlib.h>

struct STUDENT {    /* 結構STUDENT的定義宣告 */
	char name[16];       /* 姓名 */
	char no[5];          /* 學號 */
	float height,weight; /* 身高、體重 */
	int math,english;    /* 學期成績 */
};

int main(void)
{
    /* 結構變數的宣告，並設定初值 */
    struct STUDENT John={"John","0002",173.5,67.5,60,65};

    /* 顯示結構變數之各成員值 */
    printf("struct STUDENT John:\n");

    printf("name=%s\n",John.name);
    printf("no=%s\n",John.no);
    printf("height=%f\n",John.height);
    printf("weight=%f\n",John.weight);
    printf("math=%d\n",John.math);
    printf("english=%d\n",John.english);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
