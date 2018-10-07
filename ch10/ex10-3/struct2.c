/* 範例檔名:struct2.c，自訂結構型態的使用 */
#include <stdio.h>/* 引入檔頭檔 */
#include <stdlib.h>

struct STUDENT {    /* 結構STUDENT的定義宣告 */
	char name[16];       /* 姓名 */
	char no[5];          /* 學號 */
	float height,weight; /* 身高、體重 */
	int math,english;    /* 學期成績 */
};

typedef struct STUDENT STUD;/* 自訂資料型態宣告 */

int main(void)
{
    /* 以自訂型態宣告結構變數，並設定初值 */
    STUD Mary;

    /* 指定結構變數 Mary 之各成員值 */
    strcpy(Mary.name,"Mary");
    strcpy(Mary.no,"0003");
    Mary.height=173.5;
    Mary.weight=67.5;
    Mary.math=60;
    Mary.english=65;

    /* 顯示結構變數之各成員值 */
    printf("STUD Mary:\n");
    printf("name=%s\n",Mary.name);
    printf("no=%s\n",Mary.no);
    printf("height=%f\n",Mary.height);
    printf("weight=%f\n",Mary.weight);
    printf("math=%d\n",Mary.math);
    printf("english=%d\n",Mary.english);

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
