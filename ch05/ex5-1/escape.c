/* 範例檔名:escape.c ,跳脫字元\'、\"與\\的使用 */
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    printf("'Good day'\n");/* '可直接在顯示字串中指定 */
    printf("\'Good day\'\n");/* \'也是可以的 */

    printf("\"Good day\"\n");/* "的顯示 */

    printf("\\Good day\\\n");/* \的顯示 */
    printf("\\Good\ day\\\n");/* 單一\無作用 */
    printf("\\Good \
day\\\n");    /* \可作為接續符號 */

    system("PAUSE");
    return 0;
}
