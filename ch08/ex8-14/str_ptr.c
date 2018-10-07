/* 範例檔名:str_ptr.c ,字串指標陣列的使用 */
#include <stdio.h>/* 引入標頭檔 */
#include <stdlib.h>

int main(void)
{
    /* 宣告陣列與變數 */
    char str_array[7][5]={"Mon","Tue","Wed",
                          "Thu","Frid","Sat","Sun"};
    char *str_ptr_array[7]={"Mon","Tuesday","Wed",
                            "Thursday","Friday","Sat","Sun"};
    int i,j;

    /* 二維字元陣列的顯示 */
    printf("2d char array:\n");/* 顯示標頭 */
    printf("----------------\n");

    for(i=0;i<7;i++){
        printf("{");

        for(j=0;j<5;++j)
            printf("%c.",str_array[i][j]);

        printf("}\n");
    }

    /* 字元指標的字串內容顯示 */
    printf("\nchar pointer array:\n");/* 顯示標頭 */
    printf("----------------\n");

    for(i=0;i<7;i++){
        printf("{");

        j=0;
        while(str_ptr_array[i][j]!=NULL)/* 檢查是否己到字串結尾 */
            printf("%c.",str_ptr_array[i][j++]);

        printf("}\n");
    }

    system("PAUSE");/* 暫停程式執行 */
    return 0;/* <-程式正常結束，傳回0 */
}
